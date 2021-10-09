/****************************************************************************
** Meta object code from reading C++ file 'reverseresolution.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/base/net/reverseresolution.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reverseresolution.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Net__ReverseResolution_t {
    QByteArrayData data[9];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Net__ReverseResolution_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Net__ReverseResolution_t qt_meta_stringdata_Net__ReverseResolution = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Net::ReverseResolution"
QT_MOC_LITERAL(1, 23, 10), // "ipResolved"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "QHostAddress"
QT_MOC_LITERAL(4, 48, 2), // "ip"
QT_MOC_LITERAL(5, 51, 8), // "hostname"
QT_MOC_LITERAL(6, 60, 12), // "hostResolved"
QT_MOC_LITERAL(7, 73, 9), // "QHostInfo"
QT_MOC_LITERAL(8, 83, 4) // "host"

    },
    "Net::ReverseResolution\0ipResolved\0\0"
    "QHostAddress\0ip\0hostname\0hostResolved\0"
    "QHostInfo\0host"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Net__ReverseResolution[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void Net::ReverseResolution::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReverseResolution *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ipResolved((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->hostResolved((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReverseResolution::*)(const QHostAddress & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReverseResolution::ipResolved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Net::ReverseResolution::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Net__ReverseResolution.data,
    qt_meta_data_Net__ReverseResolution,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Net::ReverseResolution::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Net::ReverseResolution::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Net__ReverseResolution.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Net::ReverseResolution::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Net::ReverseResolution::ipResolved(const QHostAddress & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
