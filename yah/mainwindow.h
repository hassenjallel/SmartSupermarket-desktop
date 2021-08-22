#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSystemTrayIcon>
#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMediaPlayer *player;

private slots:
    void on_pushButton_Login_clicked();

    void on_commandLinkButton_gotoIns_clicked();

    void on_pushButton_Inscription_clicked();

    void on_commandLinkButton_AjouterFac_clicked();

    void on_commandLinkButton_ConsulterFac_clicked();

    void on_commandLinkButton_SupprimerFac_clicked();

    void on_commandLinkButton_ModifieFac_clicked();

    void on_commandLinkButton_ImprimerFac_clicked();

    void on_commandLinkButton_HistoriqueAcces_clicked();

    void on_pushButton_AjouterProd_clicked();

    void on_commandLinkButton_AjouterFac_2_clicked();

    void on_lineEdit_RechercheFac_cursorPositionChanged(int arg1, int arg2);

    void on_commandLinkButton_SupprimerFact_clicked();



    void on_comboBox_idFactCon_currentIndexChanged(int index);

    void on_return_2_clicked();

    void on_return_3_clicked();

    void on_return_4_clicked();

    void on_return_5_clicked();

    void on_return_6_clicked();

    void on_return_7_clicked();

    void on_return_8_clicked();


    void on_comboBox_IDFactureS_currentIndexChanged(int index);

    void on_comboBox_IDM_currentIndexChanged(int index);

    void on_comboBox_IDFactureS_currentIndexChanged(const QString &arg1);

    void on_play_clicked();

    void on_pause_clicked();

    ///son w fazet
    void on_SliderVolume_sliderMoved(int position);
    ///

    void on_commandLinkButton_ModifierFact_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_return_9_clicked();

    void on_commandLinkButton_ImprimerFac_2_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_commandLinkButton_2_clicked();

    void on_label_15_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    QSystemTrayIcon *notifier;
};

#endif // MAINWINDOW_H
