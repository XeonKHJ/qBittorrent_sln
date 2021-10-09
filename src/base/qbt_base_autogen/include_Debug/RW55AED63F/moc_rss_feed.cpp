/****************************************************************************
** Meta object code from reading C++ file 'rss_feed.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/base/rss/rss_feed.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rss_feed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSS__Feed_t {
    QByteArrayData data[20];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSS__Feed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSS__Feed_t qt_meta_stringdata_RSS__Feed = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RSS::Feed"
QT_MOC_LITERAL(1, 10, 10), // "iconLoaded"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "Feed*"
QT_MOC_LITERAL(4, 28, 4), // "feed"
QT_MOC_LITERAL(5, 33, 12), // "titleChanged"
QT_MOC_LITERAL(6, 46, 12), // "stateChanged"
QT_MOC_LITERAL(7, 59, 37), // "handleSessionProcessingEnable..."
QT_MOC_LITERAL(8, 97, 7), // "enabled"
QT_MOC_LITERAL(9, 105, 31), // "handleMaxArticlesPerFeedChanged"
QT_MOC_LITERAL(10, 137, 1), // "n"
QT_MOC_LITERAL(11, 139, 26), // "handleIconDownloadFinished"
QT_MOC_LITERAL(12, 166, 19), // "Net::DownloadResult"
QT_MOC_LITERAL(13, 186, 6), // "result"
QT_MOC_LITERAL(14, 193, 22), // "handleDownloadFinished"
QT_MOC_LITERAL(15, 216, 21), // "handleParsingFinished"
QT_MOC_LITERAL(16, 238, 22), // "Private::ParsingResult"
QT_MOC_LITERAL(17, 261, 17), // "handleArticleRead"
QT_MOC_LITERAL(18, 279, 8), // "Article*"
QT_MOC_LITERAL(19, 288, 7) // "article"

    },
    "RSS::Feed\0iconLoaded\0\0Feed*\0feed\0"
    "titleChanged\0stateChanged\0"
    "handleSessionProcessingEnabledChanged\0"
    "enabled\0handleMaxArticlesPerFeedChanged\0"
    "n\0handleIconDownloadFinished\0"
    "Net::DownloadResult\0result\0"
    "handleDownloadFinished\0handleParsingFinished\0"
    "Private::ParsingResult\0handleArticleRead\0"
    "Article*\0article"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSS__Feed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       1,    0,   77,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   78,    2, 0x06 /* Public */,
       5,    0,   81,    2, 0x26 /* Public | MethodCloned */,
       6,    1,   82,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      14,    1,   95,    2, 0x08 /* Private */,
      15,    1,   98,    2, 0x08 /* Private */,
      17,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 16,   13,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void RSS::Feed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Feed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconLoaded((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 1: _t->iconLoaded(); break;
        case 2: _t->titleChanged((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 3: _t->titleChanged(); break;
        case 4: _t->stateChanged((*reinterpret_cast< Feed*(*)>(_a[1]))); break;
        case 5: _t->stateChanged(); break;
        case 6: _t->handleSessionProcessingEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->handleMaxArticlesPerFeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handleIconDownloadFinished((*reinterpret_cast< const Net::DownloadResult(*)>(_a[1]))); break;
        case 9: _t->handleDownloadFinished((*reinterpret_cast< const Net::DownloadResult(*)>(_a[1]))); break;
        case 10: _t->handleParsingFinished((*reinterpret_cast< const Private::ParsingResult(*)>(_a[1]))); break;
        case 11: _t->handleArticleRead((*reinterpret_cast< Article*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Feed* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Feed* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Feed* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Feed::*)(Feed * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feed::iconLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Feed::*)(Feed * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feed::titleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Feed::*)(Feed * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feed::stateChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RSS::Feed::staticMetaObject = { {
    QMetaObject::SuperData::link<Item::staticMetaObject>(),
    qt_meta_stringdata_RSS__Feed.data,
    qt_meta_data_RSS__Feed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RSS::Feed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSS::Feed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSS__Feed.stringdata0))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int RSS::Feed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void RSS::Feed::iconLoaded(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void RSS::Feed::titleChanged(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void RSS::Feed::stateChanged(Feed * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
