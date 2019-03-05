#ifndef FACTORYPRO_H
#define FACTORYPRO_H

#include <QDebug>

class FactoryPro
{
public:
    FactoryPro();
    QByteArray setReportDataStr(char CMDID, char deviceID , char CMDStatus, char DataLSB, char DataMSB, char DataLength, QByteArray payload);
    void getReportDataStr(QByteArray protocolData, char &CMDID, char &deviceID , char &CMDStatus, char &DataLSB, char &DataMSB, char &DataLength, char &checkSum, QByteArray &payload);
    QByteArray getDeviceMACInfo(char deviceID); // 获取设备的 MAC 地址
    QByteArray getDeviceVersionInfo(char deviceID); // 获取设备版本信息
    void postPairingInfo(char deviceID); // 下发配对码命令
};

#endif // FACTORYPRO_H
