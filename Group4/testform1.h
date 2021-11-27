#ifndef TESTFORM1_H
#define TESTFORM1_H

#include <QWidget>

namespace Ui {
class TestForm1;
}

class TestForm1 : public QWidget
{
    Q_OBJECT

public:
    explicit TestForm1(QWidget *parent = nullptr);
    ~TestForm1();
public slots:
    void GotoSlotTi2();
private:
    Ui::TestForm1 *ui;
};

#endif // TESTFORM1_H
