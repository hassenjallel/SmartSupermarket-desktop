#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bien.h"
#include "dialog.h"
#include "mdp.h"
#include<QMediaPlayer>
#include"utilisateurs.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/houss/Desktop/achref/1234.jpg");
    ui->label->setPixmap(pix.scaled(771,411,Qt::KeepAspectRatio));
    player = new QMediaPlayer(this);
    player ->setMedia(QUrl::fromLocalFile("C:/Users/ASUS/Desktop/PNL - A lAmmoniaque [Clip Officiel].mp3"));
    player->play();

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    QString username= ui->lineEdit->text();
    QString password =ui->lineEdit_2->text();

    if(username=="test" && password=="test"){
        hide();
        bien afficher;
        afficher.setModal(true);
        afficher.exec();


    }
    else
    {
        Dialog afficher;
        afficher.setModal(true);
        afficher.exec();
    }

}
void MainWindow::on_pushButton_3_clicked()
{
    mdp afficher;
    afficher.setModal(true);
    afficher.exec();
}
