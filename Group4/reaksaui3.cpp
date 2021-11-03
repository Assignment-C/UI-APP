#include "reaksaui3.h"
#include "ui_reaksaui3.h"
#include "shaun.h"
#include "reaksaui2.h"
Reaksaui3::Reaksaui3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reaksaui3)
{
    ui->setupUi(this);
}

Reaksaui3::~Reaksaui3()
{
    delete ui;
}
void Reaksaui3::StudentLongin(){
    Shaun*  Gotoin = new Shaun(nullptr);
    Gotoin->show();
    this->hide();
}
void Reaksaui3::TeacherLongin(){
    reaksaui2* Teacher = new reaksaui2(nullptr);
    Teacher->show();
    this->hide();
}
