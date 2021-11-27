#ifndef TESTFORM2_H
#define TESTFORM2_H

#include <QWidget>

namespace Ui {
class TestForm2;
}

class TestForm2 : public QWidget
{
    Q_OBJECT

public:
    explicit TestForm2(QWidget *parent = nullptr);
    ~TestForm2();
public slots:
    void OpentTi1();
private:
    Ui::TestForm2 *ui;
};

#endif // TESTFORM2_H
