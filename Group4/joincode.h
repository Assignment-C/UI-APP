#ifndef JOINCODE_H
#define JOINCODE_H

#include <QWidget>

namespace Ui {
class JoinCode;
}

class JoinCode : public QWidget
{
    Q_OBJECT

public:
    explicit JoinCode(QWidget *parent = nullptr);
    ~JoinCode();
public slots:
    void ClassForCodeTeacher();

private:
    Ui::JoinCode *ui;
};

#endif // JOINCODE_H
