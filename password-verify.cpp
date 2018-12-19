#include "password-verify.h"
#include <QFile>
#include <QDebug>
bool IfPWDRight(QString passwordPlace, QString input)
{
    QString pwdHash = QCryptographicHash::hash(input.toLocal8Bit(),QCryptographicHash::Algorithm::Sha256);
    QFile file(passwordPlace);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
           qDebug()<<"Can't open the file!"<<endl;
    }
    QByteArray line = file.readLine();
    return pwdHash == QString(line);
}
