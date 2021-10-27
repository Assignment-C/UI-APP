#ifndef HEAUI7_H
#define HEAUI7_H

#include <QDialog>

namespace Ui {
class HeaUi7;
}

class HeaUi7 : public QDialog
{
    Q_OBJECT

public:
    explicit HeaUi7(QWidget *parent = nullptr);
    ~HeaUi7();

private:
    Ui::HeaUi7 *ui;
};

#endif // HEAUI7_H
