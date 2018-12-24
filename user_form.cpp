#include "user_form.h"
#include "ui_user_form.h"

user_form::user_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_form),
    use(6),
    icon_add{"room","in","out","re","search","export"},
    icon_s_add{"room_s","in_s","out_s","re_s","search_s","export_s"},
    sql("setting.txt")
{
    setWindowFlags((Qt::FramelessWindowHint));//设置窗体无边框
    setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    ui->setupUi(this);

    buttons={ui->room_button,ui->in_button,ui->out_button,ui->reserve_button,ui->search_button,ui->export_button};
    icons={ui->room_icon,ui->in_icon,ui->out_icon,ui->re_icon,ui->search_icon,ui->export_icon};
    status={ui->room_status,ui->in_status,ui->out_status,ui->reserve_status,ui->search_status,ui->export_status};

    model = new QStandardItemModel(ui->room_table_view);
    model->setColumnCount(6);
    model->setHeaderData(0,Qt::Horizontal, "房间号");
    model->setHeaderData(1,Qt::Horizontal, "房间性质");
    model->setHeaderData(2,Qt::Horizontal, "姓名");
    model->setHeaderData(3,Qt::Horizontal, "身份证号");
    model->setHeaderData(4,Qt::Horizontal, "是否入住");
    model->setHeaderData(5,Qt::Horizontal, "入住时间");
    ui->room_table_view->setModel(model);
    ui->room_table_view->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->room_table_view->verticalHeader()->hide();

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
    updateDataTable();

    ui->in_level_select->addItem("标间");
    ui->in_level_select->addItem("二人间");
    ui->in_level_select->addItem("套房");
    ui->in_level_select->addItem("豪华套房");

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

    SetObjectSS(ui->in_id_input,":/qss/line_text");
    SetObjectSS(ui->in_roomId_text,":/qss/line_text");
    SetObjectSS(ui->in_name_text,":/qss/line_text");
    SetObjectSS(ui->in_group_text,":/qss/line_text");

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

    auto text = ui->in_roomId_text;
    auto room_level = ui->in_level_select;
    connect(ui->in_roomId_radio,&ui->in_roomId_radio->toggled,[text,room_level](bool open)
    {
        text->setEnabled(open);
        room_level->setEnabled(!open);
        if(open)
        {
            // TODO SHOW 默认
        }
        else
        {
            room_level->setCurrentIndex(0);
        }
    });
    text = ui->in_group_text;
    connect(ui->in_group_radio,&ui->in_group_radio->toggled,[text](bool open){text->setEnabled(open);});
    connect(ui->in_in,&ui->in_in->clicked,this,&in_in_click);
    connect(ui->out_out,&ui->out_out->clicked,this,&out_out_click);
    auto text_people = ui->out_id_text;
    connect(ui->out_people_radio,&ui->out_people_radio->toggled,[text_people](bool open)
    {
        text_people->setEnabled(open);
    });
    auto text_group = ui->out_group_name_text;
    connect(ui->out_group_radio,&ui->out_group_radio->toggled,[text_group](bool open)
    {
        text_group->setEnabled(open);
    });
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
    updateDataTable();
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

void user_form::updateDataTable()
{
    // show sql
    model->removeRows(0,model->rowCount());
    QSqlQuery qq(sql.db);
    qq.exec("select room.id,level_price.level_name,people.people_name,people.id,live.date from people,live,room,level_price where people.id = live.people_id and room.id = live.room_id and level_price.level = room.level");
    while(qq.next())
    {
        QList<QStandardItem *> list;
        qDebug()<<qq.value(0).toString() << qq.value(1).toString()<< qq.value(2).toString()<< qq.value(3).toString();
        for(int i = 0;i < 4;i++)
        {
            list.append(new QStandardItem(qq.value(i).toString().trimmed()));
        }
        list.append(new QStandardItem("入住"));
        list.append(new QStandardItem(qq.value(4).toDate().toString("yyyy-MM-dd")));
        model->appendRow(list);
    }

    qq.exec("select room.id,level_price.level_name,people.people_name,people.id from room,reserve,people,level_price where  room.id = reserve.room_id and people.id = reserve.people_id and  level_price.level = room.level");
    while(qq.next())
    {
        QList<QStandardItem *> list;
        qDebug()<<qq.value(0).toString() << qq.value(1).toString()<< qq.value(2).toString()<< qq.value(3).toString();
        for(int i = 0;i < 4;i++)
        {
            list.append(new QStandardItem(qq.value(i).toString().trimmed()));
        }
        list.append(new QStandardItem("预约"));
        model->appendRow(list);
    }

    qq.exec("select room.id,level_price.level_name from room,level_price,if_use where  room.level = level_price.level and room.id = if_use.room_id and if_use.if_use = 0");
    while(qq.next())
    {
        QList<QStandardItem *> list;
        for(int i = 0;i < 2;i++)
        {
            list.append(new QStandardItem(qq.value(i).toString().trimmed()));
        }
        model->appendRow(list);
    }
}

void user_form::in_in_click()
{
    QString people_name = ui->in_name_text->text();
    QString people_id = ui->in_id_input->text();
    int level = ui->in_level_select->currentIndex() + 1;
    int room_id;
    QString group_name;
    bool room_select = ui->in_roomId_radio->isChecked();
    bool group_select = ui->in_group_radio->isChecked();
    QSqlQuery qq(sql.db);
    if (room_select)
    {
        room_id = ui->in_roomId_text->text().toInt();
    }
    if (group_select)
    {
        group_name = ui->in_group_text->text();
    }

    if(room_select)
    {
        QString check = QString("select if_use.if_use from if_use where if_use.room_id = %1").arg(room_id);
        qq.exec(check);
        qq.next();
        auto empty = qq.value(0).toBool();  // 是否可以填入
        if(empty)
        {
            // TODO show 满
            return;
        }
    }

    if (!room_select)
    {
        qq.exec("select room.id,level_price.level from room,level_price,if_use where  room.level = level_price.level and room.id = if_use.room_id and if_use.if_use = 0");
        while(qq.next())
        {
            auto room_id_get = qq.value(0).toInt();
            auto room_level = qq.value(1).toInt();
            if (room_level == level)
            {
                room_id = room_id_get;
                break;
            }
        }
        if(!qq.next())
        {
            // TO SHOW 满
            return;
        }
    }

    QString cmd;
    if (group_select)
         cmd = QString("update if_use set if_use = 1 from if_use where if_use.room_id = %1 insert into people values('%2','%3',%4,'%5') insert into live values('%6',%7,'%8')").arg(
                    QString(QString::number(room_id)),
                    people_id,
                    people_name,
                    "1",
                    group_name,
                    people_id,
                    QString(QString::number(room_id)),
                    QDateTime::currentDateTime().toString("yy-MM-dd")
                    );
    else
    {
        cmd = QString("update if_use set if_use = 1 from if_use where if_use.room_id = %1 insert into people values('%2','%3',%4,'%5') insert into live values('%6',%7,'%8')").arg(
                    QString(QString::number(room_id)),
                    people_id,
                    people_name,
                    "0",
                    "NULL",
                    people_id,
                    QString(QString::number(room_id)),
                    QDateTime::currentDateTime().toString("yy-MM-dd")
                    );
    }
    qq.exec(cmd);
}

void user_form::out_out_click()
{
    bool people_select = ui->out_people_radio->isChecked();
    bool group_select = ui->out_group_radio->isChecked();
    QSqlQuery qq(sql.db);
    if (people_select)
    {
        QDate before;
        qq.exec(QString("select live.date from live where live.people_id = '%1'").arg(ui->out_id_text->text()));
        if(!qq.next())
        {
            // TO SHOW no
            return;
        }
        else
        {
            before = qq.value(0).toDate();
        }
        qq.exec(QString("select level_price.price from live,room,level_price where   live.people_id = '%1' and live.room_id = room.id and room.level = level_price.level").arg(ui->out_id_text->text()));
        qq.next();
        int price = qq.value(0).toInt();
        QString money;
        money = money.number(price * (int)before.daysTo(QDate::currentDate()));
        if (price * before.daysTo(QDate::currentDate()) == 0)
        {
            money = "0";
        }
        ui->out_money->setText(money + " 元");
        QString cmd = "update if_use set if_use.if_use = 0 from if_use,live where if_use.room_id = live.room_id and live.people_id = '%1' delete from people where people.id = '%2' delete from live where live.people_id = '%3'";
        cmd = cmd.arg(ui->out_id_text->text(),ui->out_id_text->text(),ui->out_id_text->text());
        qDebug() << cmd;
        qq.exec(cmd);

    }
    if(group_select)
    {

    }
}


