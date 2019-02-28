#include "setting_sensitivity.h"
#include "ui_setting_sensitivity.h"

Setting_Sensitivity::Setting_Sensitivity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_Sensitivity)
{
    ui->setupUi(this);
    this->setWindowTitle("Sensitivity Setting");
}

Setting_Sensitivity::~Setting_Sensitivity()
{
    delete ui;
}
