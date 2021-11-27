#include "shaun.h"
#include "ui_shaun.h"
#include "QProcess"
#include "hea.h"
#include "dropmenu.h"
#include "testform1.h"
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

void Shaun::DropMenu(){
    dropmenu* AddMenu = new dropmenu(nullptr);
    AddMenu->show();
    this->hide();
}
void Shaun::UsingForm(){
   TestForm1* Getform = new TestForm1(nullptr);
   Getform->show();
   this->hide();
}
