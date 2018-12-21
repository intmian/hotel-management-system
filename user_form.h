#ifndef USER_FORM_H
#define USER_FORM_H

#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QDebug>
#include <QMovie>
#include <QPoint>
#include <QMouseEvent>  //引用鼠标类头文件
#include <qimage.h>
#include <qpixmap.h>
#include <QThread>
#include <QTimer>
#include <QWidget>
namespace Ui {
class user_form;
}

class user_form : public QWidget
{
    Q_OBJECT

public:
    explicit user_form(QWidget *parent = 0);
    ~user_form();
    //鼠标按下
    void mousePressEvent(QMouseEvent *e);
    //鼠标移动
    void mouseMoveEvent(QMouseEvent *e);
    //鼠标释放
    void mouseReleaseEvent(QMouseEvent *e);
private:
    QPoint last;
    Ui::user_form *ui;
    void SetObjectSS(QWidget * object_add, QString addr);
};

#endif // USER_FORM_H
