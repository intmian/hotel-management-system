#include "tip.h"
#include "ui_tip.h"
SetLabelPic(QLabel *label, QString pic_name)
{
    QImage * image = new QImage();
    image->load(":/images/"+pic_name);
    int width = label->width(),height = label->height();
    *image = image->scaled(width,height);
    label->setPixmap(QPixmap::fromImage(*image));
    delete image;
}

Tip::Tip(TIP tip,QString text,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tip)
{

    ui->setupUi(this);
    setWindowFlags((Qt::FramelessWindowHint));//设置窗体无边框
    setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setText(text);
    switch (tip) {
    case TIP::YES:
        SetLabelPic(ui->pic,"yes");
        break;
    case TIP::NO:
        SetLabelPic(ui->pic,"no");
        break;
    case TIP::WRONG:
        SetLabelPic(ui->pic,"connect_error");
        break;
    default:
        break;
    }
    animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(2000);
    animation->setStartValue(1);
    animation->setEndValue(0);
    animation->start();
    QTimer::singleShot(2000,this,&this->close);
}

Tip::~Tip()
{
    delete animation;
    delete ui;
}
