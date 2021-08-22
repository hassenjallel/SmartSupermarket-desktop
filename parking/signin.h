#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>

namespace Ui {
class signin;
}

class signin : public QDialog
{
    Q_OBJECT

public:
    explicit signin(QWidget *parent = nullptr);
    ~signin();

private slots:
    void on_login_clicked();

    void on_logincancel_clicked();

private:
    Ui::signin *ui;
};

#endif // SIGNIN_H
