#include "sql_tool.h"
#include <QTextStream>
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

SQL::SQL(QString add)
{
    QFile file(add);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
           qDebug()<<"Can't open the file!"<<endl;
    }
    ip = file.readLine();
    ip.chop(1);
    sourse = file.readLine();
    sourse.chop(1);
    name = file.readLine();
    name.chop(1);
    pwd = file.readLine();
    file.close();
}

bool SQL::open()
{
    db = QSqlDatabase::addDatabase("QODBC");   //数据库驱动类型为SQL Server
    QString dsn = sourse;      //数据源名称
    db.setHostName(ip);                        //选择本地主机，127.0.1.1 localhost
    db.setDatabaseName(dsn);                            //设置数据源名称
    db.setUserName(name);                               //登录用户
    db.setPassword(pwd);                           //密码
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

SQL::~SQL()
{
    db.close();
}

void SQL::tofile(QString add)
{
    QFile file(add);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
           qDebug()<<"Can't open the file!"<<endl;
    }
    QTextStream in(&file);
    in << ip << "\n" << sourse << "\n" << name << "\n" << pwd << "\n";
    file.close();
}
