#ifndef USER_FORM_H
#define USER_FORM_H

#include <QWidget>

namespace Ui {
class user_form;
}

class user_form : public QWidget
{
    Q_OBJECT

public:
    explicit user_form(QWidget *parent = 0);
    ~user_form();

private:
    Ui::user_form *ui;
};

#endif // USER_FORM_H
