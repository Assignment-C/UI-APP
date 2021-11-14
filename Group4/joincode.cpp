#include "joincode.h"
#include "ui_joincode.h"
#include "heaui7.h"
JoinCode::JoinCode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JoinCode)
{
    ui->setupUi(this);
}

JoinCode::~JoinCode()
{
    delete ui;
}
void JoinCode::ClassForCodeTeacher(){
    HeaUi7* PassCode = new HeaUi7(nullptr);
    PassCode->show();
    this->hide();
}
