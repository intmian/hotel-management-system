#ifndef MYWIN_H
#define MYWIN_H

#include <QMainWindow>
#include <QPoint>
class MyWin : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyWin(QWidget *parent = nullptr);
    bool eventFilter(QObject *obj, QEvent *event);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
private:
    bool mousePressed;
    QPoint mousePoint;
signals:

public slots:
};

#endif // MYWIN_H
