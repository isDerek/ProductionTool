#include "factorypro.h"

FactoryPro::FactoryPro()
{

}

// 设置协议包数据，并返回符合协议的数据包
QByteArray FactoryPro::setReportDataStr(char CMDID, char deviceID , char CMDStatus, char DataLSB, char DataMSB, char DataLength, QByteArray payload)
{
    QByteArray protocolData = nullptr;
    int dataSum = 0;
    protocolData[0] = CMDID;
    protocolData[1] = deviceID;
    protocolData[2] = CMDStatus;
    protocolData[3] = DataLSB;
    protocolData[4] = DataMSB;
    protocolData[5] = DataLength;
    for(int i = 0; i<DataLength;i++)
    {
        protocolData[6+i] = payload[i];
    }
    for(int h = 0; h < 6+DataLength ; h++)
    {
        dataSum = dataSum + protocolData[h];
    }
    protocolData[6+DataLength] = char(0x55-(dataSum)&0xff);
    return protocolData;
}

// 解析协议包数据
void FactoryPro::getReportDataStr(QByteArray protocolData, char &CMDID,char &deviceID , char &CMDStatus, char &DataLSB, char &DataMSB, char &DataLength, char &checkSum, QByteArray &payload)
{
    CMDID = protocolData[0];
    deviceID = protocolData[1];
    CMDStatus = protocolData[2];
    DataLSB = protocolData[3];
    DataMSB = protocolData[4];
    DataLength = protocolData[5];
    for(int i = 0 ; i<DataLength;i++)
    {
        payload[i] = protocolData[6+i];
    }
    checkSum = protocolData[6+DataLength];
//    qDebug()<<"CMDID = "<<CMDID;
//    qDebug()<<"deviceID = "<<deviceID;
//    qDebug()<<"CMDStatus = "<<CMDStatus;
//    qDebug()<<"DataLSB = "<<DataLSB;
//    qDebug()<<"DataMSB = "<<DataMSB;
//    qDebug()<<"DataLength = "<<DataLength;
//    qDebug()<<"payload = "<<payload;
//    qDebug()<<"checkSum"<<checkSum;
}

// 返回获取设备 MAC 信息协议
QByteArray FactoryPro::getDeviceMACInfo(char deviceID)
{
    QByteArray SendData;
    char CMDID = 0x01;
    char CMDStatus = 0x00;
    char DataLSB = 0x00;
    char DataMSB = 0x00;
    char DataLength = 0x00;
    QByteArray payload;
    SendData = setReportDataStr(CMDID, deviceID, CMDStatus, DataLSB, DataMSB, DataLength, payload);
    SendData.insert(0,"(");
    SendData.append(")");
    return SendData;
}

// 发送设备配对码
QByteArray FactoryPro::postPairingInfo(char deviceID, QByteArray pairingCode)
{
    QByteArray SendData;
    QByteArray payload;
    char CMDID = 0x03;
    char CMDStatus = 0x00;
    char DataLSB = 0x00;
    char DataMSB = 0x00;
    char DataLength = char(pairingCode.length());
    payload = pairingCode;
    SendData = setReportDataStr(CMDID, deviceID, CMDStatus, DataLSB, DataMSB, DataLength, payload);
    SendData.insert(0,"(");
    SendData.append(")");
    return SendData;
}
