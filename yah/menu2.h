#ifndef MENU2_H
#define MENU2_H

#include <QDialog>

namespace Ui {
class menu2;
}

class menu2 : public QDialog
{
    Q_OBJECT

public:
    explicit menu2(QWidget *parent = nullptr);
    ~menu2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::menu2 *ui;
};

#endif // MENU2_H
