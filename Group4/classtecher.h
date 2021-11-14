#ifndef CLASSTECHER_H
#define CLASSTECHER_H

#include <QWidget>

namespace Ui {
class ClassTecher;
}

class ClassTecher : public QWidget
{
    Q_OBJECT

public:
    explicit ClassTecher(QWidget *parent = nullptr);
    ~ClassTecher();
public slots:
    void TeacherStep2();

private:
    Ui::ClassTecher *ui;
};

#endif // CLASSTECHER_H
