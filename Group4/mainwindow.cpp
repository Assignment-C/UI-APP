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
    brosithst3 BechiceHome;
    BechiceHome.exec();
}
void MainWindow::CreatAcc(){
    brosithst2 Create;
    Create.exec();
}
