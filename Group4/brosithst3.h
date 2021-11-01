#ifndef BROSITHST3_H
#define BROSITHST3_H

#include <QDialog>
#include "shaun.h"
namespace Ui {
class brosithst3;
}

class brosithst3 : public QDialog
{
    Q_OBJECT

public:
    explicit brosithst3(QWidget *parent = nullptr);
    ~brosithst3();

public slots:
    void on_pushButton_3_clicked();
public slots:
    void AddtoTecher();
public slots:
    void StudentClass();
private:
    Ui::brosithst3 *ui;
    Shaun *shaun;
};

#endif // BROSITHST3_H
