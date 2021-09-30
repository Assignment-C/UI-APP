#ifndef REAKSAUI1_H
#define REAKSAUI1_H

#include <QWidget>

namespace Ui {
class ReakSaUI1;
}

class ReakSaUI1 : public QWidget
{
    Q_OBJECT

public:
    explicit ReakSaUI1(QWidget *parent = nullptr);
    ~ReakSaUI1();

private:
    Ui::ReakSaUI1 *ui;
};

#endif // REAKSAUI1_H
