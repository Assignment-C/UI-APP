#include "classtecher.h"
#include "ui_classtecher.h"
#include "heaui7.h"
ClassTecher::ClassTecher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClassTecher)
{
    ui->setupUi(this);
}

ClassTecher::~ClassTecher()
{
    delete ui;
}
void ClassTecher::TeacherStep2(){
    HeaUi7* Creatcode = new HeaUi7 (nullptr);
    Creatcode->show();
    this->hide();
}
