#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowFlags((Qt::FramelessWindowHint));//设置窗体无边框
    setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    ui->setupUi(this);

    ui->lineEdit->setEchoMode(QLineEdit::Password);

    movie = new QMovie(":/images/loading");
    movie->setParent(this);
    movie->setScaledSize(ui->movie->size());
    ui->movie->setMovie(movie);
    movie->start();
    ui->movie->hide();
    movie->setPaused(true);

    connect(ui->pushButton,&ui->pushButton->clicked,this,&this->on_button_click);

    image = new QImage;
    image->load(":/images/back");
    int width = ui->back->width(),height = ui->back->height();
    *image = image->scaled(width,height);
    ui->back->setPixmap(QPixmap::fromImage(*image));

    image = new QImage;
    image->load(":/images/people_");
    width = ui->people->width();
    height = ui->people->height();
    *image = image->scaled(width,height);
    ui->people->setPixmap(QPixmap::fromImage(*image));

    ui->close->setStyleSheet("QPushButton{"
                             "background-color:transparent;"
                             "font:20px;"                       //字体，字体大小
                             "color:rgba(255,255,255,100);"                //字体颜色
                             "}"
                             //鼠标按下样式
                             "QPushButton:pressed{"
                             "background-color:transparent;"
                             "font:30px;"                       //字体，字体大小
                             "color:#f14c3a;"                //字体颜色
                             "}"
                             //鼠标悬停样式
                             "QPushButton:hover{"
                             "background-color:transparent;"
                             "font:30px;"                       //字体，字体大小
                             "color:#f14c3a;"                //字体颜色
                             "}"
                );

    ui->hide->setStyleSheet("QPushButton{"
                            "background-color:transparent;"
                            "font:20px;"                       //字体，字体大小
                            "color:rgba(255,255,255,100);"                //字体颜色
                            "}"
                            //鼠标按下样式
                            "QPushButton:pressed{"
                            "background-color:transparent;"
                            "font:30px;"                       //字体，字体大小
                            "color:#409eff;"                //字体颜色
                            "}"
                            //鼠标悬停样式
                            "QPushButton:hover{"
                            "background-color:transparent;"
                            "font:30px;"                       //字体，字体大小
                            "color:#409eff;"                //字体颜色
                            "}"
               );
    ui->pushButton->setStyleSheet("QPushButton{"
                                  "background-color:transparent;"
                                  "font:40px;"                       //字体，字体大小
                                  "color:#dcdcdc;"                //字体颜色
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:transparent;"
                                  "font:45px;"                       //字体，字体大小
                                  "color:#409eff;"                //字体颜色
                                  "}"
                                  //鼠标悬停样式
                                  "QPushButton:hover{"
                                  "background-color:transparent;"
                                  "font:45px;"                       //字体，字体大小
                                  "color:#409eff;"                //字体颜色
                                  "}"
                     );

    ui->lineEdit->setStyleSheet("QLineEdit{border-width:3px;border-radius:20px;border-style:outset;font-size:20px;color:black;border:1px solid gray;}"
        "QLineEdit:hover{border-width:3px;border-radius:20px;border-style:outset;font-size:20px;color:black;border:1px solid rgb(70,200,50);}");

    ui->people->setStyleSheet("background-color:/images/people");

    ui->label->setStyleSheet("QLabel{"
                             "color:rgb(255, 255, 255);"
                             "}");
    ui->back->setStyleSheet( "QLabel{"
                                "border-style:inset;"                  //边框样式（inset/outset）
                                "border-width:1px;"                     //边框宽度像素

                             "}"
                             );
    connect(ui->close,&ui->close->clicked,this,&this->close);
    connect(ui->hide,&ui->hide->clicked,[this](){this->setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);});  // TODO WRONG

}



//鼠标按下
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->pos().rx()>292 || e->pos().ry()>391)
        return ;
    last = e->globalPos();
}

//鼠标移动
void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(e->pos().rx()>292 || e->pos().ry()>391)
        return ;
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    last = e->globalPos();
    move(x()+dx,y()+dy);
}
void MainWindow::mouseReleaseEvent (QMouseEvent *e)
{
    if(e->pos().rx()>292 || e->pos().ry()>391)
        return ;
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    move(x()+dx, y()+dy);
}

MainWindow::~MainWindow()
{
    delete uf;
    delete ui;
}

void MainWindow::login()
{
    pause();
    if (!OpenDatabase())
    {
        QTimer::singleShot(2000,this,&this->pause);  // 关闭动画
        SetLabelPic(ui->people,"connect_error");
        return;
    }
    bool ret = IfPWDRight("pass_word.txt",ui->lineEdit->text());
    if (ret)
    {
        successful();
    }
    else
    {
        failed();
    }
    ui->lineEdit->setText("");
}

void MainWindow::successful()
{
    SetLabelPic(ui->people,"yes");
    QTimer::singleShot(500,this,&this->open_user_form);
}

void MainWindow::failed()
{
     SetLabelPic(ui->people,"no");
}

void MainWindow::pause()
{
    ui->movie->hide();
    movie->setPaused(true);
}

void MainWindow::open_user_form()
{
    user_form* uf = new user_form;
    uf->show();
    this->close();
}

void MainWindow::on_button_click()
{
    movie->setPaused(false);
    ui->movie->show();
    QTimer::singleShot(1000,this,&this->login);
}
void MainWindow::SetLabelPic(QLabel *label, QString pic_name)
{
    QImage * image = new QImage();
    image->load(":/images/"+pic_name);
    int width = label->width(),height = label->height();
    *image = image->scaled(width,height);
    label->setPixmap(QPixmap::fromImage(*image));
    delete image;
}
