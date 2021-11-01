#include "brosithst3.h"
#include "ui_brosithst3.h"
#include "reaksaui2.h"
#include "shaun.h"
<<<<<<< HEAD
=======

>>>>>>> a7038a6aa34808dc574f2ac353957d492a6eea15
brosithst3::brosithst3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::brosithst3)
{
    ui->setupUi(this);
}

brosithst3::~brosithst3()
{
    delete ui;
}

void brosithst3::AddtoStudent(){
    Shaun Student;
    Student.show();

}
void brosithst3::AddtoTecher(){
    reaksaui2* Techer = new reaksaui2(nullptr);
    Techer->show();
    this->hide();
}
void brosithst3::StudentClass(){
     Shaun* Student = new Shaun(nullptr);
     Student->show();
     this->hide();
}

