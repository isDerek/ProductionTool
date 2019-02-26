#include "setting.h"
#include "ui_setting.h"
#include <QDebug>
Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    this->setWindowTitle("Test Setting");
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_btn_OutputPower_clicked()
{
    setting_OutputPower->show();
}

void Setting::on_btn_ModulationCharacteristics_clicked()
{
    setting_modulationcharacteristic->show();
}

void Setting::on_btn_CarrierFrequencyOffset_clicked()
{
    setting_carrieroffsetanddrift->show();
}

void Setting::on_btn_ReceiverSensitivity_clicked()
{
    setting_sensitivity->show();
}

void Setting::on_btn_MaximumInputSignalLevel_clicked()
{
    setting_maximuminputpower->show();
}

void Setting::on_btn_PERReportIntergrity_clicked()
{
    setting_perintegrity->show();
}

void Setting::on_cbox_DTMTest_clicked(bool checked)
{
    // DTM_Test 未被选中状态
    if(checked == false)
    {
        ui->cbox_OutputPower->setEnabled(false);
        ui->cbox_ModulationCharacteristics->setEnabled(false);
        ui->cbox_CarrierFrequencyOffsetAndDrift->setEnabled(false);
        ui->cbox_ReceiverSensitivity->setEnabled(false);
        ui->cbox_MaximumInputSignalLevel->setEnabled(false);
        ui->cbox_PERReportIntergrity->setEnabled(false);
        ui->btn_OutputPower->setEnabled(false);
        ui->btn_ModulationCharacteristics->setEnabled(false);
        ui->btn_CarrierFrequencyOffset->setEnabled(false);
        ui->btn_ReceiverSensitivity->setEnabled(false);
        ui->btn_MaximumInputSignalLevel->setEnabled(false);
        ui->btn_PERReportIntergrity->setEnabled(false);
    }
    // DTM_Test 选中状态
    else
    {
        ui->cbox_OutputPower->setEnabled(true);
        ui->cbox_ModulationCharacteristics->setEnabled(true);
        ui->cbox_CarrierFrequencyOffsetAndDrift->setEnabled(true);
        ui->cbox_ReceiverSensitivity->setEnabled(true);
        ui->cbox_MaximumInputSignalLevel->setEnabled(true);
        ui->cbox_PERReportIntergrity->setEnabled(true);
        ui->btn_OutputPower->setEnabled(true);
        ui->btn_ModulationCharacteristics->setEnabled(true);
        ui->btn_CarrierFrequencyOffset->setEnabled(true);
        ui->btn_ReceiverSensitivity->setEnabled(true);
        ui->btn_MaximumInputSignalLevel->setEnabled(true);
        ui->btn_PERReportIntergrity->setEnabled(true);
    }
}

void Setting::on_rbtn_Default_clicked(bool checked)
{
    // 默认按钮没有被选中状态
    if(checked == true)
    {
        ui->le_CompanyID0Bit->setEnabled(false);
        ui->le_CompanyID1Bit->setEnabled(false);
        ui->le_CompanyID2Bit->setEnabled(false);
        ui->le_StartPart0Bit->setEnabled(false);
        ui->le_StartPart1Bit->setEnabled(false);
        ui->le_StartPart2Bit->setEnabled(false);
        ui->le_EndPart0Bit->setEnabled(false);
        ui->le_EndPart1Bit->setEnabled(false);
        ui->le_EndPart2Bit->setEnabled(false);
        ui->btn_Set->setEnabled(false);
    }
    // 默认按钮选中状态
    else
    {
        ui->le_CompanyID0Bit->setEnabled(true);
        ui->le_CompanyID1Bit->setEnabled(true);
        ui->le_CompanyID2Bit->setEnabled(true);
        ui->le_StartPart0Bit->setEnabled(true);
        ui->le_StartPart1Bit->setEnabled(true);
        ui->le_StartPart2Bit->setEnabled(true);
        ui->le_EndPart0Bit->setEnabled(true);
        ui->le_EndPart1Bit->setEnabled(true);
        ui->le_EndPart2Bit->setEnabled(true);
        ui->btn_Set->setEnabled(true);
    }
}
