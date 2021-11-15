#include "classstudent.h"
#include "ui_classstudent.h"
#include "hea.h"
#include "codestudent.h"
ClassStudent::ClassStudent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClassStudent)
{
    ui->setupUi(this);
}

ClassStudent::~ClassStudent()
{
    delete ui;
}
void ClassStudent::StudentClass(){
    CodeStudent* JoinMe = new CodeStudent (nullptr);
    JoinMe->show();
    this->hide();
}
void ClassStudent::BackClasHome(){
    hea* HomeBack = new hea (nullptr);
    HomeBack->show();
    this->hide();
}
