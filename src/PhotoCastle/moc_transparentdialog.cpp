/****************************************************************************
** Meta object code from reading C++ file 'transparentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/dialogs/transparentdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transparentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransparentDialog_t {
    QByteArrayData data[15];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransparentDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransparentDialog_t qt_meta_stringdata_TransparentDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TransparentDialog"
QT_MOC_LITERAL(1, 18, 18), // "previewTransparent"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "dialogAccepted"
QT_MOC_LITERAL(4, 53, 14), // "dialogRejected"
QT_MOC_LITERAL(5, 68, 14), // "dialogFinished"
QT_MOC_LITERAL(6, 83, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(7, 116, 5), // "value"
QT_MOC_LITERAL(8, 122, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 144, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 168, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(11, 192, 12), // "readSettings"
QT_MOC_LITERAL(12, 205, 8), // "QWidget*"
QT_MOC_LITERAL(13, 214, 6), // "window"
QT_MOC_LITERAL(14, 221, 13) // "writeSettings"

    },
    "TransparentDialog\0previewTransparent\0"
    "\0dialogAccepted\0dialogRejected\0"
    "dialogFinished\0on_horizontalSlider_valueChanged\0"
    "value\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "readSettings\0QWidget*\0window\0writeSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransparentDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       3,    0,   69,    2, 0x06 /* Public */,
       4,    0,   70,    2, 0x06 /* Public */,
       5,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   74,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void TransparentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransparentDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previewTransparent((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->dialogAccepted(); break;
        case 2: _t->dialogRejected(); break;
        case 3: _t->dialogFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->readSettings((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 9: _t->writeSettings((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransparentDialog::*)(QColor , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransparentDialog::previewTransparent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransparentDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransparentDialog::dialogAccepted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransparentDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransparentDialog::dialogRejected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TransparentDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransparentDialog::dialogFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransparentDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TransparentDialog.data,
    qt_meta_data_TransparentDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransparentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransparentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransparentDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TransparentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TransparentDialog::previewTransparent(QColor _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransparentDialog::dialogAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TransparentDialog::dialogRejected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TransparentDialog::dialogFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
