/********************************************************************************
** Form generated from reading UI file 'user_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_FORM_H
#define UI_USER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_form
{
public:
    QTabWidget *interface_;
    QWidget *room_tab;
    QTableView *room_table_view;
    QWidget *in_tab;
    QRadioButton *in_roomId_radio;
    QLineEdit *in_roomId_text;
    QComboBox *in_level_select;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *in_id_input;
    QLineEdit *in_name_text;
    QPushButton *in_in;
    QRadioButton *in_group_radio;
    QLineEdit *in_group_text;
    QWidget *out_tab;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *out_out;
    QLineEdit *out_group_name_text;
    QLineEdit *out_id_text;
    QRadioButton *out_group_radio;
    QRadioButton *out_people_radio;
    QGroupBox *groupBox;
    QLabel *out_money;
    QWidget *reserve_tab;
    QPushButton *re_re;
    QLineEdit *re_id_text;
    QLineEdit *re_name_text;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_14;
    QLineEdit *re_phone;
    QLineEdit *re_room_text;
    QLabel *label_15;
    QPushButton *re_confirm;
    QFrame *line;
    QLabel *label_16;
    QLineEdit *re_id_confirm_text;
    QWidget *search_tab;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *search_id_text;
    QLineEdit *search_name_text;
    QLineEdit *search_group_text;
    QPushButton *search_id;
    QPushButton *search_name;
    QPushButton *search_group;
    QTextEdit *search_out_text;
    QWidget *export_tab;
    QPushButton *export_export;
    QLabel *excel_back;
    QWidget *setting_tab;
    QLineEdit *setting_user_text;
    QPushButton *setting_user_but;
    QLineEdit *setting_admin_text;
    QLabel *label_17;
    QLabel *label_13;
    QPushButton *setting_admin_but;
    QLineEdit *setting_add_room_type_text;
    QLabel *label_19;
    QLineEdit *setting_room_price_text;
    QPushButton *setting_confirm_text;
    QPushButton *setting_room_type_but;
    QLineEdit *setting_room_id_text;
    QLabel *label_20;
    QLabel *label_21;
    QComboBox *setting_room_type;
    QRadioButton *setting_type_radio;
    QRadioButton *setting_select_radio;
    QComboBox *setting_room_select;
    QPushButton *close;
    QPushButton *hide;
    QLabel *back;
    QLabel *room_status;
    QPushButton *room_button;
    QLabel *search_status;
    QPushButton *search_button;
    QLabel *reserve_status;
    QPushButton *reserve_button;
    QLabel *out_status;
    QPushButton *out_button;
    QPushButton *export_button;
    QLabel *export_status;
    QLabel *in_status;
    QPushButton *in_button;
    QLabel *room_icon;
    QLabel *in_icon;
    QLabel *out_icon;
    QLabel *re_icon;
    QLabel *search_icon;
    QLabel *export_icon;
    QLabel *tip;
    QLabel *author;
    QPushButton *setting_button;
    QLabel *setting_icon;
    QLabel *setting_status_status;

    void setupUi(QWidget *user_form)
    {
        if (user_form->objectName().isEmpty())
            user_form->setObjectName(QStringLiteral("user_form"));
        user_form->resize(772, 462);
        user_form->setStyleSheet(QStringLiteral(""));
        interface_ = new QTabWidget(user_form);
        interface_->setObjectName(QStringLiteral("interface_"));
        interface_->setGeometry(QRect(170, 20, 581, 421));
        interface_->setStyleSheet(QStringLiteral(""));
        room_tab = new QWidget();
        room_tab->setObjectName(QStringLiteral("room_tab"));
        room_table_view = new QTableView(room_tab);
        room_table_view->setObjectName(QStringLiteral("room_table_view"));
        room_table_view->setGeometry(QRect(0, 10, 571, 381));
        room_table_view->setAutoFillBackground(true);
        interface_->addTab(room_tab, QString());
        in_tab = new QWidget();
        in_tab->setObjectName(QStringLiteral("in_tab"));
        in_roomId_radio = new QRadioButton(in_tab);
        in_roomId_radio->setObjectName(QStringLiteral("in_roomId_radio"));
        in_roomId_radio->setGeometry(QRect(40, 30, 151, 51));
        in_roomId_radio->setAutoExclusive(false);
        in_roomId_text = new QLineEdit(in_tab);
        in_roomId_text->setObjectName(QStringLiteral("in_roomId_text"));
        in_roomId_text->setEnabled(false);
        in_roomId_text->setGeometry(QRect(220, 30, 271, 41));
        in_level_select = new QComboBox(in_tab);
        in_level_select->setObjectName(QStringLiteral("in_level_select"));
        in_level_select->setGeometry(QRect(220, 100, 271, 40));
        label_2 = new QLabel(in_tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 121, 40));
        label_3 = new QLabel(in_tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 160, 141, 41));
        label_4 = new QLabel(in_tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 220, 72, 41));
        in_id_input = new QLineEdit(in_tab);
        in_id_input->setObjectName(QStringLiteral("in_id_input"));
        in_id_input->setEnabled(true);
        in_id_input->setGeometry(QRect(220, 160, 271, 41));
        in_id_input->setStyleSheet(QStringLiteral(""));
        in_name_text = new QLineEdit(in_tab);
        in_name_text->setObjectName(QStringLiteral("in_name_text"));
        in_name_text->setEnabled(true);
        in_name_text->setGeometry(QRect(220, 220, 271, 41));
        in_in = new QPushButton(in_tab);
        in_in->setObjectName(QStringLiteral("in_in"));
        in_in->setGeometry(QRect(170, 340, 150, 40));
        in_group_radio = new QRadioButton(in_tab);
        in_group_radio->setObjectName(QStringLiteral("in_group_radio"));
        in_group_radio->setGeometry(QRect(30, 290, 151, 41));
        in_group_radio->setAutoExclusive(false);
        in_group_text = new QLineEdit(in_tab);
        in_group_text->setObjectName(QStringLiteral("in_group_text"));
        in_group_text->setEnabled(false);
        in_group_text->setGeometry(QRect(220, 290, 271, 41));
        interface_->addTab(in_tab, QString());
        out_tab = new QWidget();
        out_tab->setObjectName(QStringLiteral("out_tab"));
        out_tab->setStyleSheet(QStringLiteral(""));
        label_11 = new QLabel(out_tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 110, 72, 21));
        label_12 = new QLabel(out_tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 210, 72, 21));
        out_out = new QPushButton(out_tab);
        out_out->setObjectName(QStringLiteral("out_out"));
        out_out->setGeometry(QRect(130, 300, 150, 40));
        out_group_name_text = new QLineEdit(out_tab);
        out_group_name_text->setObjectName(QStringLiteral("out_group_name_text"));
        out_group_name_text->setEnabled(false);
        out_group_name_text->setGeometry(QRect(90, 100, 221, 41));
        out_id_text = new QLineEdit(out_tab);
        out_id_text->setObjectName(QStringLiteral("out_id_text"));
        out_id_text->setGeometry(QRect(90, 200, 221, 41));
        out_group_radio = new QRadioButton(out_tab);
        out_group_radio->setObjectName(QStringLiteral("out_group_radio"));
        out_group_radio->setGeometry(QRect(140, 60, 115, 31));
        out_people_radio = new QRadioButton(out_tab);
        out_people_radio->setObjectName(QStringLiteral("out_people_radio"));
        out_people_radio->setGeometry(QRect(140, 160, 115, 31));
        out_people_radio->setAutoFillBackground(false);
        out_people_radio->setChecked(true);
        out_people_radio->setAutoExclusive(true);
        groupBox = new QGroupBox(out_tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(340, 60, 221, 301));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"border: 2px solid #409eff;\n"
"border-radius: 5px;\n"
"margin-top: 1ex; \n"
"\n"
"font:blod 14px;\n"
"color:white;\n"
"}\n"
"QGroupBox::title {\n"
"subcontrol-origin: margin;\n"
"subcontrol-position: top center;\n"
"padding: 0 3px;\n"
"font: \345\271\274\345\234\206;\n"
"}"));
        out_money = new QLabel(groupBox);
        out_money->setObjectName(QStringLiteral("out_money"));
        out_money->setGeometry(QRect(0, 60, 201, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        out_money->setFont(font);
        out_money->setStyleSheet(QString::fromUtf8("color:red;\n"
"font: 20pt \"\345\271\274\345\234\206\";"));
        interface_->addTab(out_tab, QString());
        groupBox->raise();
        label_11->raise();
        label_12->raise();
        out_out->raise();
        out_group_name_text->raise();
        out_id_text->raise();
        out_group_radio->raise();
        out_people_radio->raise();
        reserve_tab = new QWidget();
        reserve_tab->setObjectName(QStringLiteral("reserve_tab"));
        re_re = new QPushButton(reserve_tab);
        re_re->setObjectName(QStringLiteral("re_re"));
        re_re->setGeometry(QRect(70, 320, 150, 40));
        re_id_text = new QLineEdit(reserve_tab);
        re_id_text->setObjectName(QStringLiteral("re_id_text"));
        re_id_text->setGeometry(QRect(40, 50, 211, 41));
        re_name_text = new QLineEdit(reserve_tab);
        re_name_text->setObjectName(QStringLiteral("re_name_text"));
        re_name_text->setGeometry(QRect(40, 120, 211, 41));
        label = new QLabel(reserve_tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 24, 81, 21));
        label_8 = new QLabel(reserve_tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 94, 71, 21));
        label_14 = new QLabel(reserve_tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 234, 81, 21));
        re_phone = new QLineEdit(reserve_tab);
        re_phone->setObjectName(QStringLiteral("re_phone"));
        re_phone->setGeometry(QRect(40, 260, 211, 41));
        re_room_text = new QLineEdit(reserve_tab);
        re_room_text->setObjectName(QStringLiteral("re_room_text"));
        re_room_text->setGeometry(QRect(40, 190, 211, 41));
        label_15 = new QLabel(reserve_tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 165, 81, 20));
        label_15->setStyleSheet(QStringLiteral(""));
        re_confirm = new QPushButton(reserve_tab);
        re_confirm->setObjectName(QStringLiteral("re_confirm"));
        re_confirm->setGeometry(QRect(370, 320, 150, 40));
        line = new QFrame(reserve_tab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(280, 20, 16, 351));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(reserve_tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(340, 115, 81, 20));
        re_id_confirm_text = new QLineEdit(reserve_tab);
        re_id_confirm_text->setObjectName(QStringLiteral("re_id_confirm_text"));
        re_id_confirm_text->setGeometry(QRect(340, 150, 211, 41));
        interface_->addTab(reserve_tab, QString());
        search_tab = new QWidget();
        search_tab->setObjectName(QStringLiteral("search_tab"));
        label_5 = new QLabel(search_tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 72, 20));
        label_6 = new QLabel(search_tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 160, 81, 21));
        label_7 = new QLabel(search_tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 290, 81, 21));
        search_id_text = new QLineEdit(search_tab);
        search_id_text->setObjectName(QStringLiteral("search_id_text"));
        search_id_text->setGeometry(QRect(102, 40, 201, 41));
        search_name_text = new QLineEdit(search_tab);
        search_name_text->setObjectName(QStringLiteral("search_name_text"));
        search_name_text->setGeometry(QRect(100, 150, 201, 41));
        search_group_text = new QLineEdit(search_tab);
        search_group_text->setObjectName(QStringLiteral("search_group_text"));
        search_group_text->setGeometry(QRect(102, 280, 201, 41));
        search_id = new QPushButton(search_tab);
        search_id->setObjectName(QStringLiteral("search_id"));
        search_id->setGeometry(QRect(130, 100, 150, 40));
        search_name = new QPushButton(search_tab);
        search_name->setObjectName(QStringLiteral("search_name"));
        search_name->setGeometry(QRect(130, 210, 150, 40));
        search_group = new QPushButton(search_tab);
        search_group->setObjectName(QStringLiteral("search_group"));
        search_group->setGeometry(QRect(130, 330, 150, 40));
        search_out_text = new QTextEdit(search_tab);
        search_out_text->setObjectName(QStringLiteral("search_out_text"));
        search_out_text->setGeometry(QRect(320, 30, 231, 341));
        interface_->addTab(search_tab, QString());
        export_tab = new QWidget();
        export_tab->setObjectName(QStringLiteral("export_tab"));
        export_export = new QPushButton(export_tab);
        export_export->setObjectName(QStringLiteral("export_export"));
        export_export->setGeometry(QRect(190, 310, 200, 41));
        excel_back = new QLabel(export_tab);
        excel_back->setObjectName(QStringLiteral("excel_back"));
        excel_back->setGeometry(QRect(180, 50, 200, 200));
        interface_->addTab(export_tab, QString());
        setting_tab = new QWidget();
        setting_tab->setObjectName(QStringLiteral("setting_tab"));
        setting_tab->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"    border-width:3px;\n"
"    border-radius:15px;\n"
"    border-style:outset;\n"
"    font-size:20px;\n"
"    color:black;\n"
"    border:2px solid gray;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"    border-width:3px;\n"
"    border-radius:15px;\n"
"    border-style:outset;\n"
"    font-size:20px;\n"
"    color:black;\n"
"    border:2px solid #409eff;\n"
"}"));
        setting_user_text = new QLineEdit(setting_tab);
        setting_user_text->setObjectName(QStringLiteral("setting_user_text"));
        setting_user_text->setGeometry(QRect(60, 20, 201, 31));
        setting_user_but = new QPushButton(setting_tab);
        setting_user_but->setObjectName(QStringLiteral("setting_user_but"));
        setting_user_but->setGeometry(QRect(100, 70, 131, 31));
        setting_admin_text = new QLineEdit(setting_tab);
        setting_admin_text->setObjectName(QStringLiteral("setting_admin_text"));
        setting_admin_text->setGeometry(QRect(60, 120, 201, 31));
        label_17 = new QLabel(setting_tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 110, 121, 40));
        label_13 = new QLabel(setting_tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 20, 101, 21));
        setting_admin_but = new QPushButton(setting_tab);
        setting_admin_but->setObjectName(QStringLiteral("setting_admin_but"));
        setting_admin_but->setGeometry(QRect(100, 170, 131, 31));
        setting_add_room_type_text = new QLineEdit(setting_tab);
        setting_add_room_type_text->setObjectName(QStringLiteral("setting_add_room_type_text"));
        setting_add_room_type_text->setGeometry(QRect(0, 270, 171, 31));
        label_19 = new QLabel(setting_tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(390, 230, 101, 31));
        setting_room_price_text = new QLineEdit(setting_tab);
        setting_room_price_text->setObjectName(QStringLiteral("setting_room_price_text"));
        setting_room_price_text->setGeometry(QRect(390, 270, 171, 31));
        setting_confirm_text = new QPushButton(setting_tab);
        setting_confirm_text->setObjectName(QStringLiteral("setting_confirm_text"));
        setting_confirm_text->setGeometry(QRect(150, 330, 261, 31));
        setting_room_type_but = new QPushButton(setting_tab);
        setting_room_type_but->setObjectName(QStringLiteral("setting_room_type_but"));
        setting_room_type_but->setGeometry(QRect(390, 170, 141, 31));
        setting_room_id_text = new QLineEdit(setting_tab);
        setting_room_id_text->setObjectName(QStringLiteral("setting_room_id_text"));
        setting_room_id_text->setGeometry(QRect(360, 20, 201, 31));
        label_20 = new QLabel(setting_tab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(270, 20, 101, 31));
        label_21 = new QLabel(setting_tab);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(270, 120, 101, 31));
        setting_room_type = new QComboBox(setting_tab);
        setting_room_type->setObjectName(QStringLiteral("setting_room_type"));
        setting_room_type->setGeometry(QRect(360, 120, 201, 31));
        setting_type_radio = new QRadioButton(setting_tab);
        setting_type_radio->setObjectName(QStringLiteral("setting_type_radio"));
        setting_type_radio->setGeometry(QRect(0, 240, 151, 21));
        setting_type_radio->setChecked(true);
        setting_select_radio = new QRadioButton(setting_tab);
        setting_select_radio->setObjectName(QStringLiteral("setting_select_radio"));
        setting_select_radio->setGeometry(QRect(190, 240, 161, 21));
        setting_room_select = new QComboBox(setting_tab);
        setting_room_select->setObjectName(QStringLiteral("setting_room_select"));
        setting_room_select->setEnabled(false);
        setting_room_select->setGeometry(QRect(180, 270, 201, 31));
        interface_->addTab(setting_tab, QString());
        close = new QPushButton(user_form);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(720, 0, 31, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        close->setFont(font1);
        close->setStyleSheet(QStringLiteral("font: 9pt \"Consolas\";"));
        hide = new QPushButton(user_form);
        hide->setObjectName(QStringLiteral("hide"));
        hide->setGeometry(QRect(690, 0, 31, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        hide->setFont(font2);
        back = new QLabel(user_form);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(0, 0, 771, 461));
        room_status = new QLabel(user_form);
        room_status->setObjectName(QStringLiteral("room_status"));
        room_status->setGeometry(QRect(150, 30, 5, 30));
        room_status->setStyleSheet(QStringLiteral(""));
        room_button = new QPushButton(user_form);
        room_button->setObjectName(QStringLiteral("room_button"));
        room_button->setGeometry(QRect(50, 25, 93, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        room_button->setFont(font3);
        room_button->setCursor(QCursor(Qt::PointingHandCursor));
        search_status = new QLabel(user_form);
        search_status->setObjectName(QStringLiteral("search_status"));
        search_status->setGeometry(QRect(150, 270, 5, 30));
        search_button = new QPushButton(user_form);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(51, 265, 93, 40));
        search_button->setFont(font3);
        search_button->setCursor(QCursor(Qt::PointingHandCursor));
        reserve_status = new QLabel(user_form);
        reserve_status->setObjectName(QStringLiteral("reserve_status"));
        reserve_status->setGeometry(QRect(150, 210, 5, 30));
        reserve_button = new QPushButton(user_form);
        reserve_button->setObjectName(QStringLiteral("reserve_button"));
        reserve_button->setGeometry(QRect(50, 205, 93, 40));
        reserve_button->setFont(font3);
        reserve_button->setCursor(QCursor(Qt::PointingHandCursor));
        out_status = new QLabel(user_form);
        out_status->setObjectName(QStringLiteral("out_status"));
        out_status->setGeometry(QRect(150, 150, 5, 30));
        out_button = new QPushButton(user_form);
        out_button->setObjectName(QStringLiteral("out_button"));
        out_button->setGeometry(QRect(51, 145, 93, 40));
        out_button->setFont(font3);
        out_button->setCursor(QCursor(Qt::PointingHandCursor));
        export_button = new QPushButton(user_form);
        export_button->setObjectName(QStringLiteral("export_button"));
        export_button->setGeometry(QRect(51, 325, 93, 41));
        export_button->setFont(font3);
        export_button->setCursor(QCursor(Qt::PointingHandCursor));
        export_status = new QLabel(user_form);
        export_status->setObjectName(QStringLiteral("export_status"));
        export_status->setGeometry(QRect(150, 330, 5, 30));
        in_status = new QLabel(user_form);
        in_status->setObjectName(QStringLiteral("in_status"));
        in_status->setGeometry(QRect(150, 90, 5, 30));
        in_button = new QPushButton(user_form);
        in_button->setObjectName(QStringLiteral("in_button"));
        in_button->setGeometry(QRect(50, 85, 93, 40));
        in_button->setFont(font3);
        in_button->setCursor(QCursor(Qt::PointingHandCursor));
        room_icon = new QLabel(user_form);
        room_icon->setObjectName(QStringLiteral("room_icon"));
        room_icon->setGeometry(QRect(30, 30, 30, 30));
        in_icon = new QLabel(user_form);
        in_icon->setObjectName(QStringLiteral("in_icon"));
        in_icon->setGeometry(QRect(30, 90, 30, 30));
        out_icon = new QLabel(user_form);
        out_icon->setObjectName(QStringLiteral("out_icon"));
        out_icon->setGeometry(QRect(31, 150, 30, 30));
        re_icon = new QLabel(user_form);
        re_icon->setObjectName(QStringLiteral("re_icon"));
        re_icon->setGeometry(QRect(30, 210, 30, 30));
        search_icon = new QLabel(user_form);
        search_icon->setObjectName(QStringLiteral("search_icon"));
        search_icon->setGeometry(QRect(31, 270, 30, 30));
        export_icon = new QLabel(user_form);
        export_icon->setObjectName(QStringLiteral("export_icon"));
        export_icon->setGeometry(QRect(31, 330, 30, 30));
        tip = new QLabel(user_form);
        tip->setObjectName(QStringLiteral("tip"));
        tip->setGeometry(QRect(320, 0, 151, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font4.setPointSize(10);
        tip->setFont(font4);
        tip->setStyleSheet(QStringLiteral(""));
        author = new QLabel(user_form);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(10, 430, 20, 20));
        setting_button = new QPushButton(user_form);
        setting_button->setObjectName(QStringLiteral("setting_button"));
        setting_button->setGeometry(QRect(51, 385, 93, 41));
        setting_button->setFont(font3);
        setting_button->setCursor(QCursor(Qt::PointingHandCursor));
        setting_icon = new QLabel(user_form);
        setting_icon->setObjectName(QStringLiteral("setting_icon"));
        setting_icon->setGeometry(QRect(31, 390, 30, 30));
        setting_status_status = new QLabel(user_form);
        setting_status_status->setObjectName(QStringLiteral("setting_status_status"));
        setting_status_status->setGeometry(QRect(150, 390, 5, 30));
        back->raise();
        interface_->raise();
        hide->raise();
        close->raise();
        room_button->raise();
        search_button->raise();
        reserve_button->raise();
        out_button->raise();
        export_button->raise();
        in_button->raise();
        room_icon->raise();
        in_icon->raise();
        out_icon->raise();
        re_icon->raise();
        search_icon->raise();
        export_icon->raise();
        room_status->raise();
        in_status->raise();
        out_status->raise();
        reserve_status->raise();
        search_status->raise();
        export_status->raise();
        tip->raise();
        author->raise();
        setting_button->raise();
        setting_icon->raise();
        setting_status_status->raise();

        retranslateUi(user_form);

        interface_->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(user_form);
    } // setupUi

    void retranslateUi(QWidget *user_form)
    {
        user_form->setWindowTitle(QApplication::translate("user_form", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(room_tab), QApplication::translate("user_form", "\346\210\277\351\227\264", Q_NULLPTR));
        in_roomId_radio->setText(QApplication::translate("user_form", "\346\230\257\345\220\246\346\214\207\345\256\232\n"
"\346\210\277\351\227\264\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_form", "\346\210\277\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("user_form", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("user_form", "\345\247\223\345\220\215", Q_NULLPTR));
        in_in->setText(QApplication::translate("user_form", "\347\231\273\345\275\225", Q_NULLPTR));
        in_group_radio->setText(QApplication::translate("user_form", "\346\230\257\345\220\246\345\233\242\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        in_group_text->setToolTip(QApplication::translate("user_form", "<html><head/><body><p>\345\233\242\344\275\223\345\220\215</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        interface_->setTabText(interface_->indexOf(in_tab), QApplication::translate("user_form", "\347\231\273\350\256\260", Q_NULLPTR));
        label_11->setText(QApplication::translate("user_form", "\345\233\242\351\230\237\345\220\215", Q_NULLPTR));
        label_12->setText(QApplication::translate("user_form", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        out_out->setText(QApplication::translate("user_form", "\351\200\200\346\210\277", Q_NULLPTR));
        out_group_radio->setText(QApplication::translate("user_form", "\345\233\242\344\275\223\351\200\200\346\210\277", Q_NULLPTR));
        out_people_radio->setText(QApplication::translate("user_form", "\344\270\252\344\272\272\351\200\200\346\210\277", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("user_form", "\345\272\224\351\200\200\351\207\221\351\242\235", Q_NULLPTR));
        out_money->setText(QString());
        interface_->setTabText(interface_->indexOf(out_tab), QApplication::translate("user_form", "\351\200\200\346\210\277", Q_NULLPTR));
        re_re->setText(QApplication::translate("user_form", "\351\242\204\347\272\246", Q_NULLPTR));
        label->setText(QApplication::translate("user_form", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("user_form", "\345\247\223\345\220\215", Q_NULLPTR));
        label_14->setText(QApplication::translate("user_form", "\347\224\265\350\257\235", Q_NULLPTR));
        label_15->setText(QApplication::translate("user_form", "\346\210\277\351\227\264\345\217\267", Q_NULLPTR));
        re_confirm->setText(QApplication::translate("user_form", "\351\242\204\347\272\246\350\200\205\346\212\265\350\276\276", Q_NULLPTR));
        label_16->setText(QApplication::translate("user_form", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(reserve_tab), QApplication::translate("user_form", "\351\242\204\347\272\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("user_form", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("user_form", "\345\247\223\345\220\215", Q_NULLPTR));
        label_7->setText(QApplication::translate("user_form", "\345\233\242\351\230\237", Q_NULLPTR));
        search_id->setText(QApplication::translate("user_form", "\346\237\245\350\257\242", Q_NULLPTR));
        search_name->setText(QApplication::translate("user_form", "\346\237\245\350\257\242", Q_NULLPTR));
        search_group->setText(QApplication::translate("user_form", "\346\237\245\350\257\242", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(search_tab), QApplication::translate("user_form", "\346\237\245\350\257\242", Q_NULLPTR));
        export_export->setText(QApplication::translate("user_form", "\344\270\200\351\224\256\345\257\274\345\207\272\346\265\201\346\260\264", Q_NULLPTR));
        excel_back->setText(QString());
        interface_->setTabText(interface_->indexOf(export_tab), QApplication::translate("user_form", "\345\257\274\345\207\272", Q_NULLPTR));
        setting_user_but->setText(QApplication::translate("user_form", "\346\224\271\345\217\230\345\257\206\347\240\201", Q_NULLPTR));
        label_17->setText(QApplication::translate("user_form", "admin", Q_NULLPTR));
        label_13->setText(QApplication::translate("user_form", "user", Q_NULLPTR));
        setting_admin_but->setText(QApplication::translate("user_form", "\346\224\271\345\217\230\345\257\206\347\240\201", Q_NULLPTR));
        label_19->setText(QApplication::translate("user_form", "\344\273\267\346\240\274", Q_NULLPTR));
        setting_confirm_text->setText(QApplication::translate("user_form", "\347\241\256\350\256\244", Q_NULLPTR));
        setting_room_type_but->setText(QApplication::translate("user_form", "\346\224\271\345\217\230\346\210\277\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        label_20->setText(QApplication::translate("user_form", "\346\210\277\345\217\267", Q_NULLPTR));
        label_21->setText(QApplication::translate("user_form", "\346\210\277\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        setting_type_radio->setText(QApplication::translate("user_form", "\346\267\273\345\212\240\346\210\277\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        setting_select_radio->setText(QApplication::translate("user_form", "\344\277\256\346\224\271\346\210\277\351\227\264\344\273\267\346\240\274", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(setting_tab), QApplication::translate("user_form", "\350\256\276\347\275\256", Q_NULLPTR));
        close->setText(QApplication::translate("user_form", "\303\227", Q_NULLPTR));
        hide->setText(QApplication::translate("user_form", "-", Q_NULLPTR));
        back->setText(QString());
        room_status->setText(QString());
        room_button->setText(QApplication::translate("user_form", "\346\210\277\351\227\264", Q_NULLPTR));
        search_status->setText(QString());
        search_button->setText(QApplication::translate("user_form", "\346\237\245\350\257\242", Q_NULLPTR));
        reserve_status->setText(QString());
        reserve_button->setText(QApplication::translate("user_form", "\351\242\204\347\272\246", Q_NULLPTR));
        out_status->setText(QString());
        out_button->setText(QApplication::translate("user_form", "\351\200\200\346\210\277", Q_NULLPTR));
        export_button->setText(QApplication::translate("user_form", "\345\257\274\345\207\272", Q_NULLPTR));
        export_status->setText(QString());
        in_status->setText(QString());
        in_button->setText(QApplication::translate("user_form", "\347\231\273\350\256\260", Q_NULLPTR));
        room_icon->setText(QString());
        in_icon->setText(QString());
        out_icon->setText(QString());
        re_icon->setText(QString());
        search_icon->setText(QString());
        export_icon->setText(QString());
        tip->setText(QApplication::translate("user_form", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\2371.1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        author->setToolTip(QApplication::translate("user_form", "<html><head/><body><p>\344\275\234\350\200\205\357\274\232</p><p>\346\226\271\345\256\266\345\275\246(mian/intmian)</p><p>\351\231\210\344\272\246\350\261\252</p><p>\347\237\245\350\257\206\345\205\261\344\272\253\345\215\217\350\256\256:</p><p>MIT \345\274\200\346\272\220\344\272\216GITHUB</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        author->setText(QString());
        setting_button->setText(QApplication::translate("user_form", "\350\256\276\347\275\256", Q_NULLPTR));
        setting_icon->setText(QString());
        setting_status_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_form: public Ui_user_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FORM_H
