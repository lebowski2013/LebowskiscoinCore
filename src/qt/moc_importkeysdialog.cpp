/****************************************************************************
** Meta object code from reading C++ file 'importkeysdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/importkeysdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importkeysdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImportKeysDialog_t {
    QByteArrayData data[13];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImportKeysDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImportKeysDialog_t qt_meta_stringdata_ImportKeysDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ImportKeysDialog"
QT_MOC_LITERAL(1, 17, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "rescanWallet"
QT_MOC_LITERAL(4, 44, 8), // "CWallet*"
QT_MOC_LITERAL(5, 53, 12), // "CBlockIndex*"
QT_MOC_LITERAL(6, 66, 16), // "setOkButtonState"
QT_MOC_LITERAL(7, 83, 6), // "fState"
QT_MOC_LITERAL(8, 90, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(9, 113, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(10, 133, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(11, 157, 17), // "resetDialogValues"
QT_MOC_LITERAL(12, 175, 9) // "importKey"

    },
    "ImportKeysDialog\0stopExecutor\0\0"
    "rescanWallet\0CWallet*\0CBlockIndex*\0"
    "setOkButtonState\0fState\0on_resetButton_clicked\0"
    "on_okButton_clicked\0on_cancelButton_clicked\0"
    "resetDialogValues\0importKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImportKeysDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 5,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void ImportKeysDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImportKeysDialog *_t = static_cast<ImportKeysDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->rescanWallet((*reinterpret_cast< CWallet*(*)>(_a[1])),(*reinterpret_cast< CBlockIndex*(*)>(_a[2]))); break;
        case 2: _t->setOkButtonState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_resetButton_clicked(); break;
        case 4: _t->on_okButton_clicked(); break;
        case 5: _t->on_cancelButton_clicked(); break;
        case 6: _t->resetDialogValues(); break;
        case 7: { bool _r = _t->importKey();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImportKeysDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImportKeysDialog::stopExecutor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ImportKeysDialog::*_t)(CWallet * , CBlockIndex * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImportKeysDialog::rescanWallet)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ImportKeysDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImportKeysDialog.data,
      qt_meta_data_ImportKeysDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImportKeysDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImportKeysDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImportKeysDialog.stringdata0))
        return static_cast<void*>(const_cast< ImportKeysDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImportKeysDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ImportKeysDialog::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ImportKeysDialog::rescanWallet(CWallet * _t1, CBlockIndex * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
