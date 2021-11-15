#ifndef HOMAAPP_H
#define HOMAAPP_H

#include <QMainWindow>

namespace Ui {
class HomaApp;
}

class HomaApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomaApp(QWidget *parent = nullptr);
    ~HomaApp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HomaApp *ui;
};

#endif // HOMAAPP_H
