#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>

namespace Ui {
class Homepage;
}

class Homepage : public QWidget
{
    Q_OBJECT

public:
    explicit Homepage(QWidget *parent = nullptr);
    ~Homepage();
public slots:
    void JoinClassCodeStudent1();
private:
    Ui::Homepage *ui;
};

#endif // HOMEPAGE_H
