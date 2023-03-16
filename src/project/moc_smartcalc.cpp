/****************************************************************************
** Meta object code from reading C++ file 'smartcalc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "smartcalc.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartcalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SmartCalc_t {
    const uint offsetsAndSize[24];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SmartCalc_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SmartCalc_t qt_meta_stringdata_SmartCalc = {
    {
QT_MOC_LITERAL(0, 9), // "SmartCalc"
QT_MOC_LITERAL(10, 9), // "openGraph"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 12), // "digitClicked"
QT_MOC_LITERAL(34, 16), // "functionsClicked"
QT_MOC_LITERAL(51, 17), // "operationsClicked"
QT_MOC_LITERAL(69, 12), // "equalClicked"
QT_MOC_LITERAL(82, 12), // "clearClicked"
QT_MOC_LITERAL(95, 16), // "backspaceClicked"
QT_MOC_LITERAL(112, 14), // "openCreditCalc"
QT_MOC_LITERAL(127, 15), // "openDepositCalc"
QT_MOC_LITERAL(143, 8) // "get_Text"

    },
    "SmartCalc\0openGraph\0\0digitClicked\0"
    "functionsClicked\0operationsClicked\0"
    "equalClicked\0clearClicked\0backspaceClicked\0"
    "openCreditCalc\0openDepositCalc\0get_Text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartCalc[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x0a,    3 /* Public */,
       5,    0,   77,    2, 0x0a,    4 /* Public */,
       6,    0,   78,    2, 0x0a,    5 /* Public */,
       7,    0,   79,    2, 0x0a,    6 /* Public */,
       8,    0,   80,    2, 0x0a,    7 /* Public */,
       9,    0,   81,    2, 0x0a,    8 /* Public */,
      10,    0,   82,    2, 0x0a,    9 /* Public */,
      11,    0,   83,    2, 0x0a,   10 /* Public */,

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
    QMetaType::QString,

       0        // eod
};

void SmartCalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SmartCalc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openGraph(); break;
        case 1: _t->digitClicked(); break;
        case 2: _t->functionsClicked(); break;
        case 3: _t->operationsClicked(); break;
        case 4: _t->equalClicked(); break;
        case 5: _t->clearClicked(); break;
        case 6: _t->backspaceClicked(); break;
        case 7: _t->openCreditCalc(); break;
        case 8: _t->openDepositCalc(); break;
        case 9: { QString _r = _t->get_Text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject SmartCalc::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SmartCalc.offsetsAndSize,
    qt_meta_data_SmartCalc,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SmartCalc_t
, QtPrivate::TypeAndForceComplete<SmartCalc, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *SmartCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SmartCalc.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SmartCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
