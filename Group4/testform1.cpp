#include "testform1.h"
#include "ui_testform1.h"
#include "testform2.h"
TestForm1::TestForm1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestForm1)
{
    ui->setupUi(this);
}

TestForm1::~TestForm1()
{
    delete ui;
}
void TestForm1::GotoSlotTi2(){
    TestForm2* OpenTi2 = new TestForm2(nullptr);
    OpenTi2->show();
    this->hide();
}
