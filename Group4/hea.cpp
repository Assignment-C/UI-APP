#include "hea.h"
#include "ui_hea.h"
#include "homepage.h"
#include "testform1.h"
hea::hea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hea)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Simple Test");
    ui->comboBox->addItem("Easy");
    ui->comboBox->addItem("Normal");
    ui->comboBox->addItem("Hard");
    ui->comboBox_2->addItem("Academic Test");
    ui->comboBox_2->addItem("ILTS");
    ui->comboBox_2->addItem("TOELF");
    ui->comboBox_3->addItem("Advance Test");
    ui->comboBox_3->addItem("ITC");
    ui->comboBox_3->addItem("IFL");
    ui->comboBox_3->addItem("KIT");
    ui->comboBox_3->addItem("NEPTIC");


}

hea::~hea()
{
    delete ui;
}
void hea::AccountUser(){
    Homepage* Profile = new Homepage(nullptr);
    Profile->show();
    this->hide();
}
void hea::DoTest(){
    TestForm1* GotoTestForm1 = new TestForm1(nullptr);
    GotoTestForm1->show();
    this->hide();
}
