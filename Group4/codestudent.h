#ifndef CODESTUDENT_H
#define CODESTUDENT_H

#include <QWidget>

namespace Ui {
class CodeStudent;
}

class CodeStudent : public QWidget
{
    Q_OBJECT

public:
    explicit CodeStudent(QWidget *parent = nullptr);
    ~CodeStudent();

private:
    Ui::CodeStudent *ui;
};

#endif // CODESTUDENT_H
