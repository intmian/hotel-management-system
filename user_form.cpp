#include "user_form.h"
#include "ui_user_form.h"

user_form::user_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_form)
{
    ui->setupUi(this);
}

user_form::~user_form()
{
    delete ui;
}
