/****************************************************************************
** Meta object code from reading C++ file 'emywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Emy_V2-2/emywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmyWindow_t {
    QByteArrayData data[13];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmyWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmyWindow_t qt_meta_stringdata_EmyWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EmyWindow"
QT_MOC_LITERAL(1, 10, 21), // "on_stepButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "on_cycleButton_clicked"
QT_MOC_LITERAL(4, 56, 20), // "on_resButton_clicked"
QT_MOC_LITERAL(5, 77, 20), // "on_runButton_clicked"
QT_MOC_LITERAL(6, 98, 21), // "on_freqButton_clicked"
QT_MOC_LITERAL(7, 120, 20), // "on_clrButton_clicked"
QT_MOC_LITERAL(8, 141, 21), // "on_loadButton_clicked"
QT_MOC_LITERAL(9, 163, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(10, 185, 20), // "on_memButton_clicked"
QT_MOC_LITERAL(11, 206, 18), // "numButtons_clicked"
QT_MOC_LITERAL(12, 225, 20) // "runWorkWithProcessor"

    },
    "EmyWindow\0on_stepButton_clicked\0\0"
    "on_cycleButton_clicked\0on_resButton_clicked\0"
    "on_runButton_clicked\0on_freqButton_clicked\0"
    "on_clrButton_clicked\0on_loadButton_clicked\0"
    "on_editButton_clicked\0on_memButton_clicked\0"
    "numButtons_clicked\0runWorkWithProcessor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmyWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EmyWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmyWindow *_t = static_cast<EmyWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_stepButton_clicked(); break;
        case 1: _t->on_cycleButton_clicked(); break;
        case 2: _t->on_resButton_clicked(); break;
        case 3: _t->on_runButton_clicked(); break;
        case 4: _t->on_freqButton_clicked(); break;
        case 5: _t->on_clrButton_clicked(); break;
        case 6: _t->on_loadButton_clicked(); break;
        case 7: _t->on_editButton_clicked(); break;
        case 8: _t->on_memButton_clicked(); break;
        case 9: _t->numButtons_clicked(); break;
        case 10: _t->runWorkWithProcessor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EmyWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EmyWindow.data,
      qt_meta_data_EmyWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EmyWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmyWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EmyWindow.stringdata0))
        return static_cast<void*>(const_cast< EmyWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int EmyWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
