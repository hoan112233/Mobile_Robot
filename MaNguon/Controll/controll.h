#ifndef CONTROLL_H
#define CONTROLL_H

#include <QMainWindow>
#include "ui_controll.h"
#include "client.h"

namespace Ui {
class Controll;
}

class Controll : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Controll(QWidget *parent = 0);
    ~Controll();
public slots:
    void appendMessage(const QString &from, const QString &message);
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

protected:
    void keyPressEvent(QKeyEvent *);
   // void keyReleaseEvent(QKeyEvent *);

private:
    Client client;
    QString myNickName;
    Ui::Controll *ui;

};

#endif // CONTROLL_H
