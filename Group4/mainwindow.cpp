#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "brosithst2.h"
#include "reaksaui3.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::OpenChicetool(){
    Reaksaui3* BechiceHome = new Reaksaui3(nullptr);
    BechiceHome->show();
    this->hide();
}
void MainWindow::CreatAcc(){
    brosithst2* Create = new brosithst2(nullptr);
    Create->show();
    this->hide();
}
