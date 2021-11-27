#include "testform2.h"
#include "ui_testform2.h"
#include "testform1.h"
#include "testform3.h"
TestForm2::TestForm2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestForm2)
{
    ui->setupUi(this);
}

TestForm2::~TestForm2()
{
    delete ui;
}
void TestForm2::OpentTi1(){
    TestForm1* GotoOpentTi1 = new TestForm1(nullptr);
    GotoOpentTi1->show();
    this->hide();
}
void TestForm2::OpentTi2(){
    TestForm3* GotoOpentTi2 = new TestForm3(nullptr);
    GotoOpentTi2->show();
    this->hide();
}
