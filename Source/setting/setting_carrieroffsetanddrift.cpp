#include "setting_carrieroffsetanddrift.h"
#include "ui_setting_carrieroffsetanddrift.h"

Setting_CarrierOffsetAndDrift::Setting_CarrierOffsetAndDrift(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_CarrierOffsetAndDrift)
{
    ui->setupUi(this);
    this->setWindowTitle("Carrier Offset & Drift Setting");
}

Setting_CarrierOffsetAndDrift::~Setting_CarrierOffsetAndDrift()
{
    delete ui;
}
