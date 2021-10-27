#ifndef HEA_H
#define HEA_H

#include <QWidget>

namespace Ui {
class hea;
}

class hea : public QWidget
{
    Q_OBJECT

public:
    explicit hea(QWidget *parent = nullptr);
    ~hea();

private:
    Ui::hea *ui;
};

#endif // HEA_H
