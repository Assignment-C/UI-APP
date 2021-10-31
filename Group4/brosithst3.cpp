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

void brosithst3::AddtoStudent(){
    Shaun Student;
    Student.show();

}
void brosithst3::AddtoTecher(){
    reaksaui2 Techer;
    Techer.show();
}

