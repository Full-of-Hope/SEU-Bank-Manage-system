/****************************************************************************
** Meta object code from reading C++ file 'accountlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../accountlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_accountlist_t {
    QByteArrayData data[8];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_accountlist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_accountlist_t qt_meta_stringdata_accountlist = {
    {
QT_MOC_LITERAL(0, 0, 11), // "accountlist"
QT_MOC_LITERAL(1, 12, 33), // "on_accountlist_backButton_cli..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 35), // "on_accountlist_exportButton_c..."
QT_MOC_LITERAL(4, 83, 23), // "on_dateEdit_dateChanged"
QT_MOC_LITERAL(5, 107, 4), // "date"
QT_MOC_LITERAL(6, 112, 37), // "on_accountlist_searchEdit_tex..."
QT_MOC_LITERAL(7, 150, 4) // "arg1"

    },
    "accountlist\0on_accountlist_backButton_clicked\0"
    "\0on_accountlist_exportButton_clicked\0"
    "on_dateEdit_dateChanged\0date\0"
    "on_accountlist_searchEdit_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_accountlist[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void accountlist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        accountlist *_t = static_cast<accountlist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_accountlist_backButton_clicked(); break;
        case 1: _t->on_accountlist_exportButton_clicked(); break;
        case 2: _t->on_dateEdit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->on_accountlist_searchEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject accountlist::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_accountlist.data,
      qt_meta_data_accountlist,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *accountlist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *accountlist::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_accountlist.stringdata0))
        return static_cast<void*>(const_cast< accountlist*>(this));
    return QWidget::qt_metacast(_clname);
}

int accountlist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
