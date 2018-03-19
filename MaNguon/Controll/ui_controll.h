/********************************************************************************
** Form generated from reading UI file 'controll.ui'
**
** Created: Mon Jun 18 17:06:35 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLL_H
#define UI_CONTROLL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Controll
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Controll)
    {
        if (Controll->objectName().isEmpty())
            Controll->setObjectName(QString::fromUtf8("Controll"));
        Controll->resize(273, 306);
        Controll->setCursor(QCursor(Qt::SizeAllCursor));
        Controll->setFocusPolicy(Qt::ClickFocus);
        Controll->setContextMenuPolicy(Qt::DefaultContextMenu);
        Controll->setLayoutDirection(Qt::LeftToRight);
        Controll->setAutoFillBackground(false);
        Controll->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(Controll);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 10, 71, 51));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 70, 71, 51));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 130, 71, 51));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(180, 70, 71, 51));
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 71, 21));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 70, 71, 51));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 190, 71, 51));
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(100, 190, 71, 51));
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 190, 71, 51));
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        Controll->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Controll);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 273, 23));
        Controll->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Controll);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Controll->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Controll);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Controll->setStatusBar(statusBar);

        retranslateUi(Controll);

        QMetaObject::connectSlotsByName(Controll);
    } // setupUi

    void retranslateUi(QMainWindow *Controll)
    {
        Controll->setWindowTitle(QApplication::translate("Controll", "Controll", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Controll", "Up", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Controll", "Left", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Controll", "Down", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Controll", "Right", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Controll", "Wait...", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Controll", "Stop", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Controll", "<<", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Controll", "^", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Controll", ">>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Controll: public Ui_Controll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLL_H
