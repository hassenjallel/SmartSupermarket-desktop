#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <mdp.h>
#include <bien.h>
#include <dialog.h>
#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QtSql>
#include <QFileInfo>
#include <QMessageBox>
#include <QMediaPlayer>
#include <utilisateurs.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    bien *afficher;
    Dialog *afficher1;
    mdp *afficher2;
    QMediaPlayer * player;
};

#endif // MAINWINDOW_H
