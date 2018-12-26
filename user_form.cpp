#include "user_form.h"
#include "ui_user_form.h"

user_form::user_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_form),
    use(7),
    icon_add{"room","in","out","re","search","export","setting"},
    icon_s_add{"room_s","in_s","out_s","re_s","search_s","export_s","setting_s"},
    sql("setting.txt")
{
    setWindowIcon(QIcon(":/icon/icon/icon/jiudian.png"));
    setWindowFlags((Qt::FramelessWindowHint));//设置窗体无边框
    setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    ui->setupUi(this);
    ui->out_money->setAlignment(Qt::AlignCenter);
    buttons={ui->room_button,ui->in_button,ui->out_button,ui->reserve_button,ui->search_button,ui->export_button,ui->setting_button};
    icons={ui->room_icon,ui->in_icon,ui->out_icon,ui->re_icon,ui->search_icon,ui->export_icon,ui->setting_icon};
    status={ui->room_status,ui->in_status,ui->out_status,ui->reserve_status,ui->search_status,ui->export_status,ui->setting_status_status};

    model = new QStandardItemModel(ui->room_table_view);
    model->setColumnCount(7);
    model->setHeaderData(0,Qt::Horizontal, "房间号");
    model->setHeaderData(1,Qt::Horizontal, "房间性质");
    model->setHeaderData(2,Qt::Horizontal, "姓名");
    model->setHeaderData(3,Qt::Horizontal, "身份证号");
    model->setHeaderData(4,Qt::Horizontal, "是否入住");
    model->setHeaderData(5,Qt::Horizontal, "入住时间");
    model->setHeaderData(6,Qt::Horizontal, "团队");
    ui->room_table_view->setModel(model);
    ui->room_table_view->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->room_table_view->verticalHeader()->hide();

    QSqlQuery sqq(sql.db);
    sqq.exec("select level_price.level_name from level_price");
    ui->in_level_select->clear();
    while (sqq.next()) {
        ui->in_level_select->addItem(sqq.value(0).toString());
    }

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
    use[1] = true;
    ui->interface_->setCurrentIndex(1);
    updateDataTable();



    ui->interface_->setStyleSheet("QTabWidget::pane{top:-1px;}");

    //SetObjectSS(ui->room_tab,":/qss/widget");  // 全部置黑
    //SetObjectSS(ui->in_tab,":/qss/widget");
    //SetObjectSS(ui->out_tab,":/qss/widget");
    //(ui->reserve_tab,":/qss/widget");
    //SetObjectSS(ui->search_tab,":/qss/widget");
    //SetObjectSS(ui->export_tab,":/qss/widget");
    SetObjectSS(this,":/qss/widget");

    SetObjectSS(ui->room_button,":/qss/button");
    SetObjectSS(ui->in_button,":/qss/button_s");
    SetObjectSS(ui->out_button,":/qss/button");
    SetObjectSS(ui->reserve_button,":/qss/button");
    SetObjectSS(ui->search_button,":/qss/button");
    SetObjectSS(ui->export_button,":/qss/button");
    SetObjectSS(ui->setting_button,":/qss/button");

    SetLabelPic(ui->room_icon,"room");
    SetLabelPic(ui->in_icon,"in_s");
    SetLabelPic(ui->out_icon,"out");
    SetLabelPic(ui->re_icon,"re");
    SetLabelPic(ui->search_icon,"search");
    SetLabelPic(ui->export_icon,"export");
    SetLabelPic(ui->setting_icon,"setting");
    SetLabelPic(ui->author,"author");
    SetLabelPic(ui->excel_back,"icon/icon/excel-iocn.png");
    SetStatus(ui->room_status,false);
    SetStatus(ui->in_status,true);
    SetStatus(ui->out_status,false);
    SetStatus(ui->reserve_status,false);
    SetStatus(ui->search_status,false);
    SetStatus(ui->export_status,false);
    SetStatus(ui->setting_status_status,false);

    ui->interface_->tabBar()->hide();

    connect(ui->close,&ui->close->clicked,[this](){
        QPropertyAnimation *animation;
        animation = new QPropertyAnimation(this, "windowOpacity");
        animation->setDuration(500);
        animation->setStartValue(1);
        animation->setEndValue(0);
        animation->start();
        QTimer::singleShot(550,this,&this->close);
    });
    connect(ui->hide,&ui->hide->clicked,[this](){if( windowState() != Qt::WindowMinimized ){
            setWindowState( Qt::WindowMinimized );
        }});
    ui->search_out_text->setFocusPolicy(Qt::NoFocus);

    connect(ui->room_button,&ui->room_button->clicked,this,&this->room_button_click);
    connect(ui->in_button,&ui->in_button->clicked,this,&this->in_button_click);
    connect(ui->out_button,&ui->out_button->clicked,this,&this->out_button_click);
    connect(ui->reserve_button,&ui->reserve_button->clicked,this,&this->re_button_click);
    connect(ui->search_button,&ui->search_button->clicked,this,&this->search_button_click);
    connect(ui->export_button,&ui->export_button->clicked,this,&this->export_button_click);
    connect(ui->setting_button,&ui->setting_button->clicked,this,&this->setting_button_click);


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
    connect(ui->re_re,&ui->re_re->clicked,this,&re_re_click);
    connect(ui->re_confirm,&ui->re_confirm->clicked,this,&re_confirm_click);
    connect(ui->search_name,&ui->search_name->clicked,this,&search_name_click);
    connect(ui->search_id,&ui->search_id->clicked,this,&search_id_click);
    connect(ui->search_group,&ui->search_group->clicked,this,&search_group_click);
    connect(ui->export_export,&ui->export_export->clicked,this,&this->export_export);

    connect(ui->setting_button,&ui->setting_button->clicked,this,&this->update_com);
    setting_tab_button_setting();
}
// add check
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

void user_form::update_com()
{
    QSqlQuery sqq(sql.db);
    sqq.exec("select level_price.level_name from level_price");
    ui->setting_room_type->clear();
    ui->setting_room_select->clear();
    while (sqq.next()) {
        ui->setting_room_type->addItem(sqq.value(0).toString());
        ui->setting_room_select->addItem(sqq.value(0).toString());
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
    QSqlQuery sqq(sql.db);
    sqq.exec("select level_price.level_name from level_price");
    ui->in_level_select->clear();
    while (sqq.next()) {
        ui->in_level_select->addItem(sqq.value(0).toString());
    }
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

void user_form::setting_button_click(bool b)
{
    QInputDialog dia(0);
    dia.setTextEchoMode(QLineEdit::Password);
    dia.setCancelButtonText("取消");
    dia.setOkButtonText("确认");
    dia.setWindowFlags((Qt::FramelessWindowHint));//设置窗体无边框
    SetObjectSS(&dia,":/qss/input");
    dia.setWindowTitle("输入密码");
    dia.setLabelText("输入管理员密码");
    dia.setInputMode(QInputDialog::TextInput);

    if(dia.exec() == QInputDialog::Accepted)
    {
        qDebug() << dia.textValue();
        if(!IfPWDRight(dia.textValue(),QSqlQuery(sql.db),true))
            return;
    }
    else
    {
        return;
    }
    if(!translate(6))
        return;
    ui->interface_->setCurrentIndex(6);
}

bool user_form::translate(int to)
{
    int before;
    for (int i = 0;i != 7;i++)
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
    qq.exec("select room.id,level_price.level_name,people.people_name,people.id,live.date,people.[group] from people,live,room,level_price where people.id = live.people_id and room.id = live.room_id and level_price.level = room.level");
    while(qq.next())
    {
        QList<QStandardItem *> list;
        qDebug()<<qq.value(0).toString().trimmed() << qq.value(1).toString().trimmed()<< qq.value(2).toString().trimmed()<< qq.value(3).toString().trimmed();
        for(int i = 0;i < 4;i++)
        {
            list.append(new QStandardItem(qq.value(i).toString().trimmed()));
        }
        list.append(new QStandardItem("入住"));
        list.append(new QStandardItem(qq.value(4).toDate().toString("yyyy-MM-dd")));
        list.append(new QStandardItem(qq.value(5).toString().trimmed()));
        model->appendRow(list);
    }

    qq.exec("select room.id,level_price.level_name,people.people_name,people.id from room,reserve,people,level_price where  room.id = reserve.room_id and people.id = reserve.people_id and  level_price.level = room.level");
    while(qq.next())
    {
        QList<QStandardItem *> list;
        qDebug()<<qq.value(0).toString().trimmed() << qq.value(1).toString().trimmed()<< qq.value(2).toString().trimmed()<< qq.value(3).toString().trimmed();
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
        cmd = QString("update if_use set if_use = 1 from if_use where if_use.room_id = %1 insert into people values('%2','%3',%4,%5) insert into live values('%6',%7,'%8')").arg(
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
    qDebug() << cmd;
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
        QString id;
        qq.exec(QString("select live.date,live.people_id from live where live.people_id = '%1'").arg(ui->out_id_text->text()));
        if(!qq.next())
        {
            // TO SHOW no
            return;
        }
        else
        {
            before = qq.value(0).toDate();
            id= qq.value(1).toString().trimmed();
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
        cmd = "insert into money \
values('%1','%2','%3',%4)";
        cmd = cmd.arg(before.toString("yy-MM-dd"),QDate::currentDate().toString("yy-MM-dd"),id,money);
        qq.exec(cmd);
    }
    if(group_select)
    {
        QString group_name = ui->out_group_name_text->text();
        int money_together = 0;
        qq.exec(QString("select level_price.price,live.date,live.people_id from people,live,level_price,room where  people.[group] = '%1' and people.id = live.people_id and live.room_id = room.id and room.level = level_price.level").arg(ui->out_group_name_text->text()));
        while(qq.next())
        {
            money_together += qq.value(0).toInt() * (int)qq.value(1).toDate().daysTo(QDate::currentDate());
            int money = qq.value(0).toInt() * (int)qq.value(1).toDate().daysTo(QDate::currentDate());
            QString cmd = "insert into money \
                    values('%1','%2','%3',%4)";
                    QString money_ = QString::number(money);
            if (money == 0)
                money_ = "0";
            cmd = cmd.arg(qq.value(1).toDate().toString("yy-MM-dd"),QDate::currentDate().toString("yy-MM-dd"),qq.value(2).toString().trimmed(),money_);
            qDebug() << cmd;
            QSqlQuery qsq(sql.db);
            qsq.exec(cmd);
        }
        QString money_show;
        if (money_together == 0)
        {
            money_show = "共计0元";
        }
        else
        {
            money_show ="共计"+ money_show.number(money_together);
            money_show  += "元";
        }
        ui->out_money->setText(money_show);
        QString cmd("update if_use set if_use.if_use = 0 from if_use,live,people where if_use.room_id = live.room_id and  live.people_id = people.id and people.[group] = '%1'");
        cmd = cmd.arg(group_name);
        qq.exec(cmd);
        cmd = "delete from live where live.people_id in (select people.id from people where people.[group] = '%1')";
        cmd = cmd.arg(group_name);
        qq.exec(cmd);
        cmd = "delete from people where people.[group] = '%1'";
        cmd = cmd.arg(group_name);
        qq.exec(cmd);
    }
}

void user_form::re_re_click()
{
    QString name = ui->re_name_text->text();
    QString id = ui->re_id_text->text();
    QString phone = ui->re_phone->text();
    QString room = ui->re_room_text->text();
    QSqlQuery qq;
    QString check = QString("select if_use.if_use from if_use where if_use.room_id = %1").arg(room);
    qq.exec(check);
    qq.next();
    auto it_is = qq.value(0).toBool();  // 是否可以填入
    if(it_is)
    {
        // TODO show 满
        return;
    }
    QString cmd("insert into people values('%1','%2',0,NULL) insert into reserve values('%3',%4,'%5') update if_use set if_use.if_use = 1 where if_use.room_id = %6");
    cmd = cmd.arg(id,name,id,room,phone,room);
    qq.exec(cmd);
    // TODO SHOW success
}

void user_form::re_confirm_click()
{
    QString id = ui->re_id_confirm_text->text();
    QString check = QString("select people.people_name,reserve.room_id from reserve,people where reserve.people_id = '%1' and people.id = reserve.people_id").arg(id);
    QSqlQuery qq;
    qq.exec(check);
    if (!qq.next())
    {
        // TODO SHOW BAD
        return ;
    }
    QString room = qq.value(1).toString().trimmed();
    QString cmd = "delete from reserve where reserve.people_id = '%1' insert into live values('%2',%3,'%4')";
    cmd = cmd.arg(id,id,room,QDate::currentDate().toString("yy-MM-dd"));
    qDebug() << cmd;
    qq.exec(cmd);
}

void user_form::search_id_click()
{
    ui->search_out_text->clear();
    QString id = ui->search_id_text->text();
    QString cmd = "select *\
            from people\
            where people.id= '%1'";
            cmd = cmd.arg(id);
    qDebug() << cmd;
    QSqlQuery qq(sql.db);
    qq.exec(cmd);
    if (!qq.next())
    {
        return;
        // SHOW NO
    }
    QString output= "\n身份证:" +qq.value(0).toString().trimmed()+
            "\n姓名:" + qq.value(1).toString().trimmed();
    if (qq.value(2).toBool())
    {
        output += "\n组织:";
        output += qq.value(3).toString().trimmed();
    }
    ui->search_out_text->insertPlainText(output+"\n");
}

void user_form::search_name_click()
{
    ui->search_out_text->clear();
    QString name = ui->search_name_text->text();
    QString cmd =
            "select * \
            from people \
            where people.people_name= '%1'";
            cmd = cmd.arg(name);
    qDebug() << cmd;
    QSqlQuery qq(sql.db);
    qq.exec(cmd);
    if (!qq.next())
    {
        return;
        // SHOW NO
    }
    QString output= "\n身份证:" +qq.value(0).toString().trimmed()+
            "\n姓名:" + qq.value(1).toString().trimmed();
    if (qq.value(2).toBool())
    {
        output += "\n组织:";
        output += qq.value(3).toString().trimmed();
    }
    ui->search_out_text->insertPlainText(output+"\n");
}

void user_form::search_group_click()
{
    ui->search_out_text->clear();
    QString group = ui->search_group_text->text();
    QString cmd =
            "select * \
            from people \
            where people.[group]= '%1'";
            cmd = cmd.arg(group);
    qDebug() << cmd;
    QSqlQuery qq(sql.db);
    qq.exec(cmd);
    ui->search_out_text->insertPlainText("来自"+group + "的入住者有：");
    while (qq.next())
    {
        QString output= "\n身份证:" +qq.value(0).toString().trimmed()+
                "\n姓名:" + qq.value(1).toString().trimmed();
        ui->search_out_text->insertPlainText(output+"\n");
    }

}

void user_form::export_export()
{
    QString before;
    QString after;
    QString id;
    QString money;
    QSqlQuery qSqlQuery(sql.db);
    qSqlQuery.exec("select * from money");
    QAxObject excel("Excel.Application");//连接Excel控件
    excel.setProperty("Visible", false);// 不显示窗体
    excel.setProperty("DisplayAlerts", false);  // 不显示任何警告信息。如果为true, 那么关闭时会出现类似"文件已修改，是否保存"的提示
    QAxObject* workbooks = excel.querySubObject("WorkBooks"); // 获取工作簿集合
    workbooks->dynamicCall("Add"); // 新建一个工作簿
    QAxObject* workbook = excel.querySubObject("ActiveWorkBook"); // 获取当前工作簿
    QAxObject* worksheet = workbook->querySubObject("WorkSheets(int)", 1);
    auto set_cell = [worksheet](const QString& h,int s,QString data)
    {
        QString place;
        if (s == 0)
            place = h+"0";
        else
        {
            place = h+QString::number(s);
        }
        QAxObject *range2 = worksheet->querySubObject("Range(QString)", place);
        range2->setProperty("Value", data);
    };

    int i = 1;
    set_cell("A",i,"入住时间");
    set_cell("B",i,"离开时间");
    set_cell("C",i,"身份证");
    set_cell("D",i,"开销");
    while(qSqlQuery.next())
    {
        i++;
        before = qSqlQuery.value(0).toDate().toString("yy-MM-dd").trimmed();
        after = qSqlQuery.value(1).toDate().toString("yy-MM-dd").trimmed();
        id = qSqlQuery.value(2).toString().trimmed();
        money = qSqlQuery.value(3).toString().trimmed();
        set_cell("A",i,before);
        set_cell("B",i,after);
        set_cell("C",i,id);
        set_cell("D",i,money);
    }
    QString fileName = QFileDialog::getSaveFileName(NULL, QStringLiteral("保存文件"), QStringLiteral("excel名称"), QStringLiteral("EXCEL(*.xlsx)"));
    //QString fileName=QStringLiteral("C:/Users/lixc/Desktop/excel名称.xlsx");
    workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(fileName)); //保存到filepath
    workbook->dynamicCall("Close (Boolean)", false);  //关闭文件
            excel.dynamicCall("Quit(void)");  //退出
}

void user_form::setting_tab_button_setting()
{
    auto setting_pwd = [=](const QString & pwd,bool admin)  // false 则该user密码
    {
        QString hash = QCryptographicHash::hash(pwd.toLatin1(),QCryptographicHash::Sha256).toHex();
        QString cmd =  "update pass_word \
set pwd_hash = '%1' \
where pass_word.level = %2";
        QSqlQuery qq(sql.db);
        QString level;
        if (admin)
            level = "1";
        else
            level = "0";
        cmd = cmd.arg(hash,level);
        qDebug() << cmd;
        qq.exec(cmd);
    };
    connect(ui->setting_user_but,&ui->setting_user_but->clicked,[=]
    {
        setting_pwd(ui->setting_user_text->text(),false);
    });
    connect(ui->setting_admin_but,&ui->setting_admin_but->clicked,[=]
    {
        setting_pwd(ui->setting_admin_text->text(),true);
    });
    connect(ui->setting_room_type_but,&ui->setting_room_type_but->clicked,[=]
    {
        QSqlQuery qq(sql.db);
        int level = ui->setting_room_type->currentIndex() + 1;
        QString id = ui->setting_room_id_text->text();
        QString cmd = "update room \
set level = %1 \
where id = %2";
        cmd = cmd.arg(QString::number(level),id);
        qDebug() << cmd;
        qq.exec(cmd);
    });
    connect(ui->setting_confirm_text,&ui->setting_confirm_text->clicked,[=]
    {
        QSqlQuery qq(sql.db);
        QString type = ui->setting_add_room_type_text->text();
        QString price = ui->setting_room_price_text->text();
        int level = ui->setting_room_select->currentIndex() + 1;
        bool if_select = ui->setting_select_radio->isChecked();
        bool if_name = ui->setting_type_radio->isChecked();
        if (if_name)
        {
            qq.exec("select * \
                    from \
                    level_price");
            int n = 0;
            while (qq.next())
            {
                n++;
            }
            n++;
            QString cmd =
            "insert into level_price \
values(%1,%2,'%3')";
            cmd = cmd.arg(QString::number(n),price,type);
            qq.exec(cmd);
        }
        else
        {
            QString cmd ="update level_price \
set price = %1 \
where level = %2";
            cmd = cmd.arg(price,QString::number(level));
            qq.exec(cmd);
        }

        update_com();
        ui->setting_room_select->setCurrentIndex(level - 1);
    });
    connect(ui->setting_type_radio,&ui->setting_type_radio->toggled,[=](bool b)
    {
        ui->setting_room_select->setEnabled(!b);
    });
    connect(ui->setting_select_radio,&ui->setting_select_radio->toggled,[=](bool b)
    {
        ui->setting_add_room_type_text->setEnabled(!b);
    });
}


