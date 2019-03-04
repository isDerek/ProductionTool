#include "mysql.h"
#include <QDebug>
#include <QSqlError>
MySql::MySql()
{

}

bool MySql::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    db.setDatabaseName("productionTool");       //这里输入你的数据库名
//    db.setUserName("root");
//    db.setPassword("");   //这里输入你的密码

    db.setHostName("47.112.195.182");
    db.setPort(2019);
    db.setDatabaseName("productiontool");       //这里输入你的数据库名
    db.setUserName("roottest");
    db.setPassword("88888888");   //这里输入你的密码
    if (!db.open()) {
        QMessageBox::critical(nullptr, QObject::tr("无法打开数据库"),
        "无法创建数据库连接！ ", QMessageBox::Cancel);
        return false;
    }
    return true;
}

void MySql::writeSql(QString table, QString field, QString value)
{
    QString str = QString("insert into %1(%2) values('%3')").arg(table).arg(field).arg(value);
    QSqlQuery query;
    query.exec(str);
    qDebug()<<"插入成功";
}

void MySql::deleteSql(QString table, QString field, QString value)
{
    QString str = QString("delete from %1 where %2 = '%3'").arg(table).arg(field).arg(value);
    QSqlQuery query;
    query.exec(str);
    qDebug()<<"删除成功";
}

void MySql::updateSql(QString table, QString updatefield,  QString checkfield, QString updateValue, QString checkValue)
{
    QString checkData;
    QString str = QString("update %1 set %2 = '%3' where %4 = '%5'").arg(table).arg(updatefield).arg(updateValue).arg(checkfield).arg(checkValue);
    QSqlQuery query;
    query.exec(str);
    while (query.next())
    {
        checkData = query.value(3).toString();
    }
//    qDebug()<<"更新成功";
}

bool MySql::checkSql(QString table, QString field, QString value, QString &pairingCode)
{
    QString str = QString("select *from %1 where %2 = '%3'").arg(table).arg(field).arg(value);
    QSqlQuery query;
    query.exec(str);

    while (query.next())
    {
        pairingCode = query.value(3).toString();
    }
    if(pairingCode != "")
    {
        return true;
    }
    return false;
}
