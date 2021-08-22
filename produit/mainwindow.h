#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "produit.h"
#include<QPropertyAnimation>
#include<QtGui>
#include<QtCore>
#include<QMediaPlayer>
#include <QDebug>
#include<QWidget>
#include<QGraphicsScene>
namespace Ui {
class MainWindow;
}
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();








private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_sliderMoved(int position);
    void posvol(qint64 position);

private:
    Ui::MainWindow *ui;
    produit tmpproduit;
    QPropertyAnimation *animation;
    QMediaPlayer* player;
    int i=0;
    QCamera *mCamera;
    QCameraViewfinder *mCameraViewfinder;
    QCameraImageCapture *mCameraImageCapture;
    QVBoxLayout *mLayout;
};

#endif // MAINWINDOW_H
