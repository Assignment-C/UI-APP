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
public slots:
    void AccountUser();

private:
    Ui::hea *ui;
};

#endif // HEA_H
