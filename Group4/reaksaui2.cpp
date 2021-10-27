#include "reaksaui2.h"
#include "ui_reaksaui2.h"
#include "heaui7.h"
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

void reaksaui2::on_pushButton_clicked()
{
   hide();
   HeaUi7 = new heaUi7;
   heaUi7.setModal(true);
   heaUi7.exec();




}

