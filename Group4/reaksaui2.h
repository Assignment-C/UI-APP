#ifndef REAKSAUI2_H
#define REAKSAUI2_H

#include <QWidget>

namespace Ui {
class reaksaui2;
}

class reaksaui2 : public QWidget
{
    Q_OBJECT

public:
    explicit reaksaui2(QWidget *parent = nullptr);
    ~reaksaui2();

public slots:
    void OpentHomeTecher();



private:
    Ui::reaksaui2 *ui;
};

#endif // REAKSAUI2_H
