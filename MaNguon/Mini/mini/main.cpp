#include <QApplication>

#include "controll.h"
#ifdef Q_OS_SYMBIAN
#include "sym_iap_util.h"
#endif


int main(int argc, char *argv[])
{
#ifdef Q_OS_SYMBIAN
    qt_SetDefaultIap();
#endif
    QApplication app(argc, argv);
    controll w;
#ifdef Q_OS_SYMBIAN
    w.showMaximized();
 #else
    w.show();
#endif
    return app.exec();
}
