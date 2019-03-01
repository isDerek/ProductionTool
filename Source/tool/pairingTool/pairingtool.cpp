#include "pairingtool.h"
#include "ui_pairingtool.h"
#include <QDebug>
#include <QSqlRecord>
PairingTool::PairingTool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PairingTool)
{
    ui->setupUi(this);
    this->setWindowTitle("Pairing Tool");
    this->setFixedSize(734,572);
    m_bDongleOpen = false;
    m_bMouseOpen = false;
    m_nReadBuffSize = 64;
    rfSerialPortTmr = new QTimer; // 刷新串口定时器
    mysql->createConnection();
    InitStatusBar();
    InitCommCmb();
    connect(rfSerialPortTmr,SIGNAL(timeout()),this,SLOT(rfSerialPort()));
    rfSerialPortTmr->start(1000);
    // 捕捉接收信号定时器
    connect(m_DongleSerial, SIGNAL(readyRead()), this, SLOT(slot_RecvDonglePortData()));
    connect(m_MouseSerial, SIGNAL(readyRead()), this, SLOT(slot_RecvMousePortData()));
    SetDongleModel(); // 设置 Dongle 数据库模型进表格
    SetMouseModel(); // 设置 Mouse 数据库模型进表格
    SetPairingInfoModel(); // 设置 配对码数据库模型进表格
//    ui->le_mouseMAC->setEnabled(false);
//    ui->le_dongleMAC->setEnabled(false);
    ui->le_pairingCode->setEnabled(false);
    ui->te_mouseRevData->setReadOnly(true);
    ui->te_dongleRevData->setReadOnly(true);
}

PairingTool::~PairingTool()
{
    delete ui;
}

void PairingTool::SetPairingInfoModel()
{
    pairingInfoModel = new QSqlTableModel(this);
    pairingInfoModel->setTable("pairingInfo");
    pairingInfoModel->select();
    // 数据库从第 0 行算起
    int rowCount = pairingInfoModel->rowCount()-1;
    // 数据库中最后一行的 id + 1 作为配对码
    int pairingCode = pairingInfoModel->record(rowCount).value(0).toInt() + 1;
    ui->le_pairingCode->setText(QString::number(pairingCode));
    pairingInfoModel->removeColumn(0);// 去除 Id
//    // 分配新的配对码到配对码窗口
//    ui->le_pairingCode->setText(QString::number(pairingInfoModel->rowCount()+1));
    // 设置编辑策略
    dongleModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tbv_ParingInfo->setModel(pairingInfoModel);
    // 固定列宽
    ui->tbv_ParingInfo->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
    ui->tbv_ParingInfo->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Fixed);
    ui->tbv_ParingInfo->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Fixed);
    // 设置表头高度
    ui->tbv_ParingInfo->horizontalHeader()->setMinimumHeight(30);
    // 设置列宽
    ui->tbv_ParingInfo->setColumnWidth(0,166);
    ui->tbv_ParingInfo->setColumnWidth(1,166);
    ui->tbv_ParingInfo->setColumnWidth(2,166);
    // 设置表格的单元为只读属性，不能编辑
    ui->tbv_ParingInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 不显示行头
    ui->tbv_ParingInfo->verticalHeader()->hide();
}

void PairingTool::SetDongleModel()
{
    dongleModel = new QSqlTableModel(this);
    dongleModel->setTable("dongle");
    dongleModel->select();
    dongleModel->removeColumn(0);// 去除 Id
    dongleModel->removeColumn(0);// 去除 msgId
    // 设置编辑策略
    dongleModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tbv_Dongle->setModel(dongleModel);
    // 固定列宽
    ui->tbv_Dongle->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
    ui->tbv_Dongle->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Fixed);
    ui->tbv_Dongle->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Fixed);
    // 设置表头高度
    ui->tbv_Dongle->horizontalHeader()->setMinimumHeight(30);
    // 设置列宽
    ui->tbv_Dongle->setColumnWidth(0,166);
    ui->tbv_Dongle->setColumnWidth(1,166);
    ui->tbv_Dongle->setColumnWidth(2,166);
    // 设置表格的单元为只读属性，不能编辑
    ui->tbv_Dongle->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 不显示行头
    ui->tbv_Dongle->verticalHeader()->hide();
}

void PairingTool::SetMouseModel()
{
    mouseModel = new QSqlTableModel(this);
    mouseModel->setTable("mouse");
    mouseModel->select();
    mouseModel->removeColumn(0);// 去除 Id
    mouseModel->removeColumn(0);// 去除 msgId
    // 设置编辑策略
    mouseModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tbv_Mouse->setModel(mouseModel);
    // 固定列宽
    ui->tbv_Mouse->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
    ui->tbv_Mouse->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Fixed);
    ui->tbv_Mouse->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Fixed);
    // 设置表头高度
    ui->tbv_Mouse->horizontalHeader()->setMinimumHeight(30);
    // 设置列宽
    ui->tbv_Mouse->setColumnWidth(0,166);
    ui->tbv_Mouse->setColumnWidth(1,166);
    ui->tbv_Mouse->setColumnWidth(2,166);
    // 设置表格的单元为只读属性，不能编辑
    ui->tbv_Mouse->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 不显示行头
    ui->tbv_Mouse->verticalHeader()->hide();
}

// 检测到 USB 设备被溢出，关闭串口，并弹出提示
void PairingTool::handleDongleSerialError(QSerialPort::SerialPortError error)
{
    if(error == QSerialPort::ResourceError || error == QSerialPort::PermissionError)
    {
        if(m_DongleSerial->isOpen())
        {
            m_DongleSerial->clearError();
            m_DongleSerial->close();
            ui->OnOffBtn_Dongle->setText("打开");
            m_bDongleOpen = false;
            ui->PortNumCmb_Dongle->setEnabled(true);
            ui->DataBCmb_Dongle->setEnabled(true);
            ui->DPaityCmb_Dongle->setEnabled(true);
            ui->StopBCmb_Dongle->setEnabled(true);
            ui->FlowCtrlCmb_Dongle->setEnabled(true);
            ui->baudRCmb_Dongle->setEnabled(true);
            SetSerState();
        }
    }
}

void PairingTool::handleMouseSerialError(QSerialPort::SerialPortError error)
{
    if(error == QSerialPort::ResourceError || error == QSerialPort::PermissionError)
    {
        if(m_MouseSerial->isOpen())
        {
            m_MouseSerial->clearError();
            m_MouseSerial->close();
            ui->OnOffBtn_Mouse->setText("打开");
            m_bMouseOpen = false;
            ui->PortNumCmb_Mouse->setEnabled(true);
            ui->DataBCmb_Mouse->setEnabled(true);
            ui->DPaityCmb_Mouse->setEnabled(true);
            ui->StopBCmb_Mouse->setEnabled(true);
            ui->FlowCtrlCmb_Mouse->setEnabled(true);
            ui->baudRCmb_Mouse->setEnabled(true);
            SetSerState();
        }
    }
}

void PairingTool::rfSerialPort()
{
    // 刷新串口，动态监测串口
    SetDonglePortNumCmb();
    SetMousePortNumCmb();
    // 监测串口是否被拔出
    handleDongleSerialError(m_DongleSerial->error());
    handleMouseSerialError(m_MouseSerial->error());
}

void PairingTool::SetSerState()
{
    QString strDongleState,strMouseState;
    // Dongle 串口是否打开
    if (m_bDongleOpen)
        strDongleState = tr("打开");
    else {
        strDongleState = tr("关闭");
    }
    // Mouse 串口是否打开
    if (m_bMouseOpen)
        strMouseState = tr("打开");
    else {
        strMouseState = tr("关闭");
    }
    m_DongleSerStateLbl->setText(tr("Dongle 串口状态：%1").arg(strDongleState));
    m_MouseSerStateLbl->setText(tr("Mouse 串口状态：%1").arg(strMouseState));
}

void PairingTool::InitStatusBar()
{
    m_DongleSerStateLbl = new QLabel();
    m_MouseSerStateLbl = new QLabel();
    m_DongleSerStateLbl->setMinimumSize(180,20);
    m_MouseSerStateLbl->setMinimumSize(180,20);
    ui->statusbar->addWidget(m_DongleSerStateLbl);
    ui->statusbar->addWidget(m_MouseSerStateLbl);
    SetSerState();
}

QStringList PairingTool::GetEnableCommPortQt()
{
    QStringList CommPortList;
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            CommPortList.append(serial.portName());
            serial.close();
        }
    }

    return CommPortList;
}

void PairingTool::SetDonglePortNumCmb()
{
    QStringList commPortList = GetEnableCommPortQt();
    QStringList portItems;
    int portItemsCounts;
    // 如果串口正在使用，然后串口定时刷新，当前串口字段依旧保留
    if(m_DongleSerial->isOpen())
    {
      QString serialPort = m_DongleSerial->portName();
      commPortList.insert(0,serialPort);
    }
//    qDebug() << commPortList;
    if(! commPortList.isEmpty())
    {
        portItemsCounts = ui->PortNumCmb_Dongle->count();
        for(int i = 0; i<portItemsCounts;i++)
        {
            portItems.append(ui->PortNumCmb_Dongle->itemText(i));
        }
        if(portItems == commPortList)
        {
            return;
        }
        else
        {
          ui->PortNumCmb_Dongle->clear();
          ui->PortNumCmb_Dongle->addItems(commPortList);
        }
    }
}

void PairingTool::SetMousePortNumCmb()
{
    QStringList commPortList = GetEnableCommPortQt();
    QStringList portItems;
    int portItemsCounts;
    // 如果串口正在使用，然后串口定时刷新，当前串口字段依旧保留
    if(m_MouseSerial->isOpen())
    {
      QString serialPort = m_MouseSerial->portName();
      commPortList.insert(0,serialPort);
    }
//    qDebug() << commPortList;
    if(! commPortList.isEmpty())
    {
        portItemsCounts = ui->PortNumCmb_Mouse->count();
        for(int i = 0; i<portItemsCounts;i++)
        {
            portItems.append(ui->PortNumCmb_Mouse->itemText(i));
        }
        if(portItems == commPortList)
        {
            return;
        }
        else
        {
          ui->PortNumCmb_Mouse->clear();
          ui->PortNumCmb_Mouse->addItems(commPortList);
        }
    }
}

void PairingTool::SetDongleBaudCmb()
{
    QStringList baudRList;
    baudRList.append(tr("110"));
    baudRList.append(tr("300"));
    baudRList.append(tr("4800"));
    baudRList.append(tr("9600"));
    baudRList.append(tr("115200"));
    baudRList.append(tr("自定义"));

    ui->baudRCmb_Dongle->addItems(baudRList);
    ui->baudRCmb_Dongle->setCurrentIndex(4);
}

void PairingTool::SetMouseBaudCmb()
{
    QStringList baudRList;
    baudRList.append(tr("110"));
    baudRList.append(tr("300"));
    baudRList.append(tr("4800"));
    baudRList.append(tr("9600"));
    baudRList.append(tr("115200"));
    baudRList.append(tr("自定义"));

    ui->baudRCmb_Mouse->addItems(baudRList);
    ui->baudRCmb_Mouse->setCurrentIndex(4);
}

void PairingTool::SetDongleDPaityCmb()
{
    QStringList DPaityList;
    DPaityList.append(tr("NONE"));
    DPaityList.append(tr("ODD"));
    DPaityList.append(tr("EVEN"));
    DPaityList.append(tr("MARK"));
    DPaityList.append(tr("SPACE"));

    ui->DPaityCmb_Dongle->addItems(DPaityList);
}

void PairingTool::SetMouseDPaityCmb()
{
    QStringList DPaityList;
    DPaityList.append(tr("NONE"));
    DPaityList.append(tr("ODD"));
    DPaityList.append(tr("EVEN"));
    DPaityList.append(tr("MARK"));
    DPaityList.append(tr("SPACE"));

    ui->DPaityCmb_Mouse->addItems(DPaityList);
}

void PairingTool::SetDongleDataBCmb()
{
    for(int i = 5; i<= 8; i++)
    {
        QString strDataB = QString::number(i);
        ui->DataBCmb_Dongle->addItem(strDataB);
    }
    ui->DataBCmb_Dongle->setCurrentIndex(3);
}

void PairingTool::SetMouseDataBCmb()
{
    for(int i = 5; i<= 8; i++)
    {
        QString strDataB = QString::number(i);
        ui->DataBCmb_Mouse->addItem(strDataB);
    }
    ui->DataBCmb_Mouse->setCurrentIndex(3);
}

void PairingTool::SetDongleStopBCmb()
{
    ui->StopBCmb_Dongle->addItem(tr("1"));
    ui->StopBCmb_Dongle->addItem(tr("1.5"));
    ui->StopBCmb_Dongle->addItem(tr("2"));
}

void PairingTool::SetMouseStopBCmb()
{
    ui->StopBCmb_Mouse->addItem(tr("1"));
    ui->StopBCmb_Mouse->addItem(tr("1.5"));
    ui->StopBCmb_Mouse->addItem(tr("2"));
}

void PairingTool::SetDongleStreamCmb()
{
    ui->FlowCtrlCmb_Dongle->addItem(tr("NO"));
    ui->FlowCtrlCmb_Dongle->addItem(tr("RTS/CTS"));
    ui->FlowCtrlCmb_Dongle->addItem(tr("XON/XOFF"));
}

void PairingTool::SetMouseStreamCmb()
{
    ui->FlowCtrlCmb_Mouse->addItem(tr("NO"));
    ui->FlowCtrlCmb_Mouse->addItem(tr("RTS/CTS"));
    ui->FlowCtrlCmb_Mouse->addItem(tr("XON/XOFF"));
}

void PairingTool::InitCommCmb()
{
    SetDonglePortNumCmb(); // Dongle 串口号
    SetDongleBaudCmb(); // Dongle 波特率
    SetDongleDPaityCmb(); // Dongle 校验位
    SetDongleDataBCmb(); // Dongle 数据位
    SetDongleStopBCmb(); // Dongle 停止位
    SetDongleStreamCmb(); // Dongle 流控制
    SetMousePortNumCmb(); // Mouse 串口号
    SetMouseBaudCmb(); // Mouse 波特率
    SetMouseDPaityCmb(); // Mouse 校验位
    SetMouseDataBCmb(); // Mouse 数据位
    SetMouseStopBCmb(); // Mouse 停止位
    SetMouseStreamCmb(); // Mouse 流控制
}

bool PairingTool::SetDongleSerialPortParam(QSerialPort *serial)
{

    // 设置串口号
    QString strPortNum = ui->PortNumCmb_Dongle->currentText(); // 当前的串口
    if(strPortNum == tr(""))
    {
        return false;
    }
    serial->setPortName(strPortNum);

    // 设置波特率
    qint32 nBaudRate = ui->baudRCmb_Dongle->currentText().toInt();
    serial->setBaudRate(nBaudRate);

    // 设置奇偶校验
    int nParityType = ui->DPaityCmb_Dongle->currentIndex();
    switch (nParityType) {
    case 0:
        serial->setParity(QSerialPort::NoParity);
        break;
    case 1:
        serial->setParity(QSerialPort::OddParity);
        break;
    case 2:
        serial->setParity(QSerialPort::EvenParity);
        break;
    case 3:
        serial->setParity(QSerialPort::MarkParity);
        break;
    case 4:
        serial->setParity(QSerialPort::SpaceParity);
        break;
    case 5:
        serial->setParity(QSerialPort::UnknownParity);
        break;
    default:
        break;
    }

    // 设置数据位
    int nDataBits = ui->DataBCmb_Dongle->currentIndex();
    switch (nDataBits) {
    case 0:
        serial->setDataBits(QSerialPort::Data5);
        break;
    case 1:
        serial->setDataBits(QSerialPort::Data6);
        break;
    case 2:
        serial->setDataBits(QSerialPort::Data7);
        break;
    case 3:
        serial->setDataBits(QSerialPort::Data8);
        break;
    default:
        serial->setDataBits(QSerialPort::UnknownDataBits);
        break;
    }

    // 设置停止位
    int nStopBits = ui->StopBCmb_Dongle->currentIndex();
    switch (nStopBits) {
    case 0:
        serial->setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        serial->setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        serial->setStopBits(QSerialPort::TwoStop);
        break;
    default:
        serial->setStopBits(QSerialPort::UnknownStopBits);
        break;
    }
    // 流控制
    int nFlowCtrl = ui->FlowCtrlCmb_Dongle->currentIndex();
    switch (nFlowCtrl) {
    case 0:
        serial->setFlowControl(QSerialPort::NoFlowControl);
        break;
    case 1:
        serial->setFlowControl(QSerialPort::HardwareControl);
        break;
    case 2:
        serial->setFlowControl(QSerialPort::SoftwareControl);
        break;
    case 3:
        serial->setFlowControl(QSerialPort::UnknownFlowControl);
    }
    return true;
}

bool PairingTool::SetMouseSerialPortParam(QSerialPort *serial)
{

    // 设置串口号
    QString strPortNum = ui->PortNumCmb_Mouse->currentText(); // 当前的串口
    if(strPortNum == tr(""))
    {
        return false;
    }
    serial->setPortName(strPortNum);

    // 设置波特率
    qint32 nBaudRate = ui->baudRCmb_Mouse->currentText().toInt();
    serial->setBaudRate(nBaudRate);

    // 设置奇偶校验
    int nParityType = ui->DPaityCmb_Mouse->currentIndex();
    switch (nParityType) {
    case 0:
        serial->setParity(QSerialPort::NoParity);
        break;
    case 1:
        serial->setParity(QSerialPort::OddParity);
        break;
    case 2:
        serial->setParity(QSerialPort::EvenParity);
        break;
    case 3:
        serial->setParity(QSerialPort::MarkParity);
        break;
    case 4:
        serial->setParity(QSerialPort::SpaceParity);
        break;
    case 5:
        serial->setParity(QSerialPort::UnknownParity);
        break;
    default:
        break;
    }

    // 设置数据位
    int nDataBits = ui->DataBCmb_Mouse->currentIndex();
    switch (nDataBits) {
    case 0:
        serial->setDataBits(QSerialPort::Data5);
        break;
    case 1:
        serial->setDataBits(QSerialPort::Data6);
        break;
    case 2:
        serial->setDataBits(QSerialPort::Data7);
        break;
    case 3:
        serial->setDataBits(QSerialPort::Data8);
        break;
    default:
        serial->setDataBits(QSerialPort::UnknownDataBits);
        break;
    }

    // 设置停止位
    int nStopBits = ui->StopBCmb_Mouse->currentIndex();
    switch (nStopBits) {
    case 0:
        serial->setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        serial->setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        serial->setStopBits(QSerialPort::TwoStop);
        break;
    default:
        serial->setStopBits(QSerialPort::UnknownStopBits);
        break;
    }
    // 流控制
    int nFlowCtrl = ui->FlowCtrlCmb_Mouse->currentIndex();
    switch (nFlowCtrl) {
    case 0:
        serial->setFlowControl(QSerialPort::NoFlowControl);
        break;
    case 1:
        serial->setFlowControl(QSerialPort::HardwareControl);
        break;
    case 2:
        serial->setFlowControl(QSerialPort::SoftwareControl);
        break;
    case 3:
        serial->setFlowControl(QSerialPort::UnknownFlowControl);
    }
    return true;
}

void PairingTool::on_OnOffBtn_Dongle_clicked()
{
    if(m_DongleSerial->isOpen())
    {
        m_DongleSerial->close();
        ui->OnOffBtn_Dongle->setText("打开");
        m_bDongleOpen = false;
        ui->PortNumCmb_Dongle->setEnabled(true);
        ui->DataBCmb_Dongle->setEnabled(true);
        ui->DPaityCmb_Dongle->setEnabled(true);
        ui->StopBCmb_Dongle->setEnabled(true);
        ui->FlowCtrlCmb_Dongle->setEnabled(true);
        ui->baudRCmb_Dongle->setEnabled(true);
        SetSerState();
    }
    else
    {
        if( !SetDongleSerialPortParam(m_DongleSerial))
        {
            QMessageBox::critical(this, tr("Error"), tr("Dongle 串口错误"), QMessageBox::Ok);
            return;
        }

        if(!m_DongleSerial->open(QIODevice::ReadWrite))
        {
            QMessageBox::critical(this, tr("Error"), tr("Dongle 串口不存在或者被其它程序占用"),QMessageBox::Ok);
            return;
        }

        m_DongleSerial->setReadBufferSize(m_nReadBuffSize);

        ui->OnOffBtn_Dongle->setText("断开");
        m_bDongleOpen = true;
        ui->PortNumCmb_Dongle->setEnabled(false);
        ui->DataBCmb_Dongle->setEnabled(false);
        ui->DPaityCmb_Dongle->setEnabled(false);
        ui->StopBCmb_Dongle->setEnabled(false);
        ui->FlowCtrlCmb_Dongle->setEnabled(false);
        ui->baudRCmb_Dongle->setEnabled(false);
        SetSerState();
    }
}

void PairingTool::on_OnOffBtn_Mouse_clicked()
{
    if(m_MouseSerial->isOpen())
    {
        m_MouseSerial->close();
        ui->OnOffBtn_Mouse->setText("打开");
        m_bMouseOpen = false;
        ui->PortNumCmb_Mouse->setEnabled(true);
        ui->DataBCmb_Mouse->setEnabled(true);
        ui->DPaityCmb_Mouse->setEnabled(true);
        ui->StopBCmb_Mouse->setEnabled(true);
        ui->FlowCtrlCmb_Mouse->setEnabled(true);
        ui->baudRCmb_Mouse->setEnabled(true);
        SetSerState();
    }
    else
    {
        if( !SetMouseSerialPortParam(m_MouseSerial))
        {
            QMessageBox::critical(this, tr("Error"), tr("Mouse 串口错误"), QMessageBox::Ok);
            return;
        }

        if(!m_MouseSerial->open(QIODevice::ReadWrite))
        {
            QMessageBox::critical(this, tr("Error"), tr("Mouse 串口不存在或者被其它程序占用"),QMessageBox::Ok);
            return;
        }

        m_MouseSerial->setReadBufferSize(m_nReadBuffSize);

        ui->OnOffBtn_Mouse->setText("断开");
        m_bMouseOpen = true;
        ui->PortNumCmb_Mouse->setEnabled(false);
        ui->DataBCmb_Mouse->setEnabled(false);
        ui->DPaityCmb_Mouse->setEnabled(false);
        ui->StopBCmb_Mouse->setEnabled(false);
        ui->FlowCtrlCmb_Mouse->setEnabled(false);
        ui->baudRCmb_Mouse->setEnabled(false);
        SetSerState();
    }
}

void PairingTool::on_baudRCmb_Dongle_currentIndexChanged(int index)
{

}

void PairingTool::on_baudRCmb_Mouse_currentIndexChanged(int index)
{

}

void PairingTool::slot_RecvDonglePortData()
{
    QByteArray bytes;
    bytes = bytes.append(m_DongleSerial->readAll());
    qDebug() << bytes;
    if(!bytes.isEmpty())
    {
        QString strRecv = QString::fromLocal8Bit(bytes);
        ui->te_dongleRevData->insertPlainText(strRecv);
        ui->te_dongleRevData->moveCursor(QTextCursor::End);//保证 Text 数据不会自动换行
    }
}

void PairingTool::slot_RecvMousePortData()
{
    QByteArray bytes;
    bytes = bytes.append(m_MouseSerial->readAll());
    qDebug() << bytes;
    if(!bytes.isEmpty())
    {
        QString strRecv = QString::fromLocal8Bit(bytes);
        ui->te_mouseRevData->insertPlainText(strRecv);
        ui->te_mouseRevData->moveCursor(QTextCursor::End);//保证 Text 数据不会自动换行
    }
}

// 串口关闭事件，如果窗口关闭前串口未关闭，则关闭串口
void PairingTool::closeEvent(QCloseEvent *event)
{
    if(m_DongleSerial->isOpen())
    {
        m_DongleSerial->close();
    }
    if(m_MouseSerial->isOpen())
    {
        m_MouseSerial->close();
    }
    event->accept();
}

void PairingTool::on_btn_registerDevice_clicked()
{

}

void PairingTool::on_btn_checkVersionId_clicked()
{

}

void PairingTool::on_btn_paringCode_clicked()
{
   QSqlRecord newPairingRecord;
   QSqlTableModel *newPairingModel = new QSqlTableModel;
   newPairingModel->setTable("pairingInfo");
   newPairingRecord = newPairingModel->record();
   QString dongleMAC = ui->le_dongleMAC->text();
   QString mouseMAC = ui->le_mouseMAC->text();
   if(dongleMAC == "" || mouseMAC == "")
   {
       return;
   }
   // 字符串查询是一定要加上单引号！！！
   newPairingModel->setFilter(QString("dongleMac = '%1' or mouseMac = '%2'").arg(dongleMAC).arg(mouseMAC));
   if(newPairingModel->select())
   {
       // 从配对码数据库移除当前存在的 Dongle MAC 和 Mouse MAC 的配对记录
       int rowCount = newPairingModel->rowCount();
       for(int i = 0; i<rowCount ; i++)
       {
           newPairingModel->removeRow(i);
       }
       newPairingModel->submitAll();
       // 重新为当前的 Dongle MAC 和 Mouse MAC 分配新的配对码
       newPairingModel->select();
       int rowNum = newPairingModel->rowCount();
       newPairingRecord.setValue("dongleMac",dongleMAC);
       newPairingRecord.setValue("mouseMac",mouseMAC);
       newPairingRecord.setValue("pairingCode",ui->le_pairingCode->text());
       newPairingModel->insertRecord(rowNum,newPairingRecord);
       newPairingModel->setRecord(rowNum,newPairingRecord);
       newPairingModel->submitAll();
       // 将数据库的数据查询出来，再从模型中取出最后一行
       newPairingModel->select();
       int newRowCount = newPairingModel->rowCount()-1;
       // 数据库中最后一行的 id + 1 作为新的配对码，更新进配对码 Text 中
       int pairingCode = newPairingModel->record(newRowCount).value(0).toInt() + 1;
       ui->le_pairingCode->setText(QString::number(pairingCode));
   }

}
