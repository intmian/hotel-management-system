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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_form
{
public:
    QTabWidget *interface_;
    QWidget *room_tab;
    QLabel *label;
    QWidget *in_tab;
    QLabel *label_2;
    QWidget *out_tab;
    QWidget *reserve_tab;
    QWidget *search_tab;
    QWidget *export_tab;
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
    QLabel *label_3;

    void setupUi(QWidget *user_form)
    {
        if (user_form->objectName().isEmpty())
            user_form->setObjectName(QStringLiteral("user_form"));
        user_form->resize(772, 629);
        user_form->setStyleSheet(QStringLiteral(""));
        interface_ = new QTabWidget(user_form);
        interface_->setObjectName(QStringLiteral("interface_"));
        interface_->setGeometry(QRect(170, 30, 581, 581));
        room_tab = new QWidget();
        room_tab->setObjectName(QStringLiteral("room_tab"));
        label = new QLabel(room_tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 150, 72, 15));
        interface_->addTab(room_tab, QString());
        in_tab = new QWidget();
        in_tab->setObjectName(QStringLiteral("in_tab"));
        label_2 = new QLabel(in_tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 170, 72, 15));
        interface_->addTab(in_tab, QString());
        out_tab = new QWidget();
        out_tab->setObjectName(QStringLiteral("out_tab"));
        interface_->addTab(out_tab, QString());
        reserve_tab = new QWidget();
        reserve_tab->setObjectName(QStringLiteral("reserve_tab"));
        interface_->addTab(reserve_tab, QString());
        search_tab = new QWidget();
        search_tab->setObjectName(QStringLiteral("search_tab"));
        interface_->addTab(search_tab, QString());
        export_tab = new QWidget();
        export_tab->setObjectName(QStringLiteral("export_tab"));
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
        back->setGeometry(QRect(0, 0, 771, 621));
        room_status = new QLabel(user_form);
        room_status->setObjectName(QStringLiteral("room_status"));
        room_status->setGeometry(QRect(140, 195, 5, 30));
        room_status->setStyleSheet(QStringLiteral(""));
        room_button = new QPushButton(user_form);
        room_button->setObjectName(QStringLiteral("room_button"));
        room_button->setGeometry(QRect(40, 190, 93, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        room_button->setFont(font1);
        room_button->setCursor(QCursor(Qt::PointingHandCursor));
        search_status = new QLabel(user_form);
        search_status->setObjectName(QStringLiteral("search_status"));
        search_status->setGeometry(QRect(139, 355, 5, 30));
        search_button = new QPushButton(user_form);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(40, 350, 93, 40));
        search_button->setFont(font1);
        search_button->setCursor(QCursor(Qt::PointingHandCursor));
        reserve_status = new QLabel(user_form);
        reserve_status->setObjectName(QStringLiteral("reserve_status"));
        reserve_status->setGeometry(QRect(140, 315, 5, 30));
        reserve_button = new QPushButton(user_form);
        reserve_button->setObjectName(QStringLiteral("reserve_button"));
        reserve_button->setGeometry(QRect(40, 310, 93, 40));
        reserve_button->setFont(font1);
        reserve_button->setCursor(QCursor(Qt::PointingHandCursor));
        out_status = new QLabel(user_form);
        out_status->setObjectName(QStringLiteral("out_status"));
        out_status->setGeometry(QRect(139, 275, 5, 30));
        out_button = new QPushButton(user_form);
        out_button->setObjectName(QStringLiteral("out_button"));
        out_button->setGeometry(QRect(40, 270, 93, 40));
        out_button->setFont(font1);
        out_button->setCursor(QCursor(Qt::PointingHandCursor));
        export_button = new QPushButton(user_form);
        export_button->setObjectName(QStringLiteral("export_button"));
        export_button->setGeometry(QRect(40, 420, 93, 41));
        export_button->setFont(font1);
        export_button->setCursor(QCursor(Qt::PointingHandCursor));
        export_status = new QLabel(user_form);
        export_status->setObjectName(QStringLiteral("export_status"));
        export_status->setGeometry(QRect(139, 425, 5, 30));
        in_status = new QLabel(user_form);
        in_status->setObjectName(QStringLiteral("in_status"));
        in_status->setGeometry(QRect(140, 232, 5, 30));
        in_button = new QPushButton(user_form);
        in_button->setObjectName(QStringLiteral("in_button"));
        in_button->setGeometry(QRect(40, 227, 93, 40));
        in_button->setFont(font1);
        in_button->setCursor(QCursor(Qt::PointingHandCursor));
        room_icon = new QLabel(user_form);
        room_icon->setObjectName(QStringLiteral("room_icon"));
        room_icon->setGeometry(QRect(20, 195, 30, 30));
        in_icon = new QLabel(user_form);
        in_icon->setObjectName(QStringLiteral("in_icon"));
        in_icon->setGeometry(QRect(20, 232, 30, 30));
        out_icon = new QLabel(user_form);
        out_icon->setObjectName(QStringLiteral("out_icon"));
        out_icon->setGeometry(QRect(20, 275, 30, 30));
        re_icon = new QLabel(user_form);
        re_icon->setObjectName(QStringLiteral("re_icon"));
        re_icon->setGeometry(QRect(20, 315, 30, 30));
        search_icon = new QLabel(user_form);
        search_icon->setObjectName(QStringLiteral("search_icon"));
        search_icon->setGeometry(QRect(20, 355, 30, 30));
        export_icon = new QLabel(user_form);
        export_icon->setObjectName(QStringLiteral("export_icon"));
        export_icon->setGeometry(QRect(20, 425, 30, 30));
        label_3 = new QLabel(user_form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 0, 131, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("QLabel\n"
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
        label_3->raise();

        retranslateUi(user_form);

        interface_->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(user_form);
    } // setupUi

    void retranslateUi(QWidget *user_form)
    {
        user_form->setWindowTitle(QApplication::translate("user_form", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("user_form", "a", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(room_tab), QApplication::translate("user_form", "\346\210\277\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_form", "b", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(in_tab), QApplication::translate("user_form", "\347\231\273\350\256\260", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(out_tab), QApplication::translate("user_form", "\351\200\200\346\210\277", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(reserve_tab), QApplication::translate("user_form", "\351\242\204\347\272\246", Q_NULLPTR));
        interface_->setTabText(interface_->indexOf(search_tab), QApplication::translate("user_form", "\346\237\245\350\257\242", Q_NULLPTR));
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
        label_3->setText(QApplication::translate("user_form", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\2371.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_form: public Ui_user_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FORM_H
