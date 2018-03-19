/********************************************************************************
** Form generated from reading UI file 'controll.ui'
**
** Created: Tue May 29 19:46:53 2012
**      by: Qt User Interface Compiler version 4.6.3
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
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_controll
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *controll)
    {
        if (controll->objectName().isEmpty())
            controll->setObjectName(QString::fromUtf8("controll"));
        controll->resize(204, 166);
        centralWidget = new QWidget(controll);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 62, 17));
        controll->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(controll);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 204, 23));
        controll->setMenuBar(menuBar);
        mainToolBar = new QToolBar(controll);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        controll->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(controll);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        controll->setStatusBar(statusBar);

        retranslateUi(controll);

        QMetaObject::connectSlotsByName(controll);
    } // setupUi

    void retranslateUi(QMainWindow *controll)
    {
        controll->setWindowTitle(QApplication::translate("controll", "controll", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("controll", "Wait...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class controll: public Ui_controll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLL_H
