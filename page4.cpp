#include "page4.h"
#include "ui_page4.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QComboBox"

page4::page4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page4)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("SQLLITE");
    database.setDatabaseName("d:\\Linkedin.db");
    database.open();

    QStringList age = (QStringList()
                      <<" "
                      <<"16"
                      <<"17"
                      <<"18"
                      <<"19"
                      <<"20"
                      <<"21"
                      <<"22"
                      <<"23"
                      <<"24"
                      <<"25"
                      <<"26"
                      <<"27"
                      <<"28"
                      <<"29"
                      <<"30"
                      <<"31"
                      <<"32"
                      <<"33"
                      <<"34"
                      <<"35"
                      <<"36"
                      <<"37"
                      <<"38"
                      <<"39"
                      <<"40"
                      <<"41"
                      <<"42"
                      <<"43"
                      <<"44"
                      <<"45"
                      <<"46"
                      <<"47"
                      <<"48"
                      <<"49"
                      <<"50"
                      <<"51"
                      <<"52"
                      <<"53"
                      <<"54"
                      <<"55");
    ui->comboBox_8->addItems(age);

    QStringList monthes = (QStringList()
                           <<" "
                           <<"January"
                           <<"Feburary"
                           <<"March"
                           <<"April"
                           <<"May"
                           <<"June"
                           <<"July"
                           <<"August"
                           <<"September"
                           <<"October"
                           <<"November"
                           <<"December");
    ui->comboBox->addItems(monthes);

    QStringList years = (QStringList()
                         <<" "
                         <<"1969"
                         <<"1970"
                         <<"1971"
                         <<"1972"
                         <<"1973"
                         <<"1974"
                         <<"1975"
                         <<"1976"
                         <<"1977"
                         <<"1978"
                         <<"1979"
                         <<"1980"
                         <<"1981"
                         <<"1982"
                         <<"1983"
                         <<"1984"
                         <<"1985"
                         <<"1986"
                         <<"1987"
                         <<"1988"
                         <<"1989"
                         <<"1990"
                         <<"1991"
                         <<"1992"
                         <<"1993"
                         <<"1994"
                         <<"1995"
                         <<"1996"
                         <<"1997"
                         <<"1998"
                         <<"1999"
                         <<"2000"
                         <<"2001"
                         <<"2002"
                         <<"2003"
                         <<"2004"
                         <<"2005"
                         <<"2006"
                         <<"2007"
                         <<"2008");
    ui->comboBox_2->addItems(years);
    QStringList jobs = (QStringList()
                        <<" "
                        <<"Data Science"
                        <<"Blockchain"
                        <<"Programming"
                        <<"Mobile Application"
                        <<"Artificial Intelligence (AI)"
                        <<"Machine Learning"
                        <<"Computer Science"
                        <<"Mechanical Engineering"
                        <<"Web Development"
                        <<"Software Development"
                        <<"Network Security"
                        <<"Web Applications"
                        <<"Data Engineering"
                        <<"Electrical Engineering"
                        <<"Computer Networking"
                        <<"Robotics"
                        );
    ui->comboBox_3->addItems(jobs);
    QStringList type = (QStringList()
                        <<" "
                        <<"Full-time"
                        <<"Part-time"
                        <<"Contract"
                        <<"Temporary"
                        <<"Volunteer"
                        );
    ui->comboBox_4->addItems(type);
    QStringList company =(QStringList()
                         <<" "
                         <<"PART AVA Software Development"
                         <<"Softdesk Technologies"
                         <<"Part Sofware Group"
                         <<"Aucema"
                          );
    ui->comboBox_5->addItems(company);
    QStringList startyear = (QStringList()
                            <<" "
                            <<"2015"
                            <<"2016"
                            <<"2017"
                            <<"2018"
                            <<"2019"
                            <<"2020"
                            <<"2021"
                            <<"2022"
                            <<"2023"
                            <<"2024"
                             );
    ui->comboBox_6->addItems(startyear);
    QStringList endyear = (QStringList()
                          <<" "
                          <<"2023"
                          <<"2024"
                          <<"2025"
                          <<"2026"
                          <<"2027"
                          <<"2028"
                          <<"2029"
                          <<"2030"
                          <<"2031"
                          <<"2032"
                           );
    ui->comboBox_7->addItems(endyear);
}

page4::~page4()
{
    delete ui;
}



void page4::on_pushButton_clicked()
{
    QSqlQuery q;
    QString age , mounth , year , job , employment , company , uni , start ,end;
    age = ui->comboBox_8->currentText();
    mounth = ui->comboBox->currentText();
    year = ui->comboBox_2->currentText();
    job = ui->comboBox_3->currentText();
    employment = ui->comboBox_4->currentText();
    company = ui->comboBox_5->currentText();
    uni = ui->lineEdit->text();
    start = ui->comboBox_6->currentText();
    end = ui->comboBox_7->currentText();

    q.exec("INSERT INTO User(Age,Month,Year,Job,Employment type,Company,University,Start Year,End Year)"
           "VALUES('"+age+"','"+mounth+"','"+year+"','"+job+"','"+employment+"','"+company+"','"+uni+"','"+start+"','"+end+"')");

}

