#include "homepage.h"
#include "ui_homepage.h"
#include "classstudent.h"
#include "hea.h"
#include "mainwindow.h"
Homepage::Homepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
}

Homepage::~Homepage()
{
    delete ui;
}
void Homepage::JoinClassCodeStudent1(){
    ClassStudent* MycodeMe = new ClassStudent(nullptr);
    MycodeMe->show();
    this->hide();
}
void Homepage::BackHomepage(){
    hea* BackToo = new hea(nullptr);
    BackToo->show();
    this->hide();
}
void Homepage::Longout(){
    MainWindow* BackAccout = new MainWindow (nullptr);
    BackAccout->show();
    this->hide();
}
