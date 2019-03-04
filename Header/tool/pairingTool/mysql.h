#ifndef MYSQL_H
#define MYSQL_H

#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>

class MySql
{
public:
    MySql();
    bool createConnection();
    void writeSql(QString table,QString field,QString value);
    void deleteSql(QString table,QString field,QString value);
    void updateSql(QString table, QString updatefield,  QString checkfield, QString updateValue, QString checkValue);
    bool checkSql(QString table,QString field,QString value,QString &pairingCode);
};

#endif // MYSQL_H
