/****************************************************************************
** Meta object code from reading C++ file 'torrentfileswatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/base/torrentfileswatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torrentfileswatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TorrentFilesWatcher_t {
    QByteArrayData data[15];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorrentFilesWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorrentFilesWatcher_t qt_meta_stringdata_TorrentFilesWatcher = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TorrentFilesWatcher"
QT_MOC_LITERAL(1, 20, 16), // "watchedFolderSet"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "path"
QT_MOC_LITERAL(4, 43, 20), // "WatchedFolderOptions"
QT_MOC_LITERAL(5, 64, 7), // "options"
QT_MOC_LITERAL(6, 72, 20), // "watchedFolderRemoved"
QT_MOC_LITERAL(7, 93, 13), // "onMagnetFound"
QT_MOC_LITERAL(8, 107, 21), // "BitTorrent::MagnetUri"
QT_MOC_LITERAL(9, 129, 9), // "magnetURI"
QT_MOC_LITERAL(10, 139, 28), // "BitTorrent::AddTorrentParams"
QT_MOC_LITERAL(11, 168, 16), // "addTorrentParams"
QT_MOC_LITERAL(12, 185, 14), // "onTorrentFound"
QT_MOC_LITERAL(13, 200, 23), // "BitTorrent::TorrentInfo"
QT_MOC_LITERAL(14, 224, 11) // "torrentInfo"

    },
    "TorrentFilesWatcher\0watchedFolderSet\0"
    "\0path\0WatchedFolderOptions\0options\0"
    "watchedFolderRemoved\0onMagnetFound\0"
    "BitTorrent::MagnetUri\0magnetURI\0"
    "BitTorrent::AddTorrentParams\0"
    "addTorrentParams\0onTorrentFound\0"
    "BitTorrent::TorrentInfo\0torrentInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorrentFilesWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   42,    2, 0x08 /* Private */,
      12,    2,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 10,   14,   11,

       0        // eod
};

void TorrentFilesWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TorrentFilesWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->watchedFolderSet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const WatchedFolderOptions(*)>(_a[2]))); break;
        case 1: _t->watchedFolderRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onMagnetFound((*reinterpret_cast< const BitTorrent::MagnetUri(*)>(_a[1])),(*reinterpret_cast< const BitTorrent::AddTorrentParams(*)>(_a[2]))); break;
        case 3: _t->onTorrentFound((*reinterpret_cast< const BitTorrent::TorrentInfo(*)>(_a[1])),(*reinterpret_cast< const BitTorrent::AddTorrentParams(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BitTorrent::AddTorrentParams >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BitTorrent::AddTorrentParams >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TorrentFilesWatcher::*)(const QString & , const WatchedFolderOptions & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentFilesWatcher::watchedFolderSet)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TorrentFilesWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentFilesWatcher::watchedFolderRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TorrentFilesWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TorrentFilesWatcher.data,
    qt_meta_data_TorrentFilesWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorrentFilesWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorrentFilesWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorrentFilesWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TorrentFilesWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TorrentFilesWatcher::watchedFolderSet(const QString & _t1, const WatchedFolderOptions & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TorrentFilesWatcher::watchedFolderRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
