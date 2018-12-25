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
#include <QLabel>
#include <vector>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QList>
#include <QDate>
#include <QDateTime>
#include "sql_tool.h"
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
    SQL sql;
    QPoint last;
    QStandardItemModel* model;
    Ui::user_form *ui;
    std::vector<bool> use;
    void SetObjectSS(QWidget * object_add, QString addr);
    void SetLabelPic(QLabel * label,QString pic_name);
    void SetStatus(QLabel * status, bool ifUse);
    std::vector<QLabel*> icons;
    std::vector<QLabel*> status;
    std::vector<QPushButton*> buttons;

    std::vector<QString> icon_add;
    std::vector<QString> icon_s_add;

public slots:
    void room_button_click(bool b);
    void in_button_click(bool b);
    void out_button_click(bool b);
    void re_button_click(bool b);
    void search_button_click(bool b);
    void export_button_click(bool b);
    bool translate(int to);  // 判断是否需要转换
    void updateDataTable();
    void in_in_click();
    void out_out_click();
    void re_re_click();
    void re_confirm_click();
    void search_id_click();
    void search_name_click();
    void search_group_click();
};

#endif // USER_FORM_H
