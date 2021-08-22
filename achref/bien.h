#ifndef BIEN_H
#define BIEN_H
#include "employer.h"
#include <QDialog>
#include "utilisateurs.h"
namespace Ui {
class bien;
}

class bien : public QDialog
{
    Q_OBJECT

public:
    explicit bien(QWidget *parent = nullptr);
    ~bien();
private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

private:
    Ui::bien *ui;
    employer tmpemployer;
    utilisateurs tmputilisateur;
};

#endif // BIEN_H
