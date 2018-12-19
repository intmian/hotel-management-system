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
    movie->setScaledSize(ui->label->size());
    ui->label->setMovie(movie);
    connect(ui->pushButton,&ui->pushButton->clicked,movie,&movie->start);

    image = new QImage;
    image->load(":/images/back");
    int width = ui->back->width(),height = ui->back->height();
    *image = image->scaled(width,height);
    ui->back->setPixmap(QPixmap::fromImage(*image));
    connect(ui->close,&ui->close->clicked,this,&this->close);
    connect(ui->hide,&ui->hide->clicked,this,&this->minimumWidth);  // TODO WRONG
    /*start = new QPushButton("2333",this);
    start->setGeometry(100,100,100,100);
    start->show();
    start->setStyleSheet(//正常状态样式
                         "QPushButton{"
                         "background-color:rgba(100,225,100,30);"//背景色（也可以设置图片）
                         "border-style:outset;"                  //边框样式（inset/outset）
                         "border-width:8px;"                     //边框宽度像素
                         "border-radius:10px;"                   //边框圆角半径像素
                         "border-color:rgba(255,255,255,30);"    //边框颜色
                         "font:bold 20px;"                       //字体，字体大小
                         "color:rgba(0,0,0,100);"                //字体颜色
                         "padding:10px;"                          //填衬
                         "}"
                         //鼠标按下样式
                         "QPushButton:pressed{"
                         "background-color:rgba(100,255,100,200);"
                         "border-color:rgba(255,255,255,30);"
                         "border-style:inset;"
                         "color:rgba(0,0,0,100);"
                         "}"
                         //鼠标悬停样式
                         "QPushButton:hover{"
                         "background-color:rgba(100,255,100,100);"
                         "border-color:rgba(255,255,255,200);"
                         "color:rgba(0,0,0,200);"
                         "}"
    );
    */
}
//鼠标按下
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->pos().rx()>1000 || e->pos().ry()>500)
        return ;
    last = e->globalPos();
}

//鼠标移动
void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(e->pos().rx()>1000 || e->pos().ry()>500)
        return ;
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    last = e->globalPos();
    move(x()+dx,y()+dy);
}
void MainWindow::mouseReleaseEvent (QMouseEvent *e)
{
    if(e->pos().rx()>1000 || e->pos().ry()>500)
        return ;
        int dx = e->globalX() - last.x();
        int dy = e->globalY() - last.y();
        move(x()+dx, y()+dy);
}

MainWindow::~MainWindow()
{
    delete ui;
}
