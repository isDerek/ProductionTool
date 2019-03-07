#ifndef DEVICEMODEL_H
#define DEVICEMODEL_H

#include <QDebug>
#include "mysql.h"

class DeviceModel
{
public:
    DeviceModel();
    void deviceRegister(char deviceID,QByteArray MACAddr);
    bool deviceCheck(char deviceID,QByteArray MACAddr);

private:
    MySql *mysql = new MySql;

};

#endif // DEVICEMODEL_H
