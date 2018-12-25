#include "password-verify.h"
bool IfPWDRight(QString input,QSqlQuery qq, bool admin = false)
{
    qDebug() << input.toLatin1();
    if(!admin)
        qq.exec("select pwd_hash \
from pass_word \
where level = 0");
    else
    {
        qq.exec("select pwd_hash \
from pass_word \
where level = 1");
    }
    qq.next();
    auto hash = QCryptographicHash::hash(input.toLatin1(),QCryptographicHash::Sha256).toHex();
    auto right_hash = qq.value(0).toString().trimmed().toLatin1();
    return right_hash == hash;
}
