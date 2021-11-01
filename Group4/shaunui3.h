#ifndef SHAUNUI3_H
#define SHAUNUI3_H

#include <QWidget>

namespace Ui {
class ShaunUI3;
}

class ShaunUI3 : public QWidget
{
    Q_OBJECT

public:
    explicit ShaunUI3(QWidget *parent = nullptr);
    ~ShaunUI3();

private:
    Ui::ShaunUI3 *ui;
};

#endif // SHAUNUI3_H
