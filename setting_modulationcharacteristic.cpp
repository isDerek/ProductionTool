#include "setting_modulationcharacteristic.h"
#include "ui_setting_modulationcharacteristic.h"

Setting_ModulationCharacteristic::Setting_ModulationCharacteristic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_ModulationCharacteristic)
{
    ui->setupUi(this);
    this->setWindowTitle("Modulation Characteristic");
}

Setting_ModulationCharacteristic::~Setting_ModulationCharacteristic()
{
    delete ui;
}
