#include "user_form.h"
#include "ui_user_form.h"

user_form::user_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_form),
    use(6),
    icon_add{"room","in","out","re","search","export"},
    icon_s_add{"room_s","in_s","out_s","re_s","search_s","export_s"}
{
    setWindowFlags((Qt::FramelessWindowHint));//设置窗体无边框
    setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    ui->setupUi(this);

    buttons={ui->room_button,ui->in_button,ui->out_button,ui->reserve_button,ui->search_button,ui->export_button};
    icons={ui->room_icon,ui->in_icon,ui->out_icon,ui->re_icon,ui->search_icon,ui->export_icon};
    status={ui->room_status,ui->in_status,ui->out_status,ui->reserve_status,ui->search_status,ui->export_status};

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
    // 切换到第一页
    for(bool &&ifUse:use)
    {
        ifUse = false;
    }
    use[0] = true;
    ui->interface_->setCurrentIndex(0);

    ui->interface_->setStyleSheet("QTabWidget::pane{top:-1px;}");
    SetObjectSS(ui->room_tab,":/qss/widget");
    SetObjectSS(ui->in_tab,":/qss/widget");
    SetObjectSS(ui->out_tab,":/qss/widget");
    SetObjectSS(ui->reserve_tab,":/qss/widget");
    SetObjectSS(ui->search_tab,":/qss/widget");
    SetObjectSS(ui->export_tab,":/qss/widget");

    SetObjectSS(ui->room_button,":/qss/button_s");
    SetObjectSS(ui->in_button,":/qss/button");
    SetObjectSS(ui->out_button,":/qss/button");
    SetObjectSS(ui->reserve_button,":/qss/button");
    SetObjectSS(ui->search_button,":/qss/button");
    SetObjectSS(ui->export_button,":/qss/button");

    SetLabelPic(ui->room_icon,"room_s");
    SetLabelPic(ui->in_icon,"in");
    SetLabelPic(ui->out_icon,"out");
    SetLabelPic(ui->re_icon,"re");
    SetLabelPic(ui->search_icon,"search");
    SetLabelPic(ui->export_icon,"export");

    SetStatus(ui->room_status,true);
    SetStatus(ui->in_status,false);
    SetStatus(ui->out_status,false);
    SetStatus(ui->reserve_status,false);
    SetStatus(ui->search_status,false);
    SetStatus(ui->export_status,false);

    ui->interface_->tabBar()->hide();

    connect(ui->close,&ui->close->clicked,this,&this->close);
    connect(ui->hide,&ui->hide->clicked,[this](){this->setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);});  // TODO WRONG

    connect(ui->room_button,&ui->room_button->clicked,this,&this->room_button_click);
    connect(ui->in_button,&ui->in_button->clicked,this,&this->in_button_click);
    connect(ui->out_button,&ui->out_button->clicked,this,&this->out_button_click);
    connect(ui->reserve_button,&ui->reserve_button->clicked,this,&this->re_button_click);
    connect(ui->search_button,&ui->search_button->clicked,this,&this->search_button_click);
    connect(ui->export_button,&ui->export_button->clicked,this,&this->export_button_click);
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

void user_form::SetLabelPic(QLabel *label, QString pic_name)
{
    QImage * image = new QImage();
    image->load(":/icon/"+pic_name);
    int width = label->width(),height = label->height();
    *image = image->scaled(width,height);
    label->setPixmap(QPixmap::fromImage(*image));
    delete image;
}

void user_form::SetStatus(QLabel *status, bool ifUse)
{
    if(ifUse)
    {
        SetObjectSS(status,":/qss/status_s");
    }
    else
    {
        SetObjectSS(status,":/qss/status");
    }
}

void user_form::room_button_click(bool b)
{
    if(!translate(0))
        return;
    ui->interface_->setCurrentIndex(0);
}

void user_form::in_button_click(bool b)
{
    if(!translate(1))
        return;
    ui->interface_->setCurrentIndex(1);
}

void user_form::out_button_click(bool b)
{
    if(!translate(2))
        return;
    ui->interface_->setCurrentIndex(2);
}

void user_form::re_button_click(bool b)
{
    if(!translate(3))
        return;
    ui->interface_->setCurrentIndex(3);
}

void user_form::search_button_click(bool b)
{
    if(!translate(4))
        return;
    ui->interface_->setCurrentIndex(4);
}

void user_form::export_button_click(bool b)
{
    if(!translate(5))
        return;
    ui->interface_->setCurrentIndex(5);
}

bool user_form::translate(int to)
{
    int before;
    for (int i = 0;i != 6;i++)
    {
        if (use[i])
        {
            before = i;
            break;
        }
    }
    if (before == to){
        return false;
    }
    use[before] = false;
    use[to] = true;
    SetLabelPic(icons[before],icon_add[before]);
    SetLabelPic(icons[to],icon_s_add[to]);
    SetObjectSS(buttons[before],":/qss/button");
    SetObjectSS(buttons[to],":/qss/button_s");
    SetStatus(status[before],false);
    SetStatus(status[to],true);
    return true;
}
