#include "codestudent.h"
#include "ui_codestudent.h"

CodeStudent::CodeStudent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CodeStudent)
{
    ui->setupUi(this);
}

CodeStudent::~CodeStudent()
{
    delete ui;
}
