#include "devicemodel.h"

DeviceModel::DeviceModel()
{

}

bool DeviceModel::deviceCheck(char deviceID, QByteArray MACAddr)
{
    QString table;
    switch(deviceID)
    {
        case 0x01: table = "dongle";
            break;
        case 0x02: table = "mouse";
            break;
        default:
            break;
    }
    return mysql->checkSql(table, "macAddress", MACAddr.toHex());
}

void DeviceModel::deviceRegister(char deviceID,QByteArray MACAddr)
{
    QString table;
    switch(deviceID)
    {
        case 0x01: table = "dongle";
            break;
        case 0x02: table = "mouse";
            break;
        default:
            break;
    }
    mysql->writeSql(table,"macAddress",MACAddr.toHex());
}


