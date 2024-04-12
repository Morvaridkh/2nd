#include "page2.h"
#include "ui_page2.h"
#include "QMessageBox"
#include "page3.h"
#include "ui_page3.h"
#include "page4.h"
#include "ui_page4.h"
#include "QString"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <ctime>
#include <cstdlib>
#include <iostream>

int r;
int random;
page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("SQLLITE");
    database.setDatabaseName("d:\\Linkedin.db");
    database.open();

    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->label_7->setStyleSheet("image: url(:/new/prefix1/p2.png);");
    ui->lineEdit->setPlaceholderText("Email or Phone");
    ui->lineEdit_4->setPlaceholderText("Username");
    ui->lineEdit_2->setPlaceholderText("Password");

}

page2::~page2()
{
    delete ui;
}

void page2::on_pushButton_3_clicked()
{
    ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
}

void page2::on_pushButton_clicked()
{
    r = rand()%4;
    switch (r)
    {
     case 0:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap1.jpg)");
        break;
     case 1:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap2.png)");
        break;
     case 2:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap3.png)");
        break;
    case 3:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap4.png)");
        break;
    }
    ui->groupBox_2->show();
    ui->pushButton->setEnabled(false);
}



void page2::on_pushButton_2_clicked()
{
    if(r==0)
    {
        if(ui->lineEdit_3->text()=="captcha246")
        {
            ui->pushButton_2->show();
            ui->pushButton_5->setEnabled(true);
            ui->pushButton_6->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    else if(r==1)
    {
        if(ui->lineEdit_3->text()=="Td4eva")
        {
            ui->pushButton_2->show();
            ui->pushButton_5->setEnabled(true);
            ui->pushButton_6->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    else if(r==2)
    {
        if(ui->lineEdit_3->text()=="qVpXayk")
        {
            ui->pushButton_2->show();
            ui->pushButton_5->setEnabled(true);
            ui->pushButton_6->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    else if(r==3)
    {
        if(ui->lineEdit_3->text()=="3VP645")
        {
            ui->pushButton_2->show();
            ui->pushButton_5->setEnabled(true);
            ui->pushButton_6->setEnabled(true);
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }

}



void page2::on_pushButton_6_clicked()
{
    int c;
    QString b;
    b = ui->lineEdit_5->text();
    c = b.toInt();
    if(random==c)
    {
     ui->pushButton_4->setEnabled(true);
    }
}

void page2::on_pushButton_5_clicked()
{

    page3 *w3 = new page3;
    random = 1000 + rand() % 9000;
    w3->ui->lineEdit->setText(QString::number(random));
    w3->show();
    w3->setWindowTitle("Code");

}

void page2::on_pushButton_4_clicked()
{
    QSqlQuery q;
    QString e , u , p;
    e = ui->lineEdit->text();
    u = ui->lineEdit_4->text();
    p = ui->lineEdit_2->text();
    q.exec("INSERT INTO User(Email,UserName,PassWord)VALUES('"+e+"','"+u+"','"+p+"',)");


 // code randome safhe 3
    int c;
    QString b;
    b = ui->lineEdit_5->text();
    c = b.toInt();
    if(c==random)
    {
        ui->pushButton_4->setEnabled(true);
        page4 *w4 = new page4;
        w4->show();
        this->hide();
    }
    else
    {
        QMessageBox::warning(this ,"wrong information","please enter correct code","tryagain");
    }

}

