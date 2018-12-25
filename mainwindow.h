#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPropertyAnimation>
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
#include "user_form.h"
#include "password-verify.h"
#include "sql_tool.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *start;
    QPoint last;
    QMovie *movie;
    QImage *image;
   //鼠标按下
   void mousePressEvent(QMouseEvent *e);
   //鼠标移动
   void mouseMoveEvent(QMouseEvent *e);
   //鼠标释放
   void mouseReleaseEvent(QMouseEvent *e);
   // 登录事件
   void login();
private:
    SQL sql;
    Ui::MainWindow *ui;
    void SetLabelPic(QLabel * label,QString pic_name);
public slots:
    void successful();
    void failed();
    void pause();
    void open_user_form();
    void on_button_click();
};

#endif // MAINWINDOW_H
