/****************************************************************************
** Meta object code from reading C++ file 'huedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/dialogs/huedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'huedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HueDialog_t {
    QByteArrayData data[18];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HueDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HueDialog_t qt_meta_stringdata_HueDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HueDialog"
QT_MOC_LITERAL(1, 10, 17), // "huePreviewChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "image"
QT_MOC_LITERAL(4, 35, 8), // "colorize"
QT_MOC_LITERAL(5, 44, 5), // "color"
QT_MOC_LITERAL(6, 50, 7), // "degrees"
QT_MOC_LITERAL(7, 58, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(8, 91, 5), // "value"
QT_MOC_LITERAL(9, 97, 18), // "on_method1_toggled"
QT_MOC_LITERAL(10, 116, 8), // "setColor"
QT_MOC_LITERAL(11, 125, 8), // "QWidget*"
QT_MOC_LITERAL(12, 134, 10), // "colorLabel"
QT_MOC_LITERAL(13, 145, 15), // "showColorDialog"
QT_MOC_LITERAL(14, 161, 17), // "getColorFromLabel"
QT_MOC_LITERAL(15, 179, 13), // "writeSettings"
QT_MOC_LITERAL(16, 193, 6), // "window"
QT_MOC_LITERAL(17, 200, 12) // "readSettings"

    },
    "HueDialog\0huePreviewChanged\0\0image\0"
    "colorize\0color\0degrees\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "on_method1_toggled\0setColor\0QWidget*\0"
    "colorLabel\0showColorDialog\0getColorFromLabel\0"
    "writeSettings\0window\0readSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HueDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   63,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    2,   67,    2, 0x08 /* Private */,
      13,    1,   72,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,
      15,    1,   78,    2, 0x08 /* Private */,
      17,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::Bool, QMetaType::QColor, QMetaType::Int,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor, 0x80000000 | 11,    5,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::QColor, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   16,
    QMetaType::Void, 0x80000000 | 11,   16,

       0        // eod
};

void HueDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HueDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->huePreviewChanged((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_method1_toggled(); break;
        case 3: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 4: _t->showColorDialog((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 5: { QColor _r = _t->getColorFromLabel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->writeSettings((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 7: _t->readSettings((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 7:
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
            using _t = void (HueDialog::*)(QImage , bool , QColor , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HueDialog::huePreviewChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HueDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HueDialog.data,
    qt_meta_data_HueDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HueDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HueDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HueDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HueDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void HueDialog::huePreviewChanged(QImage _t1, bool _t2, QColor _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
