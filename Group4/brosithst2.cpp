#include "brosithst2.h"
#include "ui_brosithst2.h"

brosithst2::brosithst2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::brosithst2)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Enter Your First Name");
    ui->lineEdit_2->setPlaceholderText("Enter Your Last Name");
    ui->lineEdit_3->setPlaceholderText("Enter Your Email");
    ui->lineEdit_4->setPlaceholderText("Enter Password");
    ui->lineEdit_5->setPlaceholderText("Enter Password Again");
}

brosithst2::~brosithst2()
{
    delete ui;
}

void brosithst2::on_pushButton_clicked()
{

}

