/****************************************************************************
** Meta object code from reading C++ file 'deposit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "deposit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deposit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Deposit_t {
    const uint offsetsAndSize[46];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Deposit_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Deposit_t qt_meta_stringdata_Deposit = {
    {
QT_MOC_LITERAL(0, 7), // "Deposit"
QT_MOC_LITERAL(8, 16), // "calculateDeposit"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 14), // "capitalClicked"
QT_MOC_LITERAL(41, 8), // "date_now"
QT_MOC_LITERAL(50, 8), // "date_end"
QT_MOC_LITERAL(59, 3), // "sum"
QT_MOC_LITERAL(63, 4), // "rate"
QT_MOC_LITERAL(68, 9), // "limit_tax"
QT_MOC_LITERAL(78, 10), // "sum_replen"
QT_MOC_LITERAL(89, 9), // "sum_withd"
QT_MOC_LITERAL(99, 8), // "sum_prec"
QT_MOC_LITERAL(108, 11), // "date_replen"
QT_MOC_LITERAL(120, 10), // "date_withd"
QT_MOC_LITERAL(131, 11), // "date_payout"
QT_MOC_LITERAL(143, 8), // "date_tax"
QT_MOC_LITERAL(152, 4), // "NDFL"
QT_MOC_LITERAL(157, 9), // "NDFL_year"
QT_MOC_LITERAL(167, 17), // "capitalNotClicked"
QT_MOC_LITERAL(185, 24), // "on_Box_vyplaty_activated"
QT_MOC_LITERAL(210, 5), // "index"
QT_MOC_LITERAL(216, 23), // "on_Box_popoln_activated"
QT_MOC_LITERAL(240, 22) // "on_Box_snyat_activated"

    },
    "Deposit\0calculateDeposit\0\0capitalClicked\0"
    "date_now\0date_end\0sum\0rate\0limit_tax\0"
    "sum_replen\0sum_withd\0sum_prec\0date_replen\0"
    "date_withd\0date_payout\0date_tax\0NDFL\0"
    "NDFL_year\0capitalNotClicked\0"
    "on_Box_vyplaty_activated\0index\0"
    "on_Box_popoln_activated\0on_Box_snyat_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Deposit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,   14,   51,    2, 0x08,    2 /* Private */,
      18,   13,   80,    2, 0x08,   17 /* Private */,
      19,    1,  107,    2, 0x08,   31 /* Private */,
      21,    1,  110,    2, 0x08,   33 /* Private */,
      22,    1,  113,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate, QMetaType::QDate, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QDate, QMetaType::QDate, QMetaType::QDate, QMetaType::QDate, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QDate, QMetaType::QDate, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QDate, QMetaType::QDate, QMetaType::QDate, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   15,   16,   17,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void Deposit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Deposit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->calculateDeposit(); break;
        case 1: _t->capitalClicked((*reinterpret_cast< QDate(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< QDate(*)>(_a[9])),(*reinterpret_cast< QDate(*)>(_a[10])),(*reinterpret_cast< QDate(*)>(_a[11])),(*reinterpret_cast< QDate(*)>(_a[12])),(*reinterpret_cast< double(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14]))); break;
        case 2: _t->capitalNotClicked((*reinterpret_cast< QDate(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< QDate(*)>(_a[9])),(*reinterpret_cast< QDate(*)>(_a[10])),(*reinterpret_cast< QDate(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< double(*)>(_a[13]))); break;
        case 3: _t->on_Box_vyplaty_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Box_popoln_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Box_snyat_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Deposit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Deposit.offsetsAndSize,
    qt_meta_data_Deposit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Deposit_t
, QtPrivate::TypeAndForceComplete<Deposit, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Deposit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Deposit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Deposit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Deposit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
