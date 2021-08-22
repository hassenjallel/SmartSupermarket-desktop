#include "statis.h"
#include "ui_statis.h"
#include<QSqlQuery>
statis::statis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statis)
{
    ui->setupUi(this);
    statis::makeplot();

}

statis::~statis()
{
    delete ui;
}
void statis::makeplot(){
   // QVector<double> x(101), y(101); // initialize with entries 0..100
    QLinearGradient gradient(0, 0, 0, 200);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->widget->setBackground(QBrush(gradient));

    // create empty bar chart objects:
    QCPBars *regen = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);
    regen->setAntialiased(false); // gives more crisp, pixel aligned bar borders
    // set names and colors:
    regen->setName("nombre de machines");
    regen->setPen(QPen(QColor(0, 168, 140).lighter(130)));
    regen->setBrush(QColor(0, 168, 140));
    QVector<QString> labels;
    QVector<double> ticks;
    QVector<double> regenData;
    ticks << 1 << 2 << 3 << 4 << 5 << 6 << 7;
    //labels << "jan" << "Japan" << "Germany" << "France" << "UK" << "Italy" << "Canada";
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    /*textTicker->addTicks(ticks, labels);
    ui->widget->xAxis->setTicker(textTicker);*/
    QSqlQuery q;
    q.prepare("SELECT * FROM STOCK ORDER by quantiter DESC")  ;    if(q.exec()){
    while (q.next()) {
    labels << q.value(0).toString();
    regenData   << q.value(2).toDouble();
    }
    }
    textTicker->addTicks(ticks, labels);
    ui->widget->xAxis->setTicker(textTicker);
    // prepare y axis:
    ui->widget->yAxis->setRange(0,50);

    regen->setData(ticks, regenData);
    ui->widget->replot();
}
