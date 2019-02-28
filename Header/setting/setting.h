#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include "setting_outputpower.h"
#include "setting_modulationcharacteristic.h"
#include "setting_carrieroffsetanddrift.h"
#include "setting_sensitivity.h"
#include "setting_maximuminputpower.h"
#include "setting_perintegrity.h"

namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();

private slots:
    void on_btn_OutputPower_clicked();

    void on_btn_ModulationCharacteristics_clicked();

    void on_btn_CarrierFrequencyOffset_clicked();

    void on_btn_ReceiverSensitivity_clicked();

    void on_btn_MaximumInputSignalLevel_clicked();

    void on_btn_PERReportIntergrity_clicked();

    void on_cbox_DTMTest_clicked(bool checked);

    void on_rbtn_Default_clicked(bool checked);

private:
    Ui::Setting *ui;
    Setting_OutputPower *setting_OutputPower = new Setting_OutputPower;
    Setting_ModulationCharacteristic *setting_modulationcharacteristic = new Setting_ModulationCharacteristic;
    Setting_CarrierOffsetAndDrift *setting_carrieroffsetanddrift = new Setting_CarrierOffsetAndDrift;
    Setting_Sensitivity *setting_sensitivity = new Setting_Sensitivity;
    Setting_MaximumInputPower *setting_maximuminputpower = new Setting_MaximumInputPower;
    Setting_PERIntegrity *setting_perintegrity = new Setting_PERIntegrity;

};

#endif // SETTING_H
