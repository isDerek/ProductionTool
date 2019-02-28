#include "setting_perintegrity.h"
#include "ui_setting_perintegrity.h"

Setting_PERIntegrity::Setting_PERIntegrity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_PERIntegrity)
{
    ui->setupUi(this);
    this->setWindowTitle("PER Integrity Setting");
}

Setting_PERIntegrity::~Setting_PERIntegrity()
{
    delete ui;
}
