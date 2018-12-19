#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDebug>
#include <QMovie>
#include <QPoint>
#include <QMouseEvent>  //引用鼠标类头文件
#include <qimage.h>
#include <qpixmap.h>
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
private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H