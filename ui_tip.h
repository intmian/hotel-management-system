/********************************************************************************
** Form generated from reading UI file 'tip.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIP_H
#define UI_TIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Tip
{
public:
    QLabel *pic;
    QLabel *back;
    QLabel *label;

    void setupUi(QDialog *Tip)
    {
        if (Tip->objectName().isEmpty())
            Tip->setObjectName(QStringLiteral("Tip"));
        Tip->resize(131, 152);
        pic = new QLabel(Tip);
        pic->setObjectName(QStringLiteral("pic"));
        pic->setGeometry(QRect(0, 0, 131, 131));
        back = new QLabel(Tip);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(0, 0, 131, 151));
        back->setStyleSheet(QLatin1String("\n"
"QLabel\n"
"{\n"
"    background-color:rgb(247, 247, 247);\n"
"}"));
        label = new QLabel(Tip);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 130, 131, 20));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\271\274\345\234\206\";"));

        retranslateUi(Tip);

        QMetaObject::connectSlotsByName(Tip);
    } // setupUi

    void retranslateUi(QDialog *Tip)
    {
        Tip->setWindowTitle(QApplication::translate("Tip", "Dialog", Q_NULLPTR));
        pic->setText(QString());
        back->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tip: public Ui_Tip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIP_H
