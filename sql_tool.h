#include <QApplication>
#include <QDialog>
#include "mainwindow.h"
#include <QSqlDatabase>					//头文件
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#ifndef SQL_TOOL_H
#define SQL_TOOL_H
class SQL
{
private:
    QString ip;
    QString sourse;
    QString name;
    QString pwd;
public:
    QSqlDatabase db;
    SQL(QString add);
    bool open();
    ~SQL();
    void tofile(QString add);
};
bool OpenDatabase();
#endif // SQL_TOOL_H







