/********************************************************************************
** Form generated from reading UI file 'dialog_tip.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TIP_H
#define UI_DIALOG_TIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog_tip
{
public:
    QFrame *frame;
    QLabel *label;

    void setupUi(QDialog *Dialog_tip)
    {
        if (Dialog_tip->objectName().isEmpty())
            Dialog_tip->setObjectName(QStringLiteral("Dialog_tip"));
        Dialog_tip->resize(100, 100);
        frame = new QFrame(Dialog_tip);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 100, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 100, 100));

        retranslateUi(Dialog_tip);

        QMetaObject::connectSlotsByName(Dialog_tip);
    } // setupUi

    void retranslateUi(QDialog *Dialog_tip)
    {
        Dialog_tip->setWindowTitle(QApplication::translate("Dialog_tip", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_tip: public Ui_Dialog_tip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TIP_H
