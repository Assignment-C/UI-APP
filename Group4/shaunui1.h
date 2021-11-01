#ifndef SHAUNUI1_H
#define SHAUNUI1_H

#include <QWidget>

namespace Ui {
class ShaunUI1;
}

class ShaunUI1 : public QWidget
{
    Q_OBJECT

public:
    explicit ShaunUI1(QWidget *parent = nullptr);
    ~ShaunUI1();

private:
    Ui::ShaunUI1 *ui;
};

#endif // SHAUNUI1_H
