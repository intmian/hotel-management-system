#include "sql_tool.h"
bool OpenDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");   //数据库驱动类型为SQL Server
    qDebug()<<"ODBC driver?"<<db.isValid();
    QString dsn = QString::fromLocal8Bit("HOTEL");      //数据源名称
    db.setHostName("172.20.10.11");                        //选择本地主机，127.0.1.1 localhost
    db.setDatabaseName(dsn);                            //设置数据源名称
    db.setUserName("sa");                               //登录用户
    db.setPassword("m1mo");                           //密码
    if(!db.open())                                      //打开数据库
    {
        qDebug()<<db.lastError().text();
        //QMessageBox::critical(0, QObject::tr("Database error"), db.lastError().text());
        return false;                                   //打开失败
    }
    else
    {
        qDebug()<<"database open success!";
        //QMessageBox::critical(0,"1","1");
    }
    return true;
}
