#include "page3.h"
#include "ui_page3.h"
#include "page2.h"
#include "ui_page2.h"
#include "page4.h"

page3::page3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page3)
{
    ui->setupUi(this);
}

page3::~page3()
{
    delete ui;
}


