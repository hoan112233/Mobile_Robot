#ifndef CONTROLL_H
#define CONTROLL_H

#include <QMainWindow>
#include "ui_controll.h"
#include "client.h"
namespace Ui {
class controll;
}

class controll : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit controll(QWidget *parent = 0);
    ~controll();
public slots:
    void appendMessage(const QString &from, const QString &message);
    
private:
    Client client;
    QString myNickName;
    Ui::controll *ui;
};

#endif // CONTROLL_H
