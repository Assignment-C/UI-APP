#ifndef SHAUN_H
#define SHAUN_H

#include <QWidget>

namespace Ui {
class Shaun;
}

class Shaun : public QWidget
{
    Q_OBJECT

public:
    explicit Shaun(QWidget *parent = nullptr);
    ~Shaun();

private:
    Ui::Shaun *ui;
};

#endif // SHAUN_H