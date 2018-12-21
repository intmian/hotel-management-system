/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *close;
    QPushButton *hide;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *back;
    QLabel *people;
    QLabel *movie;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(292, 391);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(260, 0, 31, 28));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        close->setFont(font);
        close->setCursor(QCursor(Qt::PointingHandCursor));
        close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(100,225,100,30);//\350\203\214\346\231\257\350\211\262\357\274\210\344\271\237\345\217\257\344\273\245\350\256\276\347\275\256\345\233\276\347\211\207\357\274\211\n"
"border-style:outset;                  //\350\276\271\346\241\206\346\240\267\345\274\217\357\274\210inset/outset\357\274\211\n"
"border-width:8px;                     //\350\276\271\346\241\206\345\256\275\345\272\246\345\203\217\347\264\240\n"
"border-radius:10px;                   //\350\276\271\346\241\206\345\234\206\350\247\222\345\215\212\345\276\204\345\203\217\347\264\240\n"
"border-color:rgba(255,255,255,30);    //\350\276\271\346\241\206\351\242\234\350\211\262\n"
"font:bold 20px;                       //\345\255\227\344\275\223\357\274\214\345\255\227\344\275\223\345\244\247\345\260\217\n"
"color:rgba(0,0,0,100);                //\345\255\227\344\275\223\351\242\234\350\211\262\n"
"padding:10px;                          //\345\241\253\350\241\254\n"
"}\n"
"QPushButton:pressed{\n"
"background-color"
                        ":rgba(100,255,100,200);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgba(100,255,100,100);\n"
"border-color:rgba(255,255,255,200);\n"
"color:rgba(0,0,0,200);\n"
"}"));
        hide = new QPushButton(centralWidget);
        hide->setObjectName(QStringLiteral("hide"));
        hide->setGeometry(QRect(230, 0, 31, 28));
        hide->setFont(font);
        hide->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 280, 111, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 230, 191, 41));
        back = new QLabel(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(0, 0, 291, 391));
        people = new QLabel(centralWidget);
        people->setObjectName(QStringLiteral("people"));
        people->setGeometry(QRect(80, 60, 131, 131));
        movie = new QLabel(centralWidget);
        movie->setObjectName(QStringLiteral("movie"));
        movie->setGeometry(QRect(80, 60, 131, 131));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 91, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("QLable{\n"
"rgb(255, 255, 255);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        back->raise();
        close->raise();
        hide->raise();
        pushButton->raise();
        lineEdit->raise();
        people->raise();
        movie->raise();
        label->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        close->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\205\263\351\227\255\347\252\227\345\217\243</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        close->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\345\205\263\351\227\255</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        close->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        hide->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\346\234\200\345\260\217\345\214\226</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        hide->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\350\276\223\345\205\245\345\257\206\347\240\201</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\350\276\223\345\205\245\344\275\240\347\232\204\350\272\253\344\273\275\350\257\206\345\210\253\347\240\201</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        back->setText(QString());
        people->setText(QString());
        movie->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
