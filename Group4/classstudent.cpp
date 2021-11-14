#include "classstudent.h"
#include "ui_classstudent.h"
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
    CodeStudent* ClassCodeStu = new CodeStudent(nullptr);
    ClassCodeStu->show();
    this->hide();
}
