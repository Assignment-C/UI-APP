#include "brosithst3.h"
#include "ui_brosithst3.h"
#include "reaksaui2.h"
#include "shaun.h"
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

void brosithst3::on_pushButton_3_clicked()
{
//    Shaun shaun;
//    shaun.setModal(true);
//    shaun.exec();
    shaun = new Shaun(this);
    shaun->show();

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

