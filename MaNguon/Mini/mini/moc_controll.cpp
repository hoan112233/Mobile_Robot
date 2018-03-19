/****************************************************************************
** Meta object code from reading C++ file 'controll.h'
**
** Created: Tue May 29 19:47:10 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "controll.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controll.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_controll[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   10,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_controll[] = {
    "controll\0\0from,message\0"
    "appendMessage(QString,QString)\0"
};

const QMetaObject controll::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_controll,
      qt_meta_data_controll, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &controll::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *controll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *controll::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_controll))
        return static_cast<void*>(const_cast< controll*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int controll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: appendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
