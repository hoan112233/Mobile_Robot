#include "controll.h"
#include "ui_controll.h"
#include <QtGui>
#include <QKeyEvent>
Controll::Controll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Controll)
{
    ui->setupUi(this);

    connect(&client, SIGNAL(newMessage(QString,QString)),
            this, SLOT(appendMessage(QString,QString)));

}
void Controll::appendMessage(const QString &from, const QString &message)
{
    if (from.isEmpty() || message.isEmpty())
        return;
    if(message=="1")
        ui->label->setText("Up");
    if(message=="2")
        ui->label->setText("Left");
    if(message=="3")
        ui->label->setText("Down");
    if(message=="4")
        ui->label->setText("Right");
    if(message=="5")
        ui->label->setText("Stop");
    if(message=="6")
        ui->label->setText("camera left");
    if(message=="8")
        ui->label->setText("camera before");
    if(message=="7")
        ui->label->setText("Camera right");
}
Controll::~Controll()
{
    delete ui;
}

void Controll::on_pushButton_4_clicked()
{
    client.sendMessage("4");
}

void Controll::on_pushButton_clicked()
{
    client.sendMessage("1");
}

void Controll::on_pushButton_2_clicked()
{
     client.sendMessage("2");
}

void Controll::on_pushButton_3_clicked()
{
     client.sendMessage("3");
}


void Controll::on_pushButton_5_clicked()
{
     client.sendMessage("5");
}

void Controll::on_pushButton_6_clicked()
{
     client.sendMessage("6");
}

void Controll::on_pushButton_7_clicked()
{
     client.sendMessage("8");
}

void Controll::on_pushButton_8_clicked()
{
     client.sendMessage("7");
}

void Controll::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Up)
       client.sendMessage("1");
    if(event->key()==Qt::Key_Left)
        client.sendMessage("2");
    if(event->key()==Qt::Key_Down)
        client.sendMessage("3");
    if(event->key()==Qt::Key_Right)
        client.sendMessage("4");
    if(event->key()==Qt::Key_Space)
        client.sendMessage("5");
    if(event->key()==Qt::Key_Z)
        client.sendMessage("6");
    if(event->key()==Qt::Key_X)
        client.sendMessage("8");
    if(event->key()==Qt::Key_C)
        client.sendMessage("7");

}
