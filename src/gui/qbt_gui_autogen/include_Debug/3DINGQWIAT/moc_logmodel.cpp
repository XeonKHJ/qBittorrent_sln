/****************************************************************************
** Meta object code from reading C++ file 'logmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/gui/log/logmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogMessageModel_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogMessageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogMessageModel_t qt_meta_stringdata_LogMessageModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LogMessageModel"
QT_MOC_LITERAL(1, 16, 16), // "handleNewMessage"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "Log::Msg"
QT_MOC_LITERAL(4, 43, 7) // "message"

    },
    "LogMessageModel\0handleNewMessage\0\0"
    "Log::Msg\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogMessageModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void LogMessageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogMessageModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleNewMessage((*reinterpret_cast< const Log::Msg(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogMessageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseLogModel::staticMetaObject>(),
    qt_meta_stringdata_LogMessageModel.data,
    qt_meta_data_LogMessageModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogMessageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogMessageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogMessageModel.stringdata0))
        return static_cast<void*>(this);
    return BaseLogModel::qt_metacast(_clname);
}

int LogMessageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseLogModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_LogPeerModel_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogPeerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogPeerModel_t qt_meta_stringdata_LogPeerModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LogPeerModel"
QT_MOC_LITERAL(1, 13, 16), // "handleNewMessage"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "Log::Peer"
QT_MOC_LITERAL(4, 41, 4) // "peer"

    },
    "LogPeerModel\0handleNewMessage\0\0Log::Peer\0"
    "peer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogPeerModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void LogPeerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogPeerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleNewMessage((*reinterpret_cast< const Log::Peer(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogPeerModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseLogModel::staticMetaObject>(),
    qt_meta_stringdata_LogPeerModel.data,
    qt_meta_data_LogPeerModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogPeerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogPeerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogPeerModel.stringdata0))
        return static_cast<void*>(this);
    return BaseLogModel::qt_metacast(_clname);
}

int LogPeerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseLogModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
