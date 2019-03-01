#ifndef TOOLSFUC_H
#define TOOLSFUC_H

#include <QMainWindow>
#include <QTime>
#include <QCoreApplication>

class ToolsFuc
{
public:
    ToolsFuc();
    void Delay_Msec(int msec); // 1 毫秒延时器
    void IntToBin(int data,QByteArray &binData); // 10 进制转 2 进制
    void BinToInt(QByteArray &data,QString strBin); // 2 进制转 10 进制
    void StringToHex(QString str, QByteArray &sendData); // 字符串转 16 进制
    void IntTo4BytesLHStr(int ndata, QByteArrayList &aldata); // 10进制转换为 4 字节字符串
    void IntTo2BytesLHStr(int ndata, QByteArrayList &aldata); // 10进制转换为 2 字节字符串
    unsigned short HexStrToUShort(QString str, int length); // 16进制字符串转 Ushort
    char ConvertHexChar(char ch); // 字符转 16 进制
    void IntToBytesIntStr(int ndata, int indexs, QByteArray &sdata); // 10 进制转自定义字节数的 10 进制字符串
};

#endif // TOOLSFUC_H
