/****************************************************************************
** Meta object code from reading C++ file 'Tool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/tools/Tool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tool_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tool_t qt_meta_stringdata_Tool = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Tool"
QT_MOC_LITERAL(1, 5, 13), // "cursorChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 16), // "selectionChanged"
QT_MOC_LITERAL(4, 37, 7), // "painted"
QT_MOC_LITERAL(5, 45, 13), // "QPaintDevice*"
QT_MOC_LITERAL(6, 59, 11), // "paintDevice"
QT_MOC_LITERAL(7, 71, 8), // "overlaid"
QT_MOC_LITERAL(8, 80, 12), // "overlayImage"
QT_MOC_LITERAL(9, 93, 25), // "QPainter::CompositionMode"
QT_MOC_LITERAL(10, 119, 4) // "mode"

    },
    "Tool\0cursorChanged\0\0selectionChanged\0"
    "painted\0QPaintDevice*\0paintDevice\0"
    "overlaid\0overlayImage\0QPainter::CompositionMode\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    1,   40,    2, 0x06 /* Public */,
       7,    3,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QCursor,    2,
    QMetaType::Void, QMetaType::QPolygon,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QImage, 0x80000000 | 9,    6,    8,   10,

       0        // eod
};

void Tool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorChanged((*reinterpret_cast< QCursor(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< QPolygon(*)>(_a[1]))); break;
        case 2: _t->painted((*reinterpret_cast< QPaintDevice*(*)>(_a[1]))); break;
        case 3: _t->overlaid((*reinterpret_cast< QPaintDevice*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< QPainter::CompositionMode(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tool::*)(QCursor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tool::cursorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tool::*)(QPolygon );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tool::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tool::*)(QPaintDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tool::painted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Tool::*)(QPaintDevice * , const QImage & , QPainter::CompositionMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tool::overlaid)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Tool.data,
    qt_meta_data_Tool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Tool::cursorChanged(QCursor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tool::selectionChanged(QPolygon _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tool::painted(QPaintDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tool::overlaid(QPaintDevice * _t1, const QImage & _t2, QPainter::CompositionMode _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
