#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QtDebug>
#include "menu.h"
#include"accueil.h"
#include<QCamera>
#include <QCameraViewfinder>
#include<QCameraImageCapture>
#include<QVBoxLayout>
#include<QPixmap>
#include<QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("abc.gif"))->mask());
    QMovie *movie=new   QMovie("abc.gif");
    ui->label->setMovie(movie);
    movie->start();
  /*  mCamera = new QCamera(this);
    mCameraViewfinder = new QCameraViewfinder (this);
    mCameraImageCapture = new QCameraImageCapture(mCamera,this);
    mLayout= new QVBoxLayout;*/
   // mLayout->addItem(mCameraVieufinder);


    //QPaintEvent *e;
    /*animation =  new QPropertyAnimation(ui->market,"geometry");
    animation->setDuration(10000000);
    animation->setStartValue(ui->market->geometry());
    animation->setEndValue(QRect(600,300,191,71));
    animation->start();*/
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
            db.setDatabaseName("gestionproduit");
            db.setUserName("jalleli");
            db.setPassword("esprit18");
            if(db.open())
            {
                QMessageBox::information(this,"info","connexion reussie");
            }

            else

            {
                QMessageBox::information(this,"info","connexion fail");
            }

}

MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_pushButton_clicked()
{

    int i=0;
    int j=0;
    int x=0;
    for(i=0;i<10;i++){
      do
        {
            j++;

        }while(j<1000000);
x+=10;
        ui->bar->setValue(x);
    }

    menu m;
        m.setModal(true);
        m.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    i++;
    if (i % 2==0){
        player->stop();
    }else{
        player = new QMediaPlayer(this);
        //connect (player,&QMediaPlayer::positionChanged,this,&MainWindow::posvol);

        player->setMedia(QUrl::fromLocalFile("C:/Users/ASUS/Desktop/music/[EXCLU] Soolking Guérilla PlanèteRap.mp3"));
    player->play();
    }
}

/*void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    player->setPosition(position);
}
void MainWindow::posvol(qint64 position){
    ui->vol->setValue(position);

}*/


