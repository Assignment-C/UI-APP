#ifndef LISTCLASS_H
#define LISTCLASS_H

#include <QWidget>

namespace Ui {
class ListClass;
}

class ListClass : public QWidget
{
    Q_OBJECT

public:
    explicit ListClass(QWidget *parent = nullptr);
    ~ListClass();

private:
    Ui::ListClass *ui;
};

#endif // LISTCLASS_H
