#include "reaksaui2.h"
#include "ui_reaksaui2.h"
#include "QProcess"
#include "joincode.h"
reaksaui2::reaksaui2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reaksaui2)
{
    ui->setupUi(this);
}

reaksaui2::~reaksaui2()
{
    delete ui;
}
void reaksaui2::OpentHomeTecher(){
    JoinCode* ClassTecher = new JoinCode(nullptr);
    ClassTecher->show();
    this->hide();

}



