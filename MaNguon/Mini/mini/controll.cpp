#include "controll.h"
#include "ui_controll.h"

controll::controll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::controll)
{
    ui->setupUi(this);
    connect(&client, SIGNAL(newMessage(QString,QString)),
            this, SLOT(appendMessage(QString,QString)));
   // system("echo 160 > /sys/class/gpio/export");
}
void controll::appendMessage(const QString &from, const QString &message)
{
    if (from.isEmpty() || message.isEmpty())
        return;
    if(message=="1")
    {
         system("./up.sh");
  //      system("echo high > /sys/class/gpio/gpio160/driection");
         ui->label->setText("Top");
    }
    if(message=="2")
    {
        ui->label->setText("Left");
         system("./left.sh");
    }
    if(message=="3")
    {
        system("./down.sh");
        ui->label->setText("Down");
    }
    if(message=="4")
    {
        system("./right.sh");
        ui->label->setText("Right");
    }
    if(message=="5")
    {
        system("./stop.sh");
        ui->label->setText("Stop");
    }
    if(message=="6")
    {
        system("./leftservo.sh");
        ui->label->setText("Quay trai");
    }
    if(message=="7")
    {
        system("./rightservo.sh");
        ui->label->setText("Quay phai");
    }
    if(message=="8")
    {
        system("./ceservo.sh");
        ui->label->setText("Giua");
    }
}
controll::~controll()
{
    delete ui;
}
