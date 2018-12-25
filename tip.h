#ifndef TIP_H
#define TIP_H

#include <QDialog>
#include <QTimer>
#include <QString>
#include <QPropertyAnimation>
#include <QLabel>
enum class TIP
{
    YES,
    NO,
    WRONG
};
namespace Ui {
class Tip;
}

class Tip : public QDialog
{
    Q_OBJECT

public:
    explicit Tip(TIP tip,QString text,QWidget *parent = 0);
    ~Tip();

private:
    QPropertyAnimation *animation;
    Ui::Tip *ui;
};

#endif // TIP_H
