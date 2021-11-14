#include "homepage.h"
#include "ui_homepage.h"
#include "classstudent.h"
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
