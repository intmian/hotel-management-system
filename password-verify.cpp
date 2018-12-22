#include "password-verify.h"
#include <QFile>
#include <QDebug>
bool IfPWDRight(QString passwordPlace, QString input)
{
    qDebug() << input.toLatin1();
    QCryptographicHash hash(QCryptographicHash::Sha256);
    hash.addData(input.toLatin1());
    QByteArray pwdHash(hash.result().toHex());
    QFile file(passwordPlace);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
           qDebug()<<"Can't open the file!"<<endl;
    }
    QByteArray line = file.readLine();
    return pwdHash == line;
}
