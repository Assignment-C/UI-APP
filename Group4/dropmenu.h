#ifndef DROPMENU_H
#define DROPMENU_H

#include <QMainWindow>

namespace Ui {
class dropmenu;
}

class dropmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit dropmenu(QWidget *parent = nullptr);
    ~dropmenu();

private:
    Ui::dropmenu *ui;
};

#endif // DROPMENU_H
