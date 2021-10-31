#ifndef BROSITHST2_H
#define BROSITHST2_H

#include <QDialog>

namespace Ui {
class brosithst2;
}

class brosithst2 : public QDialog
{
    Q_OBJECT

public:
    explicit brosithst2(QWidget *parent = nullptr);
    ~brosithst2();

/*private slots:
    void on_pushButton_clicked();*/

private:
    Ui::brosithst2 *ui;
};

#endif // BROSITHST2_H
