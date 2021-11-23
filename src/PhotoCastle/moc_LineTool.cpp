/****************************************************************************
** Meta object code from reading C++ file 'LineTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/tools/LineTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineTool_t {
    QByteArrayData data[22];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineTool_t qt_meta_stringdata_LineTool = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LineTool"
QT_MOC_LITERAL(1, 9, 15), // "setPrimaryColor"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "color"
QT_MOC_LITERAL(4, 32, 17), // "setSecondaryColor"
QT_MOC_LITERAL(5, 50, 8), // "setWidth"
QT_MOC_LITERAL(6, 59, 5), // "width"
QT_MOC_LITERAL(7, 65, 12), // "setAntialias"
QT_MOC_LITERAL(8, 78, 9), // "antialias"
QT_MOC_LITERAL(9, 88, 10), // "setOpacity"
QT_MOC_LITERAL(10, 99, 7), // "opacity"
QT_MOC_LITERAL(11, 107, 8), // "setStyle"
QT_MOC_LITERAL(12, 116, 5), // "style"
QT_MOC_LITERAL(13, 122, 13), // "setArrowStyle"
QT_MOC_LITERAL(14, 136, 10), // "arrowStyle"
QT_MOC_LITERAL(15, 147, 9), // "drawArrow"
QT_MOC_LITERAL(16, 157, 9), // "QPainter&"
QT_MOC_LITERAL(17, 167, 7), // "painter"
QT_MOC_LITERAL(18, 175, 4), // "from"
QT_MOC_LITERAL(19, 180, 2), // "to"
QT_MOC_LITERAL(20, 183, 7), // "QPoint&"
QT_MOC_LITERAL(21, 191, 10) // "pOutMedian"

    },
    "LineTool\0setPrimaryColor\0\0color\0"
    "setSecondaryColor\0setWidth\0width\0"
    "setAntialias\0antialias\0setOpacity\0"
    "opacity\0setStyle\0style\0setArrowStyle\0"
    "arrowStyle\0drawArrow\0QPainter&\0painter\0"
    "from\0to\0QPoint&\0pOutMedian"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      15,    4,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QPoint, QMetaType::QPoint, 0x80000000 | 20,   17,   18,   19,   21,

       0        // eod
};

void LineTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPrimaryColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setSecondaryColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setAntialias((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setArrowStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->drawArrow((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< QPoint(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LineTool::staticMetaObject = { {
    QMetaObject::SuperData::link<Tool::staticMetaObject>(),
    qt_meta_stringdata_LineTool.data,
    qt_meta_data_LineTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LineTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineTool.stringdata0))
        return static_cast<void*>(this);
    return Tool::qt_metacast(_clname);
}

int LineTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tool::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
