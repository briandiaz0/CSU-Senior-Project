/****************************************************************************
** Meta object code from reading C++ file 'colorboxwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/widgets/colorboxwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorboxwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorBoxWidget_t {
    QByteArrayData data[9];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorBoxWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorBoxWidget_t qt_meta_stringdata_ColorBoxWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ColorBoxWidget"
QT_MOC_LITERAL(1, 15, 19), // "primaryColorChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "color"
QT_MOC_LITERAL(4, 42, 21), // "secondaryColorChanged"
QT_MOC_LITERAL(5, 64, 26), // "on_swapColorButton_clicked"
QT_MOC_LITERAL(6, 91, 19), // "on_prevPage_clicked"
QT_MOC_LITERAL(7, 111, 19), // "on_nextPage_clicked"
QT_MOC_LITERAL(8, 131, 29) // "on_colourManageButton_clicked"

    },
    "ColorBoxWidget\0primaryColorChanged\0\0"
    "color\0secondaryColorChanged\0"
    "on_swapColorButton_clicked\0"
    "on_prevPage_clicked\0on_nextPage_clicked\0"
    "on_colourManageButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorBoxWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   50,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorBoxWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->primaryColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->secondaryColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->on_swapColorButton_clicked(); break;
        case 3: _t->on_prevPage_clicked(); break;
        case 4: _t->on_nextPage_clicked(); break;
        case 5: _t->on_colourManageButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorBoxWidget::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorBoxWidget::primaryColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorBoxWidget::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorBoxWidget::secondaryColorChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorBoxWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ColorBoxWidget.data,
    qt_meta_data_ColorBoxWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorBoxWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ColorBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ColorBoxWidget::primaryColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColorBoxWidget::secondaryColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
