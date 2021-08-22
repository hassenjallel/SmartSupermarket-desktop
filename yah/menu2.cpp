#include "menu2.h"
#include "ui_menu2.h"
#include"fact.h"
#include"gestion_caisse.h"
menu2::menu2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu2)
{
    ui->setupUi(this);
}

menu2::~menu2()
{
    delete ui;
}

void menu2::on_pushButton_clicked()
{
    fact f;
        f.setModal(true);
        f.exec();
}

void menu2::on_pushButton_2_clicked()
{
    gestion_caisse g;
    g.setModal(true);
    g.exec();
}
