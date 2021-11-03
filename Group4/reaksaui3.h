#ifndef REAKSAUI3_H
#define REAKSAUI3_H

#include <QWidget>

namespace Ui {
class Reaksaui3;
}

class Reaksaui3 : public QWidget
{
    Q_OBJECT

public:
    explicit Reaksaui3(QWidget *parent = nullptr);
    ~Reaksaui3();
public slots:
    void StudentLongin();
public slots:
    void TeacherLongin();
private:
    Ui::Reaksaui3 *ui;
};

#endif // REAKSAUI3_H
