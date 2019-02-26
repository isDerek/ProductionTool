/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *group_TestOptions;
    QCheckBox *cbox_CalibrateXCSEL;
    QCheckBox *cbox_DTMTest;
    QGroupBox *group_DTM;
    QGroupBox *group_Transmitter;
    QPushButton *btn_OutputPower;
    QCheckBox *cbox_OutputPower;
    QPushButton *btn_ModulationCharacteristics;
    QPushButton *btn_CarrierFrequencyOffset;
    QCheckBox *cbox_ModulationCharacteristics;
    QCheckBox *cbox_CarrierFrequencyOffsetAndDrift;
    QGroupBox *group_Receiver;
    QPushButton *btn_ReceiverSensitivity;
    QCheckBox *cbox_ReceiverSensitivity;
    QPushButton *btn_MaximumInputSignalLevel;
    QPushButton *btn_PERReportIntergrity;
    QCheckBox *cbox_MaximumInputSignalLevel;
    QCheckBox *cbox_PERReportIntergrity;
    QGroupBox *group_DownloadOptions;
    QGroupBox *group_Increase;
    QGroupBox *group_CompanyID;
    QLineEdit *le_CompanyID0Bit;
    QLineEdit *le_CompanyID1Bit;
    QLineEdit *le_CompanyID2Bit;
    QPushButton *btn_Set;
    QGroupBox *group_StartPart;
    QLineEdit *le_StartPart0Bit;
    QLineEdit *le_StartPart1Bit;
    QLineEdit *le_StartPart2Bit;
    QGroupBox *group_EndPart;
    QLineEdit *le_EndPart0Bit;
    QLineEdit *le_EndPart1Bit;
    QLineEdit *le_EndPart2Bit;
    QGroupBox *group_BDName;
    QCheckBox *cbox_NameAddress;
    QGroupBox *group_BurnOptions;
    QCheckBox *cbox_BurnApplication;
    QCheckBox *cbox_BurnOTA;
    QCheckBox *cbox_BurnData;
    QCheckBox *cbox_BurnNVDS;
    QRadioButton *rbtn_Default;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->resize(579, 627);
        buttonBox = new QDialogButtonBox(Setting);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 590, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        group_TestOptions = new QGroupBox(Setting);
        group_TestOptions->setObjectName(QString::fromUtf8("group_TestOptions"));
        group_TestOptions->setGeometry(QRect(10, 10, 561, 571));
        cbox_CalibrateXCSEL = new QCheckBox(group_TestOptions);
        cbox_CalibrateXCSEL->setObjectName(QString::fromUtf8("cbox_CalibrateXCSEL"));
        cbox_CalibrateXCSEL->setGeometry(QRect(20, 30, 151, 19));
        cbox_DTMTest = new QCheckBox(group_TestOptions);
        cbox_DTMTest->setObjectName(QString::fromUtf8("cbox_DTMTest"));
        cbox_DTMTest->setGeometry(QRect(20, 60, 151, 19));
        cbox_DTMTest->setChecked(true);
        group_DTM = new QGroupBox(group_TestOptions);
        group_DTM->setObjectName(QString::fromUtf8("group_DTM"));
        group_DTM->setGeometry(QRect(10, 90, 541, 251));
        group_Transmitter = new QGroupBox(group_DTM);
        group_Transmitter->setObjectName(QString::fromUtf8("group_Transmitter"));
        group_Transmitter->setGeometry(QRect(10, 20, 521, 111));
        btn_OutputPower = new QPushButton(group_Transmitter);
        btn_OutputPower->setObjectName(QString::fromUtf8("btn_OutputPower"));
        btn_OutputPower->setGeometry(QRect(10, 20, 31, 28));
        cbox_OutputPower = new QCheckBox(group_Transmitter);
        cbox_OutputPower->setObjectName(QString::fromUtf8("cbox_OutputPower"));
        cbox_OutputPower->setGeometry(QRect(50, 18, 251, 31));
        cbox_OutputPower->setChecked(true);
        btn_ModulationCharacteristics = new QPushButton(group_Transmitter);
        btn_ModulationCharacteristics->setObjectName(QString::fromUtf8("btn_ModulationCharacteristics"));
        btn_ModulationCharacteristics->setGeometry(QRect(10, 50, 31, 28));
        btn_CarrierFrequencyOffset = new QPushButton(group_Transmitter);
        btn_CarrierFrequencyOffset->setObjectName(QString::fromUtf8("btn_CarrierFrequencyOffset"));
        btn_CarrierFrequencyOffset->setGeometry(QRect(10, 80, 31, 28));
        cbox_ModulationCharacteristics = new QCheckBox(group_Transmitter);
        cbox_ModulationCharacteristics->setObjectName(QString::fromUtf8("cbox_ModulationCharacteristics"));
        cbox_ModulationCharacteristics->setGeometry(QRect(50, 50, 381, 31));
        cbox_ModulationCharacteristics->setChecked(true);
        cbox_CarrierFrequencyOffsetAndDrift = new QCheckBox(group_Transmitter);
        cbox_CarrierFrequencyOffsetAndDrift->setObjectName(QString::fromUtf8("cbox_CarrierFrequencyOffsetAndDrift"));
        cbox_CarrierFrequencyOffsetAndDrift->setGeometry(QRect(50, 80, 431, 31));
        cbox_CarrierFrequencyOffsetAndDrift->setChecked(true);
        group_Receiver = new QGroupBox(group_DTM);
        group_Receiver->setObjectName(QString::fromUtf8("group_Receiver"));
        group_Receiver->setGeometry(QRect(10, 130, 521, 111));
        btn_ReceiverSensitivity = new QPushButton(group_Receiver);
        btn_ReceiverSensitivity->setObjectName(QString::fromUtf8("btn_ReceiverSensitivity"));
        btn_ReceiverSensitivity->setGeometry(QRect(10, 20, 31, 28));
        cbox_ReceiverSensitivity = new QCheckBox(group_Receiver);
        cbox_ReceiverSensitivity->setObjectName(QString::fromUtf8("cbox_ReceiverSensitivity"));
        cbox_ReceiverSensitivity->setGeometry(QRect(50, 18, 371, 31));
        cbox_ReceiverSensitivity->setChecked(true);
        btn_MaximumInputSignalLevel = new QPushButton(group_Receiver);
        btn_MaximumInputSignalLevel->setObjectName(QString::fromUtf8("btn_MaximumInputSignalLevel"));
        btn_MaximumInputSignalLevel->setGeometry(QRect(10, 50, 31, 28));
        btn_PERReportIntergrity = new QPushButton(group_Receiver);
        btn_PERReportIntergrity->setObjectName(QString::fromUtf8("btn_PERReportIntergrity"));
        btn_PERReportIntergrity->setGeometry(QRect(10, 80, 31, 28));
        cbox_MaximumInputSignalLevel = new QCheckBox(group_Receiver);
        cbox_MaximumInputSignalLevel->setObjectName(QString::fromUtf8("cbox_MaximumInputSignalLevel"));
        cbox_MaximumInputSignalLevel->setGeometry(QRect(50, 50, 381, 31));
        cbox_MaximumInputSignalLevel->setChecked(true);
        cbox_PERReportIntergrity = new QCheckBox(group_Receiver);
        cbox_PERReportIntergrity->setObjectName(QString::fromUtf8("cbox_PERReportIntergrity"));
        cbox_PERReportIntergrity->setGeometry(QRect(50, 80, 381, 31));
        cbox_PERReportIntergrity->setChecked(true);
        group_DownloadOptions = new QGroupBox(group_TestOptions);
        group_DownloadOptions->setObjectName(QString::fromUtf8("group_DownloadOptions"));
        group_DownloadOptions->setGeometry(QRect(10, 340, 541, 221));
        group_Increase = new QGroupBox(group_DownloadOptions);
        group_Increase->setObjectName(QString::fromUtf8("group_Increase"));
        group_Increase->setGeometry(QRect(10, 20, 291, 141));
        group_CompanyID = new QGroupBox(group_Increase);
        group_CompanyID->setObjectName(QString::fromUtf8("group_CompanyID"));
        group_CompanyID->setGeometry(QRect(10, 20, 131, 51));
        le_CompanyID0Bit = new QLineEdit(group_CompanyID);
        le_CompanyID0Bit->setObjectName(QString::fromUtf8("le_CompanyID0Bit"));
        le_CompanyID0Bit->setEnabled(false);
        le_CompanyID0Bit->setGeometry(QRect(10, 20, 31, 21));
        le_CompanyID1Bit = new QLineEdit(group_CompanyID);
        le_CompanyID1Bit->setObjectName(QString::fromUtf8("le_CompanyID1Bit"));
        le_CompanyID1Bit->setEnabled(false);
        le_CompanyID1Bit->setGeometry(QRect(50, 20, 31, 21));
        le_CompanyID2Bit = new QLineEdit(group_CompanyID);
        le_CompanyID2Bit->setObjectName(QString::fromUtf8("le_CompanyID2Bit"));
        le_CompanyID2Bit->setEnabled(false);
        le_CompanyID2Bit->setGeometry(QRect(90, 20, 31, 21));
        btn_Set = new QPushButton(group_Increase);
        btn_Set->setObjectName(QString::fromUtf8("btn_Set"));
        btn_Set->setEnabled(false);
        btn_Set->setGeometry(QRect(150, 30, 93, 41));
        group_StartPart = new QGroupBox(group_Increase);
        group_StartPart->setObjectName(QString::fromUtf8("group_StartPart"));
        group_StartPart->setGeometry(QRect(10, 80, 131, 51));
        le_StartPart0Bit = new QLineEdit(group_StartPart);
        le_StartPart0Bit->setObjectName(QString::fromUtf8("le_StartPart0Bit"));
        le_StartPart0Bit->setEnabled(false);
        le_StartPart0Bit->setGeometry(QRect(10, 20, 31, 21));
        le_StartPart1Bit = new QLineEdit(group_StartPart);
        le_StartPart1Bit->setObjectName(QString::fromUtf8("le_StartPart1Bit"));
        le_StartPart1Bit->setEnabled(false);
        le_StartPart1Bit->setGeometry(QRect(50, 20, 31, 21));
        le_StartPart2Bit = new QLineEdit(group_StartPart);
        le_StartPart2Bit->setObjectName(QString::fromUtf8("le_StartPart2Bit"));
        le_StartPart2Bit->setEnabled(false);
        le_StartPart2Bit->setGeometry(QRect(90, 20, 31, 21));
        group_EndPart = new QGroupBox(group_Increase);
        group_EndPart->setObjectName(QString::fromUtf8("group_EndPart"));
        group_EndPart->setGeometry(QRect(150, 80, 131, 51));
        le_EndPart0Bit = new QLineEdit(group_EndPart);
        le_EndPart0Bit->setObjectName(QString::fromUtf8("le_EndPart0Bit"));
        le_EndPart0Bit->setEnabled(false);
        le_EndPart0Bit->setGeometry(QRect(10, 20, 31, 21));
        le_EndPart0Bit->setReadOnly(false);
        le_EndPart0Bit->setClearButtonEnabled(false);
        le_EndPart1Bit = new QLineEdit(group_EndPart);
        le_EndPart1Bit->setObjectName(QString::fromUtf8("le_EndPart1Bit"));
        le_EndPart1Bit->setEnabled(false);
        le_EndPart1Bit->setGeometry(QRect(50, 20, 31, 21));
        le_EndPart2Bit = new QLineEdit(group_EndPart);
        le_EndPart2Bit->setObjectName(QString::fromUtf8("le_EndPart2Bit"));
        le_EndPart2Bit->setEnabled(false);
        le_EndPart2Bit->setGeometry(QRect(90, 20, 31, 21));
        group_BDName = new QGroupBox(group_DownloadOptions);
        group_BDName->setObjectName(QString::fromUtf8("group_BDName"));
        group_BDName->setGeometry(QRect(310, 20, 221, 51));
        cbox_NameAddress = new QCheckBox(group_BDName);
        cbox_NameAddress->setObjectName(QString::fromUtf8("cbox_NameAddress"));
        cbox_NameAddress->setGeometry(QRect(10, 20, 181, 19));
        cbox_NameAddress->setChecked(true);
        group_BurnOptions = new QGroupBox(group_DownloadOptions);
        group_BurnOptions->setObjectName(QString::fromUtf8("group_BurnOptions"));
        group_BurnOptions->setGeometry(QRect(310, 70, 221, 141));
        cbox_BurnApplication = new QCheckBox(group_BurnOptions);
        cbox_BurnApplication->setObjectName(QString::fromUtf8("cbox_BurnApplication"));
        cbox_BurnApplication->setGeometry(QRect(10, 20, 181, 19));
        cbox_BurnApplication->setChecked(true);
        cbox_BurnOTA = new QCheckBox(group_BurnOptions);
        cbox_BurnOTA->setObjectName(QString::fromUtf8("cbox_BurnOTA"));
        cbox_BurnOTA->setGeometry(QRect(10, 50, 181, 19));
        cbox_BurnData = new QCheckBox(group_BurnOptions);
        cbox_BurnData->setObjectName(QString::fromUtf8("cbox_BurnData"));
        cbox_BurnData->setGeometry(QRect(10, 80, 181, 19));
        cbox_BurnData->setChecked(true);
        cbox_BurnNVDS = new QCheckBox(group_BurnOptions);
        cbox_BurnNVDS->setObjectName(QString::fromUtf8("cbox_BurnNVDS"));
        cbox_BurnNVDS->setGeometry(QRect(10, 110, 181, 19));
        cbox_BurnNVDS->setChecked(true);
        rbtn_Default = new QRadioButton(group_DownloadOptions);
        rbtn_Default->setObjectName(QString::fromUtf8("rbtn_Default"));
        rbtn_Default->setGeometry(QRect(10, 180, 115, 19));
        rbtn_Default->setChecked(true);

        retranslateUi(Setting);
        QObject::connect(buttonBox, SIGNAL(accepted()), Setting, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Setting, SLOT(reject()));

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Dialog", nullptr));
        group_TestOptions->setTitle(QApplication::translate("Setting", "Test Options", nullptr));
        cbox_CalibrateXCSEL->setText(QApplication::translate("Setting", "Calibrate XCSEL", nullptr));
        cbox_DTMTest->setText(QApplication::translate("Setting", "DTM Test", nullptr));
        group_DTM->setTitle(QApplication::translate("Setting", "DTM (Bluetooth Low Energy RF PHY Test Suite)", nullptr));
        group_Transmitter->setTitle(QApplication::translate("Setting", "Transmitter", nullptr));
        btn_OutputPower->setText(QString());
        cbox_OutputPower->setText(QApplication::translate("Setting", "TRM-LE/CA/01/C(Output Power)", nullptr));
        btn_ModulationCharacteristics->setText(QString());
        btn_CarrierFrequencyOffset->setText(QString());
        cbox_ModulationCharacteristics->setText(QApplication::translate("Setting", "TRM-LE/CA/05/C(Modulation characteristics)", nullptr));
        cbox_CarrierFrequencyOffsetAndDrift->setText(QApplication::translate("Setting", "TRM-LE/CA/01/C(Carrier frequency offset and Drift)", nullptr));
        group_Receiver->setTitle(QApplication::translate("Setting", "Receiver", nullptr));
        btn_ReceiverSensitivity->setText(QString());
        cbox_ReceiverSensitivity->setText(QApplication::translate("Setting", "RCV-LE/CA/01/C(Receiver Sensitivity)", nullptr));
        btn_MaximumInputSignalLevel->setText(QString());
        btn_PERReportIntergrity->setText(QString());
        cbox_MaximumInputSignalLevel->setText(QApplication::translate("Setting", "RCV-LE/CA/06/C(Maximum Input signal level)", nullptr));
        cbox_PERReportIntergrity->setText(QApplication::translate("Setting", "RCV-LE/CA/07/C(PER Report Intergrity)", nullptr));
        group_DownloadOptions->setTitle(QApplication::translate("Setting", "Download Options", nullptr));
        group_Increase->setTitle(QApplication::translate("Setting", "Increase", nullptr));
        group_CompanyID->setTitle(QApplication::translate("Setting", "Company ID", nullptr));
        le_CompanyID0Bit->setText(QApplication::translate("Setting", "08", nullptr));
        le_CompanyID1Bit->setText(QApplication::translate("Setting", "7C", nullptr));
        le_CompanyID2Bit->setText(QApplication::translate("Setting", "BE", nullptr));
        btn_Set->setText(QApplication::translate("Setting", "Set", nullptr));
        group_StartPart->setTitle(QApplication::translate("Setting", "Start Part", nullptr));
        le_StartPart0Bit->setText(QApplication::translate("Setting", "00", nullptr));
        le_StartPart1Bit->setText(QApplication::translate("Setting", "00", nullptr));
        le_StartPart2Bit->setText(QApplication::translate("Setting", "00", nullptr));
        group_EndPart->setTitle(QApplication::translate("Setting", "End Part", nullptr));
        le_EndPart0Bit->setText(QApplication::translate("Setting", "FF", nullptr));
        le_EndPart1Bit->setText(QApplication::translate("Setting", "FF", nullptr));
        le_EndPart2Bit->setText(QApplication::translate("Setting", "FF", nullptr));
        group_BDName->setTitle(QApplication::translate("Setting", "BD Name", nullptr));
        cbox_NameAddress->setText(QApplication::translate("Setting", "Name + Address", nullptr));
        group_BurnOptions->setTitle(QApplication::translate("Setting", "Burn Options", nullptr));
        cbox_BurnApplication->setText(QApplication::translate("Setting", "Burn Application", nullptr));
        cbox_BurnOTA->setText(QApplication::translate("Setting", "Burn OTA", nullptr));
        cbox_BurnData->setText(QApplication::translate("Setting", "Burn Data", nullptr));
        cbox_BurnNVDS->setText(QApplication::translate("Setting", "Burn NVDS", nullptr));
        rbtn_Default->setText(QApplication::translate("Setting", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
