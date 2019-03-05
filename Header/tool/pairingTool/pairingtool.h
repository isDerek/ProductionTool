#ifndef PAIRINGTOOL_H
#define PAIRINGTOOL_H

#include <QMainWindow>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QLabel>
#include <QTimer>
#include <QCloseEvent>
#include <QMessageBox>
#include <QSqlTableModel>
#include "mysql.h"
#include "toolsfuc.h"
#include "factorypro.h"

namespace Ui {
class PairingTool;
}

class PairingTool : public QMainWindow
{
    Q_OBJECT

public:
    explicit PairingTool(QWidget *parent = nullptr);
    ~PairingTool();
    QSerialPort *m_DongleSerial = new QSerialPort; // 串口通信类对象
    QSerialPort *m_MouseSerial = new QSerialPort; // 串口通信类对象
  //    初始化状态栏
    void InitStatusBar(); // 初始化状态栏
    void SetSerState(); // 设置状态栏串口状态
    void InitCommCmb(); // 初始化 CombBox 控件
    QStringList GetEnableCommPortQt(); // 设置计算机可用串口 Qt 方式
    QString GetComm(int nIndex, bool bValue = true);
    void SetDonglePortNumCmb(); // 设置 Dongle 串口号
    void SetDongleBaudCmb(); // 设置 Dongle 波特率
    void SetDongleDPaityCmb(); // 设置 Dongle 校验位
    void SetDongleDataBCmb(); // 设置 Dongle 数据位
    void SetDongleStopBCmb(); // 设置 Dongle 停止位
    void SetDongleStreamCmb(); // 设置 Dongle 流控制
    void SetMousePortNumCmb(); // 设置 Mouse 串口号
    void SetMouseBaudCmb(); // 设置 Mouse 波特率
    void SetMouseDPaityCmb(); // 设置 Mouse 校验位
    void SetMouseDataBCmb(); // 设置 Mouse 数据位
    void SetMouseStopBCmb(); // 设置 Mouse 停止位
    void SetMouseStreamCmb(); // 设置 Mouse 流控制
    void handleDongleSerialError(QSerialPort::SerialPortError error);
    void handleMouseSerialError(QSerialPort::SerialPortError error);
    bool SetDongleSerialPortParam(QSerialPort *serial); // 设置串口参数，失败返回 false，成功返回 true
    bool SetMouseSerialPortParam(QSerialPort *serial); // 设置串口参数，失败返回 false，成功返回 true
    //    父类重写
    void closeEvent(QCloseEvent *event);
    void SetDongleModel(); // 设置 Dongle 数据库模型
    void SetMouseModel(); // 设置 Mouse 数据库模型
    void SetPairingInfoModel(); // 设置 PairingInfo 数据库模型
    void checkCMDID(char CMDID,char DeviceID, QByteArray payload); // 查看 CMDID，并执行对应的执行函数
    void deviceMACInfoHandler(char deviceID ,QByteArray payload); // 设备 MAC 信息处理函数
    void deviceVersionInfoHandler(char deviceID, QByteArray payload); // 设备版本信息处理函数
private slots:
    void on_OnOffBtn_Dongle_clicked(); // Dongle 打开串口按钮

    void on_OnOffBtn_Mouse_clicked(); // Mouse 打开串口按钮

    void slot_RecvDonglePortData(); // 接收 Dongle 串口数据

    void slot_RecvMousePortData(); // 接收 Mouse 串口数据

    void rfSerialPort(); // 定时串口刷新

    void on_baudRCmb_Dongle_currentIndexChanged(int index);// Dongle 自定义波特率

    void on_baudRCmb_Mouse_currentIndexChanged(int index);// Mouse 自定义波特率

    void on_btn_registerDevice_clicked(); // 设备注册按钮

    void on_btn_checkVersionId_clicked(); // 查看版本按钮

    void on_btn_paringCode_clicked(); // 分配配对码按钮


private:
    Ui::PairingTool *ui;
    QLabel *m_DongleSerStateLbl; // Dongle 串口状态
    QLabel *m_MouseSerStateLbl; // Dongle 串口状态
    bool m_bDongleOpen; // 标识 Dongle 串口状态
    bool m_bMouseOpen; // 标识 Mouse 串口状态
    QTimer *rfSerialPortTmr;// 刷新串口计时器
    qint64 m_nReadBuffSize; // 串口缓冲区大小
    MySql *mysql = new MySql; // 实例化 MySql 对象
    ToolsFuc *toolsfuc = new ToolsFuc; // 实例化工具类对象
    FactoryPro *factorypro = new FactoryPro; // 实例化工厂协议类对象
    QSqlTableModel *dongleModel; // 声明 Dongle 模型独享
    QSqlTableModel *mouseModel; // 声明鼠标模型对象
    QSqlTableModel *pairingInfoModel; // 声明分配码信息模型对象
    QByteArray DongleMACAddress; // Dongle MAC 地址
    QByteArray MouseMACAddress; // Mouse MAC 地址
};

#endif // PAIRINGTOOL_H
