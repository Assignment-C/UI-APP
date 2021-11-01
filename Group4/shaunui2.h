#ifndef SHAUNUI2_H
#define SHAUNUI2_H

#include <QWidget>

namespace Ui {
class ShaunUI2;
}

class ShaunUI2 : public QWidget
{
    Q_OBJECT

public:
    explicit ShaunUI2(QWidget *parent = nullptr);
    ~ShaunUI2();

private:
    Ui::ShaunUI2 *ui;
};

#endif // SHAUNUI2_H
