#include "notifypairinginfo.h"
#include "ui_notifypairinginfo.h"
#include <QDebug>
NotifyPairingInfo::NotifyPairingInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NotifyPairingInfo)
{
    ui->setupUi(this);
    getPairingCode();
}

NotifyPairingInfo::~NotifyPairingInfo()
{
    delete ui;
}

int NotifyPairingInfo::getPairingCode()
{
    QString str = "select id from pairingInfo order by id desc limit 1";
    pairingInfoModel = new QSqlTableModel(this);
    pairingInfoModel->setTable("dongle");
    pairingInfoModel->select();
    return pairingInfoModel->rowCount()+1;
}

