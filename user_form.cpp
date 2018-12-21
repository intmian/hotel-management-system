#include "user_form.h"
#include "ui_user_form.h"

user_form::user_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_form)
{
    setWindowFlags((Qt::FramelessWindowHint));//设置窗体无边框
    setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    ui->setupUi(this);

    ui->back->setStyleSheet("QWidget"
                            "{"
                            "   background-color:#3f3c37;"
                            "   border-style:inset;"                  //边框样式（inset/outset）
                            "   border-width:1px;"                     //边框宽度像素
                            "   border-radius:10px;"                   //边框圆角半径像素
                            "   border-color:#3f3c37;"    //边框颜色
                            "}");



    // connect area
    ui->close->setStyleSheet("QPushButton{"
                             "background-color:transparent;"
                             "font:30px;"                       //字体，字体大小
                             "color:rgba(255,255,255,100);"                //字体颜色
                             "}"
                             //鼠标按下样式
                             "QPushButton:pressed{"
                             "background-color:transparent;"
                             "font:40px;"                       //字体，字体大小
                             "color:#f14c3a;"                //字体颜色
                             "}"
                             //鼠标悬停样式
                             "QPushButton:hover{"
                             "background-color:transparent;"
                             "font:40px;"                       //字体，字体大小
                             "color:#f14c3a;"                //字体颜色
                             "}"
                             );

    ui->hide->setStyleSheet("QPushButton{"
                            "background-color:transparent;"
                            "font:30px;"                       //字体，字体大小
                            "color:rgba(255,255,255,100);"                //字体颜色
                            "}"
                            //鼠标按下样式
                            "QPushButton:pressed{"
                            "background-color:transparent;"
                            "font:40px;"                       //字体，字体大小
                            "color:#409eff;"                //字体颜色
                            "}"
                            //鼠标悬停样式
                            "QPushButton:hover{"
                            "background-color:transparent;"
                            "font:40px;"                       //字体，字体大小
                            "color:#409eff;"                //字体颜色
                            "}"
                            );

    SetObjectSS(ui->export_button,":/qss/button");
    SetObjectSS(ui->in_button,":/qss/button");
    SetObjectSS(ui->out_button,":/qss/button");
    SetObjectSS(ui->search_button,":/qss/button");
    SetObjectSS(ui->room_button,":/qss/button");
    SetObjectSS(ui->reserve_button,":/qss/button");

    connect(ui->close,&ui->close->clicked,this,&this->close);
    connect(ui->hide,&ui->hide->clicked,[this](){this->setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);});  // TODO WRONG
}

user_form::~user_form()
{
    delete ui;
}
void user_form::mousePressEvent(QMouseEvent *e)
{
    if(e->pos().rx()>772 || e->pos().ry()>629)
        return ;
    last = e->globalPos();
}
void user_form::mouseMoveEvent(QMouseEvent *e)
{
    if(e->pos().rx()>772 || e->pos().ry()>629)
        return ;
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    last = e->globalPos();
    move(x()+dx,y()+dy);
}
void user_form::mouseReleaseEvent (QMouseEvent *e)
{
    if(e->pos().rx()>772 || e->pos().ry()>629)
        return ;
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    move(x()+dx, y()+dy);
}

void user_form::SetObjectSS(QWidget *object_add, QString addr)
{
    QFile file(addr);
    file.open(QFile::ReadOnly);
    if (file.isOpen())
    {
        QString qls(file.readAll());
        object_add->setStyleSheet(qls);//读取样式表文件
        file.close();
    }
    else
    {
        throw "No qss";
    }
}
