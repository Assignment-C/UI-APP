#ifndef TESTFORM3_H
#define TESTFORM3_H

#include <QWidget>

namespace Ui {
class TestForm3;
}

class TestForm3 : public QWidget
{
    Q_OBJECT

public:
    explicit TestForm3(QWidget *parent = nullptr);
    ~TestForm3();
public slots:
    void GotoForm2();
private:
    Ui::TestForm3 *ui;
};

#endif // TESTFORM3_H
