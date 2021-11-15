#ifndef CLASSSTUDENT_H
#define CLASSSTUDENT_H

#include <QWidget>

namespace Ui {
class ClassStudent;
}

class ClassStudent : public QWidget
{
    Q_OBJECT

public:
    explicit ClassStudent(QWidget *parent = nullptr);
    ~ClassStudent();
public slots:
    void StudentClass();
public slots:
    void BackClasHome();
private:
    Ui::ClassStudent *ui;
};

#endif // CLASSSTUDENT_H
