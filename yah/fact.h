#ifndef FACT_H
#define FACT_H

#include <QDialog>

namespace Ui {
class fact;

}

class fact : public QDialog
{
    Q_OBJECT

public:
    explicit fact(QWidget *parent = nullptr);
    ~fact();
    int j=0;
    int i=1;
    int nbfacture;
    int k=0;
    Ui::fact *ui;


private slots:

    void on_pushButton_AjouterProd_clicked();

    void on_commandLinkButton_AjouterFac_2_clicked();

    void on_lineEdit_RechercheFac_cursorPositionChanged(int arg1, int arg2);

    void on_commandLinkButton_SupprimerFact_clicked();


    void on_comboBox_idFactCon_currentIndexChanged(int index);

    void on_return_4_clicked();

    void on_comboBox_IDFactureS_currentIndexChanged(int index);

    void on_comboBox_IDM_currentIndexChanged(int index);

    void on_comboBox_IDFactureS_currentIndexChanged(const QString &arg1);


    void on_tabWidget_tabBarClicked(int index);
    void on_commandLinkButton_ModifierFact_clicked();
};

#endif // FACT_H
