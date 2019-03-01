#include "toolsfuc.h"
#include <QDebug>

ToolsFuc::ToolsFuc()
{

}

void ToolsFuc::IntToBin(int data, QByteArray &binData)
{
    int nYushu, nShang;
    QString strBin, strTemp;
    bool bContinue = true;
    while( bContinue )
    {
        nYushu = data % 2;
        nShang = data / 2;
        strBin = QString::number(nYushu) + strBin;
        strTemp = strBin;
        data = nShang;
        if( nShang == 0)
        {
            bContinue = false;
        }
    }
    int nTemp = strBin.length() % 4;
    switch (nTemp) {
        case 1:
            strTemp = "000"+strBin;
            strBin = strTemp;
            break;
        case 2:
            strTemp = "00" + strBin;
            strBin = strTemp;
            break;
        case 3:
            strTemp = "0" + strBin;
            strBin = strTemp;
            break;
        default:
            break;
    }
    binData = strBin.toLatin1();
}

void ToolsFuc::BinToInt(QByteArray &data, QString strBin)
{
    QString decimal;
    int nDec = 0,nLen;
    int i,j,k;
    nLen = strBin.length();
    for (i = 0 ; i<nLen ; i++) {
        if(strBin[nLen-i-1]=="0")
        {
            continue;
        }
        else
        {
            k = 1;
            for(j=0;j<i;j++)
            {
                k=k*2;
            }
            nDec += k;
        }
    }
    decimal = QString::number(nDec);
    data = decimal.toLatin1();
}

void ToolsFuc::StringToHex(QString str, QByteArray &sendData)
{
    char hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    sendData.resize(len/2);
    char lstr,hstr;
    for (int i=0; i<len;) {
        hstr=str[i].toLatin1();
        if(hstr == ' ')
        {
//            qDebug()<< tr("null");
            i++;
            continue;
        }
        i++;
        if(i>=len)
        {
//            qDebug()<< tr("over");
            break;
        }
        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
        {
//            qDebug()<< tr("error");
            break;
        }
        else
        {
            hexdata =  hexdata *16 + lowhexdata;
        }
        i++;
//        qDebug("转化为16进制数：%d",hexdata);
        sendData[hexdatalen] = hexdata;
        hexdatalen++;
    }
    sendData.resize(hexdatalen);
//    qDebug()<<sendData.length();
}

char ToolsFuc::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return ch-0x30;
    }
    else if(ch >= 'A' && ch <= 'F')
    {
        return ch-'A'+10;
    }
    else if(ch >= 'a' && ch <= 'f')
    {
        return ch-'a'+10;
    }
    else return ch-ch;
}

void ToolsFuc::IntTo4BytesLHStr(int ndata, QByteArrayList &aldata)
{
    int nQuotient,nRemainder;
    int count = 0;
    QByteArray binSize; // 二进制缓存
    QByteArray IntSize; // 十进制缓存
    QByteArrayList alBinSize; // 二进制 Hex 文件的大小
    // 拆分二进制字符串，并将每一部分二进制字符串转换为十进制
    IntToBin(ndata,binSize);
    nQuotient = binSize.size() / 8;
    nRemainder = binSize.size() % 8;
    for(int i = 0 ; i<4; i++)
    {
        if(3 - nQuotient > 0)
        {
            alBinSize.insert(0,"");
            nQuotient++;
        }
        else
        {
            if( count == 0)
            {
                alBinSize.insert(0,binSize.left(nRemainder));
                binSize.remove(0,nRemainder);
                count++;
            }
            else
            {
                alBinSize.insert(0,binSize.mid((count-1)*8,8));
                count++;
            }
        }
    }
    aldata.clear();
    BinToInt(IntSize,alBinSize[0]);
    aldata.append(IntSize);
    BinToInt(IntSize,alBinSize[1]);
    aldata.append(IntSize);
    BinToInt(IntSize,alBinSize[2]);
    aldata.append(IntSize);
    BinToInt(IntSize,alBinSize[3]);
    aldata.append(IntSize);
//    qDebug()<<"data 3:"<<alBinSize[3];
//    qDebug()<<"data 2:"<<alBinSize[2];
//    qDebug()<<"data 1:"<<alBinSize[1];
//    qDebug()<<"data 0:"<<alBinSize[0];
//    qDebug()<<"data 3:"<<aldata[3];
//    qDebug()<<"data 2:"<<aldata[2];
//    qDebug()<<"data 1:"<<aldata[1];
//    qDebug()<<"data 0:"<<aldata[0];
}

unsigned short ToolsFuc::HexStrToUShort(QString str, int length)
{
    // 初始化变量为 0 ，否则会由于不明因素造成数据紊乱
    unsigned short tempData = 0;
    int data = 0;
    for(int i = 0; i< length; i++)
    {
        if((str[i]>='A') && (str[i]<= 'F'))
            data = str[i].toLatin1() - 'A' +10; // 字符串转字符
        else if((str[i]>='a')&&(str[i])<='f')
            data = str[i].toLatin1() - 'a' + 10;
        else data = str[i].toLatin1()-'0';
        tempData = tempData*16+ushort(data);
    }
    return tempData;
}

void ToolsFuc::IntTo2BytesLHStr(int ndata, QByteArrayList &aldata)
{
    int nQuotient,nRemainder;
    int count = 0;
    QByteArray binSize; // 二进制缓存
    QByteArray IntSize; // 十进制缓存
    QByteArrayList alBinSize; // 二进制 Hex 文件的大小
    // 拆分二进制字符串，并将每一部分二进制字符串转换为十进制
    IntToBin(ndata,binSize);
    nQuotient = binSize.size() / 8;
    nRemainder = binSize.size() % 8;
    for(int i = 0 ; i<2; i++)
    {
        if(1 - nQuotient > 0)
        {
            alBinSize.insert(0,"");
            nQuotient++;
        }
        else
        {
            if( count == 0)
            {
                alBinSize.insert(0,binSize.left(nRemainder));
                binSize.remove(0,nRemainder);
                count++;
            }
            else
            {
                alBinSize.insert(0,binSize.mid((count-1)*8,8));
                count++;
            }
        }
    }
    aldata.clear();
    BinToInt(IntSize,alBinSize[0]);
    aldata.append(IntSize);
    BinToInt(IntSize,alBinSize[1]);
    aldata.append(IntSize);
}

void ToolsFuc::Delay_Msec(int msec)
{
    QTime _Time = QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime()<_Time)
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void ToolsFuc::IntToBytesIntStr(int ndata, int indexs, QByteArray &sdata)
{
    QByteArray HexData;
    int HexDataIndex;
    HexData = QString("%1").arg(ndata).toLatin1();
    HexDataIndex = HexData.length();
    if(indexs < HexDataIndex)
    {
        for(int i = 0; i< HexDataIndex - indexs; i++)
        {
             HexData.remove(i,1);
        }
    }
    else
    {
        for(int j = 0; j< indexs - HexDataIndex ; j++)
        {
            HexData.append("0");
        }
    }
    sdata = HexData;
}
