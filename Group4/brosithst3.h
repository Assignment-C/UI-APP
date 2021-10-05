#ifndef BROSITHST3_H
#define BROSITHST3_H

#include <QDialog>

namespace Ui {
class brosithst3;
}

class brosithst3 : public QDialog
{
    Q_OBJECT

public:
    explicit brosithst3(QWidget *parent = nullptr);
    ~brosithst3();

private:
    Ui::brosithst3 *ui;
};

#endif // BROSITHST3_H
