/****************************************************************************
** Meta object code from reading C++ file 'peerlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/gui/properties/peerlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peerlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PeerListWidget_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PeerListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PeerListWidget_t qt_meta_stringdata_PeerListWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PeerListWidget"
QT_MOC_LITERAL(1, 15, 12), // "loadSettings"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "saveSettings"
QT_MOC_LITERAL(4, 42, 24), // "displayToggleColumnsMenu"
QT_MOC_LITERAL(5, 67, 16), // "showPeerListMenu"
QT_MOC_LITERAL(6, 84, 16), // "banSelectedPeers"
QT_MOC_LITERAL(7, 101, 17), // "copySelectedPeers"
QT_MOC_LITERAL(8, 119, 23), // "handleSortColumnChanged"
QT_MOC_LITERAL(9, 143, 3), // "col"
QT_MOC_LITERAL(10, 147, 14), // "handleResolved"
QT_MOC_LITERAL(11, 162, 12), // "QHostAddress"
QT_MOC_LITERAL(12, 175, 2), // "ip"
QT_MOC_LITERAL(13, 178, 8) // "hostname"

    },
    "PeerListWidget\0loadSettings\0\0saveSettings\0"
    "displayToggleColumnsMenu\0showPeerListMenu\0"
    "banSelectedPeers\0copySelectedPeers\0"
    "handleSortColumnChanged\0col\0handleResolved\0"
    "QHostAddress\0ip\0hostname"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PeerListWidget[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       5,    1,   59,    2, 0x08 /* Private */,
       6,    0,   62,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
      10,    2,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   13,

       0        // eod
};

void PeerListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PeerListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadSettings(); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->displayToggleColumnsMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->showPeerListMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->banSelectedPeers(); break;
        case 5: _t->copySelectedPeers(); break;
        case 6: _t->handleSortColumnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->handleResolved((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PeerListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_PeerListWidget.data,
    qt_meta_data_PeerListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PeerListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PeerListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PeerListWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int PeerListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
