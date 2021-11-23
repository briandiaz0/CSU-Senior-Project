/****************************************************************************
** Meta object code from reading C++ file 'NewDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/dialogs/NewDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewDialog_t {
    QByteArrayData data[15];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewDialog_t qt_meta_stringdata_NewDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NewDialog"
QT_MOC_LITERAL(1, 10, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 39), // "on_imagePresetCombo_currentIn..."
QT_MOC_LITERAL(4, 73, 5), // "index"
QT_MOC_LITERAL(5, 79, 36), // "on_imageResCombo_currentIndex..."
QT_MOC_LITERAL(6, 116, 35), // "on_imageWHcombo_currentIndexC..."
QT_MOC_LITERAL(7, 152, 27), // "on_imageRvalue_valueChanged"
QT_MOC_LITERAL(8, 180, 4), // "arg1"
QT_MOC_LITERAL(9, 185, 27), // "on_imageHvalue_valueChanged"
QT_MOC_LITERAL(10, 213, 27), // "on_imageWvalue_valueChanged"
QT_MOC_LITERAL(11, 241, 13), // "writeSettings"
QT_MOC_LITERAL(12, 255, 8), // "QWidget*"
QT_MOC_LITERAL(13, 264, 6), // "window"
QT_MOC_LITERAL(14, 271, 12) // "readSettings"

    },
    "NewDialog\0on_buttonBox_accepted\0\0"
    "on_imagePresetCombo_currentIndexChanged\0"
    "index\0on_imageResCombo_currentIndexChanged\0"
    "on_imageWHcombo_currentIndexChanged\0"
    "on_imageRvalue_valueChanged\0arg1\0"
    "on_imageHvalue_valueChanged\0"
    "on_imageWvalue_valueChanged\0writeSettings\0"
    "QWidget*\0window\0readSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      14,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void NewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_imagePresetCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_imageResCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_imageWHcombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_imageRvalue_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_imageHvalue_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_imageWvalue_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->writeSettings((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 8: _t->readSettings((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NewDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_NewDialog.data,
    qt_meta_data_NewDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QComboBoxEventsInterface"))
        return static_cast< QComboBoxEventsInterface*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
