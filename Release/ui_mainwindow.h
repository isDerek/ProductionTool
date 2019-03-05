/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSetting;
    QAction *actionParingTool;
    QWidget *centralWidget;
    QGroupBox *group_Parameters;
    QGroupBox *group_DUT;
    QComboBox *cob_Device;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *cob_Crystal;
    QComboBox *cob_DownloadMode;
    QComboBox *cob_DUTCOM;
    QComboBox *cob_Baudrate;
    QGroupBox *group_Tester;
    QLabel *label_6;
    QComboBox *cob_Equipment;
    QComboBox *cob_TesterCOM;
    QLabel *label_7;
    QGroupBox *group_Test;
    QGroupBox *group_OverallResult;
    QLineEdit *le_Result;
    QPushButton *btn_Report;
    QGroupBox *group_TestNumber;
    QLabel *lb_Total;
    QLabel *lb_Pass;
    QLabel *lb_Fail;
    QGroupBox *group_DUTInfo;
    QGroupBox *group_Info;
    QLabel *label_11;
    QLineEdit *le_BDAddr;
    QLabel *label_12;
    QLineEdit *le_BDName;
    QLabel *label_13;
    QLineEdit *le_XCSEL;
    QGroupBox *group_Download;
    QGroupBox *group_Firmware;
    QComboBox *cob_Firmware;
    QComboBox *cob_FirmwareShow;
    QPushButton *btn_Firmware;
    QGroupBox *group_Data;
    QComboBox *cob_Data;
    QComboBox *cob_DataShow;
    QPushButton *btn_Data;
    QGroupBox *group_NVDS;
    QComboBox *cob_NVDS;
    QComboBox *cob_NVDSShow;
    QPushButton *btn_NVDS;
    QPushButton *btn_Start;
    QProgressBar *pbar_Show;
    QTableView *tbv_Show;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTool;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(625, 774);
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QString::fromUtf8("actionSetting"));
        actionParingTool = new QAction(MainWindow);
        actionParingTool->setObjectName(QString::fromUtf8("actionParingTool"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        group_Parameters = new QGroupBox(centralWidget);
        group_Parameters->setObjectName(QString::fromUtf8("group_Parameters"));
        group_Parameters->setGeometry(QRect(10, 0, 261, 291));
        group_DUT = new QGroupBox(group_Parameters);
        group_DUT->setObjectName(QString::fromUtf8("group_DUT"));
        group_DUT->setGeometry(QRect(10, 20, 241, 171));
        cob_Device = new QComboBox(group_DUT);
        cob_Device->addItem(QString());
        cob_Device->setObjectName(QString::fromUtf8("cob_Device"));
        cob_Device->setGeometry(QRect(120, 20, 87, 22));
        label = new QLabel(group_DUT);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 72, 21));
        label_2 = new QLabel(group_DUT);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 72, 21));
        label_3 = new QLabel(group_DUT);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 111, 21));
        label_4 = new QLabel(group_DUT);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 41, 21));
        label_5 = new QLabel(group_DUT);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 81, 21));
        cob_Crystal = new QComboBox(group_DUT);
        cob_Crystal->addItem(QString());
        cob_Crystal->addItem(QString());
        cob_Crystal->setObjectName(QString::fromUtf8("cob_Crystal"));
        cob_Crystal->setGeometry(QRect(120, 50, 87, 22));
        cob_DownloadMode = new QComboBox(group_DUT);
        cob_DownloadMode->addItem(QString());
        cob_DownloadMode->addItem(QString());
        cob_DownloadMode->setObjectName(QString::fromUtf8("cob_DownloadMode"));
        cob_DownloadMode->setGeometry(QRect(120, 80, 87, 22));
        cob_DUTCOM = new QComboBox(group_DUT);
        cob_DUTCOM->setObjectName(QString::fromUtf8("cob_DUTCOM"));
        cob_DUTCOM->setGeometry(QRect(120, 110, 87, 22));
        cob_Baudrate = new QComboBox(group_DUT);
        cob_Baudrate->addItem(QString());
        cob_Baudrate->addItem(QString());
        cob_Baudrate->addItem(QString());
        cob_Baudrate->addItem(QString());
        cob_Baudrate->addItem(QString());
        cob_Baudrate->addItem(QString());
        cob_Baudrate->addItem(QString());
        cob_Baudrate->addItem(QString());
        cob_Baudrate->setObjectName(QString::fromUtf8("cob_Baudrate"));
        cob_Baudrate->setGeometry(QRect(120, 140, 87, 22));
        group_Tester = new QGroupBox(group_Parameters);
        group_Tester->setObjectName(QString::fromUtf8("group_Tester"));
        group_Tester->setGeometry(QRect(10, 190, 241, 91));
        label_6 = new QLabel(group_Tester);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 30, 81, 20));
        cob_Equipment = new QComboBox(group_Tester);
        cob_Equipment->addItem(QString());
        cob_Equipment->addItem(QString());
        cob_Equipment->setObjectName(QString::fromUtf8("cob_Equipment"));
        cob_Equipment->setGeometry(QRect(120, 30, 87, 22));
        cob_TesterCOM = new QComboBox(group_Tester);
        cob_TesterCOM->setObjectName(QString::fromUtf8("cob_TesterCOM"));
        cob_TesterCOM->setGeometry(QRect(120, 60, 87, 22));
        label_7 = new QLabel(group_Tester);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 60, 72, 20));
        group_Test = new QGroupBox(centralWidget);
        group_Test->setObjectName(QString::fromUtf8("group_Test"));
        group_Test->setGeometry(QRect(10, 290, 261, 191));
        group_OverallResult = new QGroupBox(group_Test);
        group_OverallResult->setObjectName(QString::fromUtf8("group_OverallResult"));
        group_OverallResult->setGeometry(QRect(10, 20, 241, 81));
        le_Result = new QLineEdit(group_OverallResult);
        le_Result->setObjectName(QString::fromUtf8("le_Result"));
        le_Result->setEnabled(false);
        le_Result->setGeometry(QRect(10, 20, 113, 51));
        btn_Report = new QPushButton(group_OverallResult);
        btn_Report->setObjectName(QString::fromUtf8("btn_Report"));
        btn_Report->setGeometry(QRect(130, 20, 93, 51));
        group_TestNumber = new QGroupBox(group_Test);
        group_TestNumber->setObjectName(QString::fromUtf8("group_TestNumber"));
        group_TestNumber->setGeometry(QRect(10, 100, 241, 81));
        lb_Total = new QLabel(group_TestNumber);
        lb_Total->setObjectName(QString::fromUtf8("lb_Total"));
        lb_Total->setGeometry(QRect(20, 20, 72, 15));
        lb_Pass = new QLabel(group_TestNumber);
        lb_Pass->setObjectName(QString::fromUtf8("lb_Pass"));
        lb_Pass->setGeometry(QRect(20, 40, 72, 15));
        lb_Fail = new QLabel(group_TestNumber);
        lb_Fail->setObjectName(QString::fromUtf8("lb_Fail"));
        lb_Fail->setGeometry(QRect(20, 60, 72, 15));
        group_DUTInfo = new QGroupBox(centralWidget);
        group_DUTInfo->setObjectName(QString::fromUtf8("group_DUTInfo"));
        group_DUTInfo->setGeometry(QRect(280, 0, 331, 481));
        group_Info = new QGroupBox(group_DUTInfo);
        group_Info->setObjectName(QString::fromUtf8("group_Info"));
        group_Info->setGeometry(QRect(10, 20, 311, 141));
        label_11 = new QLabel(group_Info);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 30, 61, 16));
        le_BDAddr = new QLineEdit(group_Info);
        le_BDAddr->setObjectName(QString::fromUtf8("le_BDAddr"));
        le_BDAddr->setGeometry(QRect(80, 30, 161, 21));
        label_12 = new QLabel(group_Info);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 70, 61, 16));
        le_BDName = new QLineEdit(group_Info);
        le_BDName->setObjectName(QString::fromUtf8("le_BDName"));
        le_BDName->setGeometry(QRect(80, 70, 161, 21));
        label_13 = new QLabel(group_Info);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 111, 72, 20));
        le_XCSEL = new QLineEdit(group_Info);
        le_XCSEL->setObjectName(QString::fromUtf8("le_XCSEL"));
        le_XCSEL->setGeometry(QRect(80, 110, 161, 21));
        group_Download = new QGroupBox(group_DUTInfo);
        group_Download->setObjectName(QString::fromUtf8("group_Download"));
        group_Download->setGeometry(QRect(10, 170, 311, 251));
        group_Firmware = new QGroupBox(group_Download);
        group_Firmware->setObjectName(QString::fromUtf8("group_Firmware"));
        group_Firmware->setGeometry(QRect(10, 30, 291, 71));
        cob_Firmware = new QComboBox(group_Firmware);
        cob_Firmware->setObjectName(QString::fromUtf8("cob_Firmware"));
        cob_Firmware->setGeometry(QRect(10, 30, 131, 22));
        cob_FirmwareShow = new QComboBox(group_Firmware);
        cob_FirmwareShow->addItem(QString());
        cob_FirmwareShow->setObjectName(QString::fromUtf8("cob_FirmwareShow"));
        cob_FirmwareShow->setEnabled(false);
        cob_FirmwareShow->setGeometry(QRect(220, 30, 51, 22));
        btn_Firmware = new QPushButton(group_Firmware);
        btn_Firmware->setObjectName(QString::fromUtf8("btn_Firmware"));
        btn_Firmware->setGeometry(QRect(160, 30, 41, 21));
        group_Data = new QGroupBox(group_Download);
        group_Data->setObjectName(QString::fromUtf8("group_Data"));
        group_Data->setGeometry(QRect(10, 100, 291, 71));
        cob_Data = new QComboBox(group_Data);
        cob_Data->setObjectName(QString::fromUtf8("cob_Data"));
        cob_Data->setGeometry(QRect(10, 30, 131, 22));
        cob_DataShow = new QComboBox(group_Data);
        cob_DataShow->setObjectName(QString::fromUtf8("cob_DataShow"));
        cob_DataShow->setGeometry(QRect(220, 30, 51, 22));
        btn_Data = new QPushButton(group_Data);
        btn_Data->setObjectName(QString::fromUtf8("btn_Data"));
        btn_Data->setGeometry(QRect(160, 30, 41, 21));
        group_NVDS = new QGroupBox(group_Download);
        group_NVDS->setObjectName(QString::fromUtf8("group_NVDS"));
        group_NVDS->setGeometry(QRect(10, 170, 291, 71));
        cob_NVDS = new QComboBox(group_NVDS);
        cob_NVDS->setObjectName(QString::fromUtf8("cob_NVDS"));
        cob_NVDS->setGeometry(QRect(10, 30, 131, 22));
        cob_NVDSShow = new QComboBox(group_NVDS);
        cob_NVDSShow->addItem(QString());
        cob_NVDSShow->setObjectName(QString::fromUtf8("cob_NVDSShow"));
        cob_NVDSShow->setEnabled(false);
        cob_NVDSShow->setGeometry(QRect(220, 30, 51, 22));
        btn_NVDS = new QPushButton(group_NVDS);
        btn_NVDS->setObjectName(QString::fromUtf8("btn_NVDS"));
        btn_NVDS->setGeometry(QRect(160, 30, 41, 21));
        btn_Start = new QPushButton(group_DUTInfo);
        btn_Start->setObjectName(QString::fromUtf8("btn_Start"));
        btn_Start->setGeometry(QRect(230, 430, 91, 31));
        pbar_Show = new QProgressBar(centralWidget);
        pbar_Show->setObjectName(QString::fromUtf8("pbar_Show"));
        pbar_Show->setGeometry(QRect(10, 680, 601, 23));
        pbar_Show->setValue(0);
        tbv_Show = new QTableView(centralWidget);
        tbv_Show->setObjectName(QString::fromUtf8("tbv_Show"));
        tbv_Show->setGeometry(QRect(10, 490, 600, 181));
        tbv_Show->setMinimumSize(QSize(600, 0));
        tbv_Show->setMaximumSize(QSize(600, 16777215));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuFile->addAction(actionSetting);
        menuTool->addAction(actionParingTool);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSetting->setText(QApplication::translate("MainWindow", "Setting", nullptr));
        actionParingTool->setText(QApplication::translate("MainWindow", "ParingTool", nullptr));
        group_Parameters->setTitle(QApplication::translate("MainWindow", "Parameters", nullptr));
        group_DUT->setTitle(QApplication::translate("MainWindow", "DUT", nullptr));
        cob_Device->setItemText(0, QApplication::translate("MainWindow", "QN9080", nullptr));

        label->setText(QApplication::translate("MainWindow", "Device", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Crystal", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Download Mode", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "COM", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Baudrate", nullptr));
        cob_Crystal->setItemText(0, QApplication::translate("MainWindow", "32MHz", nullptr));
        cob_Crystal->setItemText(1, QApplication::translate("MainWindow", "16MHz", nullptr));

        cob_DownloadMode->setItemText(0, QApplication::translate("MainWindow", "ISP", nullptr));
        cob_DownloadMode->setItemText(1, QApplication::translate("MainWindow", "SWD", nullptr));

        cob_Baudrate->setItemText(0, QApplication::translate("MainWindow", "115200", nullptr));
        cob_Baudrate->setItemText(1, QApplication::translate("MainWindow", "57600", nullptr));
        cob_Baudrate->setItemText(2, QApplication::translate("MainWindow", "38400", nullptr));
        cob_Baudrate->setItemText(3, QApplication::translate("MainWindow", "19200", nullptr));
        cob_Baudrate->setItemText(4, QApplication::translate("MainWindow", "9600", nullptr));
        cob_Baudrate->setItemText(5, QApplication::translate("MainWindow", "4800", nullptr));
        cob_Baudrate->setItemText(6, QApplication::translate("MainWindow", "2400", nullptr));
        cob_Baudrate->setItemText(7, QApplication::translate("MainWindow", "1200", nullptr));

        group_Tester->setTitle(QApplication::translate("MainWindow", "Tester", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Equipment", nullptr));
        cob_Equipment->setItemText(0, QApplication::translate("MainWindow", "MT8852B", nullptr));
        cob_Equipment->setItemText(1, QApplication::translate("MainWindow", "QN9000", nullptr));

        label_7->setText(QApplication::translate("MainWindow", "COM", nullptr));
        group_Test->setTitle(QApplication::translate("MainWindow", "Test", nullptr));
        group_OverallResult->setTitle(QApplication::translate("MainWindow", "Overall Result", nullptr));
        btn_Report->setText(QApplication::translate("MainWindow", "Report", nullptr));
        group_TestNumber->setTitle(QApplication::translate("MainWindow", "Test Number", nullptr));
        lb_Total->setText(QApplication::translate("MainWindow", "Total:0", nullptr));
        lb_Pass->setText(QApplication::translate("MainWindow", "Pass:0", nullptr));
        lb_Fail->setText(QApplication::translate("MainWindow", "Fail:0", nullptr));
        group_DUTInfo->setTitle(QApplication::translate("MainWindow", "DUT Information", nullptr));
        group_Info->setTitle(QApplication::translate("MainWindow", "Information", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "BD Addr", nullptr));
        le_BDAddr->setText(QApplication::translate("MainWindow", "08 7C BE 00 00 33", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "BD Name", nullptr));
        le_BDName->setText(QApplication::translate("MainWindow", "QN9080", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "XCSEL", nullptr));
        le_XCSEL->setText(QApplication::translate("MainWindow", "0x08", nullptr));
        group_Download->setTitle(QApplication::translate("MainWindow", "Download", nullptr));
        group_Firmware->setTitle(QApplication::translate("MainWindow", "Firmware", nullptr));
        cob_FirmwareShow->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));

        btn_Firmware->setText(QApplication::translate("MainWindow", "...", nullptr));
        group_Data->setTitle(QApplication::translate("MainWindow", "Data", nullptr));
        btn_Data->setText(QApplication::translate("MainWindow", "...", nullptr));
        group_NVDS->setTitle(QApplication::translate("MainWindow", "NVDS", nullptr));
        cob_NVDSShow->setItemText(0, QApplication::translate("MainWindow", "254", nullptr));

        btn_NVDS->setText(QApplication::translate("MainWindow", "...", nullptr));
        btn_Start->setText(QApplication::translate("MainWindow", "Start", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuTool->setTitle(QApplication::translate("MainWindow", "Tool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
