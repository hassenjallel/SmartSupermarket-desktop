#include "notification.h"
#include <QSystemTrayIcon>
#include<QString>
notification::notification()
{
num=0;

}

void notification::notification_ajout(QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->setIcon(QIcon("icone.png"));
    QString s = id;
    notifyIcon->showMessage("Ajout Stock","Un nouveau Stock de  N° ID"+s+" a été ajoutée",QSystemTrayIcon::Information,15000);
//num++;
}
