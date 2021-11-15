#include "shaun.h"
#include "ui_shaun.h"
#include "QProcess"
#include "hea.h"
#include "homaapp.h"
Shaun::Shaun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shaun)
{
    ui->setupUi(this);
}

Shaun::~Shaun()
{
    delete ui;
}
void Shaun::GradeClass(){
    hea* GradeStudent = new hea(nullptr);
    GradeStudent->show();
    this->hide();
}
void Shaun::HomeClas(){
    HomaApp* MainHome = new HomaApp(nullptr);
    MainHome->show();
    this->hide();



}
