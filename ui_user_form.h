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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
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
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QWidget *reserve_tab;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_8;
    QWidget *search_tab;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *export_tab;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLabel *label_10;
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

    void setupUi(QWidget *user_form)
    {
        if (user_form->objectName().isEmpty())
            user_form->setObjectName(QStringLiteral("user_form"));
        user_form->resize(772, 462);
        user_form->setStyleSheet(QStringLiteral(""));
        interface_ = new QTabWidget(user_form);
        interface_->setObjectName(QStringLiteral("interface_"));
        interface_->setGeometry(QRect(170, 30, 581, 421));
        room_tab = new QWidget();
        room_tab->setObjectName(QStringLiteral("room_tab"));
        room_table_view = new QTableView(room_tab);
        room_table_view->setObjectName(QStringLiteral("room_table_view"));
        room_table_view->setGeometry(QRect(80, 10, 461, 371));
        room_table_view->setAutoFillBackground(true);
        interface_->addTab(room_tab, QString());
        in_tab = new QWidget();
        in_tab->setObjectName(QStringLiteral("in_tab"));
        in_roomId_radio = new QRadioButton(in_tab);
        in_roomId_radio->setObjectName(QStringLiteral("in_roomId_radio"));
        in_roomId_radio->setGeometry(QRect(40, 50, 151, 31));
        in_roomId_radio->setAutoExclusive(false);
        in_roomId_text = new QLineEdit(in_tab);
        in_roomId_text->setObjectName(QStringLiteral("in_roomId_text"));
        in_roomId_text->setEnabled(false);
        in_roomId_text->setGeometry(QRect(220, 40, 271, 41));
        in_level_select = new QComboBox(in_tab);
        in_level_select->setObjectName(QStringLiteral("in_level_select"));
        in_level_select->setGeometry(QRect(220, 110, 271, 41));
        label_2 = new QLabel(in_tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 120, 121, 21));
        label_3 = new QLabel(in_tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 190, 141, 21));
        label_4 = new QLabel(in_tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 260, 72, 15));
        in_id_input = new QLineEdit(in_tab);
        in_id_input->setObjectName(QStringLiteral("in_id_input"));
        in_id_input->setEnabled(true);
        in_id_input->setGeometry(QRect(220, 180, 271, 41));
        in_id_input->setStyleSheet(QStringLiteral(""));
        in_name_text = new QLineEdit(in_tab);
        in_name_text->setObjectName(QStringLiteral("in_name_text"));
        in_name_text->setEnabled(true);
        in_name_text->setGeometry(QRect(220, 240, 271, 41));
        in_in = new QPushButton(in_tab);
        in_in->setObjectName(QStringLiteral("in_in"));
        in_in->setGeometry(QRect(80, 340, 391, 51));
        in_group_radio = new QRadioButton(in_tab);
        in_group_radio->setObjectName(QStringLiteral("in_group_radio"));
        in_group_radio->setGeometry(QRect(30, 300, 151, 31));
        in_group_radio->setAutoExclusive(false);
        in_group_text = new QLineEdit(in_tab);
        in_group_text->setObjectName(QStringLiteral("in_group_text"));
        in_group_text->setEnabled(false);
        in_group_text->setGeometry(QRect(220, 290, 271, 41));
        interface_->addTab(in_tab, QString());
        out_tab = new QWidget();
        out_tab->setObjectName(QStringLiteral("out_tab"));
        label_11 = new QLabel(out_tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 60, 72, 15));
        label_12 = new QLabel(out_tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 200, 72, 15));
        pushButton_4 = new QPushButton(out_tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 130, 93, 28));
        pushButton_5 = new QPushButton(out_tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 310, 93, 28));
        lineEdit_9 = new QLineEdit(out_tab);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(220, 60, 113, 21));
        lineEdit_10 = new QLineEdit(out_tab);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(220, 200, 113, 21));
        interface_->addTab(out_tab, QString());
        reserve_tab = new QWidget();
        reserve_tab->setObjectName(QStringLiteral("reserve_tab"));
        pushButton_2 = new QPushButton(reserve_tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 310, 301, 61));
        lineEdit_4 = new QLineEdit(reserve_tab);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 80, 211, 41));
        lineEdit_5 = new QLineEdit(reserve_tab);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 210, 211, 41));
        label = new QLabel(reserve_tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 72, 15));
        label_8 = new QLabel(reserve_tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 220, 72, 15));
        interface_->addTab(reserve_tab, QString());
        search_tab = new QWidget();
        search_tab->setObjectName(QStringLiteral("search_tab"));
        label_5 = new QLabel(search_tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 60, 72, 15));
        label_6 = new QLabel(search_tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 180, 72, 15));
        label_7 = new QLabel(search_tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 300, 72, 15));
        lineEdit_11 = new QLineEdit(search_tab);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(230, 60, 113, 21));
        lineEdit_12 = new QLineEdit(search_tab);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(230, 180, 113, 21));
        lineEdit_13 = new QLineEdit(search_tab);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(230, 300, 113, 21));
        pushButton_6 = new QPushButton(search_tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 120, 93, 28));
        pushButton_7 = new QPushButton(search_tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 240, 93, 28));
        pushButton_8 = new QPushButton(search_tab);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(230, 340, 93, 28));
        interface_->addTab(search_tab, QString());
        export_tab = new QWidget();
        export_tab->setObjectName(QStringLiteral("export_tab"));
        pushButton_3 = new QPushButton(export_tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 300, 151, 41));
        lineEdit_6 = new QLineEdit(export_tab);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(230, 80, 113, 21));
        lineEdit_7 = new QLineEdit(export_tab);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(230, 190, 113, 21));
        label_9 = new QLabel(export_tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 80, 72, 15));
        label_10 = new QLabel(export_tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 200, 72, 15));
        interface_->addTab(export_tab, QString());
        close = new QPushButton(user_form);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(720, 0, 31, 28));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        close->setFont(font);
        hide = new QPushButton(user_form);
        hide->setObjectName(QStringLiteral("hide"));
        hide->setGeometry(QRect(690, 0, 31, 28));
        hide->setFont(font);
        back = new QLabel(user_form);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(0, 0, 771, 451));
        room_status = new QLabel(user_form);
        room_status->setObjectName(QStringLiteral("room_status"));
        room_status->setGeometry(QRect(150, 60, 5, 30));
        room_status->setStyleSheet(QStringLiteral(""));
        room_button = new QPushButton(user_form);
        room_button->setObjectName(QStringLiteral("room_button"));
        room_button->setGeometry(QRect(50, 55, 93, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        room_button->setFont(font1);
        room_button->setCursor(QCursor(Qt::PointingHandCursor));
        search_status = new QLabel(user_form);
        search_status->setObjectName(QStringLiteral("search_status"));
        search_status->setGeometry(QRect(150, 300, 5, 30));
        search_button = new QPushButton(user_form);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(51, 295, 93, 40));
        search_button->setFont(font1);
        search_button->setCursor(QCursor(Qt::PointingHandCursor));
        reserve_status = new QLabel(user_form);
        reserve_status->setObjectName(QStringLiteral("reserve_status"));
        reserve_status->setGeometry(QRect(150, 240, 5, 30));
        reserve_button = new QPushButton(user_form);
        reserve_button->setObjectName(QStringLiteral("reserve_button"));
        reserve_button->setGeometry(QRect(50, 235, 93, 40));
        reserve_button->setFont(font1);
        reserve_button->setCursor(QCursor(Qt::PointingHandCursor));
        out_status = new QLabel(user_form);
        out_status->setObjectName(QStringLiteral("out_status"));
        out_status->setGeometry(QRect(150, 180, 5, 30));
        out_button = new QPushButton(user_form);
        out_button->setObjectName(QStringLiteral("out_button"));
        out_button->setGeometry(QRect(51, 175, 93, 40));
        out_button->setFont(font1);
        out_button->setCursor(QCursor(Qt::PointingHandCursor));
        export_button = new QPushButton(user_form);
        export_button->setObjectName(QStringLiteral("export_button"));
        export_button->setGeometry(QRect(51, 355, 93, 41));
        export_button->setFont(font1);
        export_button->setCursor(QCursor(Qt::PointingHandCursor));
        export_status = new QLabel(user_form);
        export_status->setObjectName(QStringLiteral("export_status"));
        export_status->setGeometry(QRect(150, 360, 5, 30));
        in_status = new QLabel(user_form);
        in_status->setObjectName(QStringLiteral("in_status"));
        in_status->setGeometry(QRect(150, 120, 5, 30));
        in_button = new QPushButton(user_form);
        in_button->setObjectName(QStringLiteral("in_button"));
        in_button->setGeometry(QRect(50, 115, 93, 40));
        in_button->setFont(font1);
        in_button->setCursor(QCursor(Qt::PointingHandCursor));
        room_icon = new QLabel(user_form);
        room_icon->setObjectName(QStringLiteral("room_icon"));
        room_icon->setGeometry(QRect(30, 60, 30, 30));
        in_icon = new QLabel(user_form);
        in_icon->setObjectName(QStringLiteral("in_icon"));
        in_icon->setGeometry(QRect(30, 120, 30, 30));
        out_icon = new QLabel(user_form);
        out_icon->setObjectName(QStringLiteral("out_icon"));
        out_icon->setGeometry(QRect(31, 180, 30, 30));
        re_icon = new QLabel(user_form);
        re_icon->setObjectName(QStringLiteral("re_icon"));
        re_icon->setGeometry(QRect(30, 240, 30, 30));
        search_icon = new QLabel(user_form);
        search_icon->setObjectName(QStringLiteral("search_icon"));
        search_icon->setGeometry(QRect(31, 300, 30, 30));
        export_icon = new QLabel(user_form);
        export_icon->setObjectName(QStringLiteral("export_icon"));
        export_icon->setGeometry(QRect(31, 360, 30, 30));
        tip = new QLabel(user_form);
        tip->setObjectName(QStringLiteral("tip"));
        tip->setGeometry(QRect(320, 0, 131, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(10);
        tip->setFont(font2);
        tip->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	color:#ffffff;\n"
"}"));
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

        retranslateUi(user_form);

        interface_->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(user_form);
    } // setupUi

    void retranslateUi(QWidget *user_form)
    {
        user_form->setWindowTitle(QApplication::translate("user_form", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(room_tab), QApplication::translate("user_form", "\346\210\277\351\227\264", Q_NULLPTR));
        in_roomId_radio->setText(QApplication::translate("user_form", "\346\230\257\345\220\246\346\214\207\345\256\232\346\210\277\351\227\264\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_form", "\346\210\277\351\227\264\347\261\273\345\236\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("user_form", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("user_form", "\345\247\223\345\220\215", Q_NULLPTR));
        in_in->setText(QApplication::translate("user_form", "\347\231\273\345\275\225", Q_NULLPTR));
        in_group_radio->setText(QApplication::translate("user_form", "\346\230\257\345\220\246\345\233\242\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        in_group_text->setToolTip(QApplication::translate("user_form", "<html><head/><body><p>\345\233\242\344\275\223\345\220\215</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        interface_->setTabText(interface_->indexOf(in_tab), QApplication::translate("user_form", "\347\231\273\350\256\260", Q_NULLPTR));
        label_11->setText(QApplication::translate("user_form", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("user_form", "TextLabel", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("user_form", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("user_form", "PushButton", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(out_tab), QApplication::translate("user_form", "\351\200\200\346\210\277", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("user_form", "\347\241\256\350\256\244", Q_NULLPTR));
        label->setText(QApplication::translate("user_form", "\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("user_form", "\345\247\223\345\220\215", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(reserve_tab), QApplication::translate("user_form", "\351\242\204\347\272\246", Q_NULLPTR));
        label_5->setText(QApplication::translate("user_form", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("user_form", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("user_form", "TextLabel", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("user_form", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("user_form", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("user_form", "PushButton", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(search_tab), QApplication::translate("user_form", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("user_form", "PushButton", Q_NULLPTR));
        label_9->setText(QApplication::translate("user_form", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("user_form", "TextLabel", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(export_tab), QApplication::translate("user_form", "\345\257\274\345\207\272", Q_NULLPTR));
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
        tip->setText(QApplication::translate("user_form", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\2371.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_form: public Ui_user_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FORM_H
