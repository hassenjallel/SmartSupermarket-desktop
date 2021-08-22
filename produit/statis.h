#ifndef STATIS_H
#define STATIS_H

#include <QDialog>

namespace Ui {
class statis;
}

class statis : public QDialog
{
    Q_OBJECT

public:
    explicit statis(QWidget *parent = nullptr);
    ~statis();
private slots:
    void makeplot();

private:
    Ui::statis *ui;
};

#endif // STATIS_H
