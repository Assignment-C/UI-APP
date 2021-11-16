#include "dropmenu.h"
#include "ui_dropmenu.h"

dropmenu::dropmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dropmenu)
{
    ui->setupUi(this);
}

dropmenu::~dropmenu()
{
    delete ui;
}
