#include "testform3.h"
#include "ui_testform3.h"
#include "testform2.h"
TestForm3::TestForm3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestForm3)
{
    ui->setupUi(this);
}

TestForm3::~TestForm3()
{
    delete ui;
}
void TestForm3::GotoForm2(){
    TestForm2* Gocheck = new TestForm2(nullptr);
    Gocheck->show();
    this->hide();
}
