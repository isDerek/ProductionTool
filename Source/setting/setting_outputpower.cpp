#include "setting_outputpower.h"
#include "ui_setting_outputpower.h"

Setting_OutputPower::Setting_OutputPower(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_OutputPower)
{
    ui->setupUi(this);
    this->setWindowTitle("Output Power Setting");
}

Setting_OutputPower::~Setting_OutputPower()
{
    delete ui;
}
