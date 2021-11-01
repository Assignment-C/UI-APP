#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "brosithst3.h"
#include "brosithst2.h"
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
    brosithst3* BechiceHome = new brosithst3(nullptr);
    BechiceHome->show();
    this->hide();
}
void MainWindow::CreatAcc(){
    brosithst2* Create = new brosithst2(nullptr);
    Create->show();
    this->hide();
}
