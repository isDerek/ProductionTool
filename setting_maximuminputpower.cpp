#include "setting_maximuminputpower.h"
#include "ui_setting_maximuminputpower.h"

Setting_MaximumInputPower::Setting_MaximumInputPower(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_MaximumInputPower)
{
    ui->setupUi(this);
    this->setWindowTitle("Maximum Input Power Setting");
}

Setting_MaximumInputPower::~Setting_MaximumInputPower()
{
    delete ui;
}
