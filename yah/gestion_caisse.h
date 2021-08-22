#ifndef GESTION_CAISSE_H
#define GESTION_CAISSE_H
#include "caisse.h"
#include <QDialog>

namespace Ui {
class gestion_caisse;
}

class gestion_caisse : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_caisse(QWidget *parent = nullptr);
    ~gestion_caisse();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_6_textChanged(const QString &arg1);

private:
    Ui::gestion_caisse *ui;
    caisse tmpcaisse;
};

#endif // GESTION_CAISSE_H
