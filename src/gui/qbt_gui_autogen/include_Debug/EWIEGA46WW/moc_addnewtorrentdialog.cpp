/****************************************************************************
** Meta object code from reading C++ file 'addnewtorrentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/gui/addnewtorrentdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addnewtorrentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddNewTorrentDialog_t {
    QByteArrayData data[19];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddNewTorrentDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddNewTorrentDialog_t qt_meta_stringdata_AddNewTorrentDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AddNewTorrentDialog"
QT_MOC_LITERAL(1, 20, 22), // "displayContentTreeMenu"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 20), // "updateDiskSpaceLabel"
QT_MOC_LITERAL(4, 65, 17), // "onSavePathChanged"
QT_MOC_LITERAL(5, 83, 7), // "newPath"
QT_MOC_LITERAL(6, 91, 14), // "updateMetadata"
QT_MOC_LITERAL(7, 106, 23), // "BitTorrent::TorrentInfo"
QT_MOC_LITERAL(8, 130, 8), // "metadata"
QT_MOC_LITERAL(9, 139, 22), // "handleDownloadFinished"
QT_MOC_LITERAL(10, 162, 19), // "Net::DownloadResult"
QT_MOC_LITERAL(11, 182, 6), // "result"
QT_MOC_LITERAL(12, 189, 10), // "TMMChanged"
QT_MOC_LITERAL(13, 200, 5), // "index"
QT_MOC_LITERAL(14, 206, 15), // "categoryChanged"
QT_MOC_LITERAL(15, 222, 25), // "doNotDeleteTorrentClicked"
QT_MOC_LITERAL(16, 248, 7), // "checked"
QT_MOC_LITERAL(17, 256, 6), // "accept"
QT_MOC_LITERAL(18, 263, 6) // "reject"

    },
    "AddNewTorrentDialog\0displayContentTreeMenu\0"
    "\0updateDiskSpaceLabel\0onSavePathChanged\0"
    "newPath\0updateMetadata\0BitTorrent::TorrentInfo\0"
    "metadata\0handleDownloadFinished\0"
    "Net::DownloadResult\0result\0TMMChanged\0"
    "index\0categoryChanged\0doNotDeleteTorrentClicked\0"
    "checked\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddNewTorrentDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       3,    0,   67,    2, 0x08 /* Private */,
       4,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      14,    1,   80,    2, 0x08 /* Private */,
      15,    1,   83,    2, 0x08 /* Private */,
      17,    0,   86,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddNewTorrentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddNewTorrentDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayContentTreeMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->updateDiskSpaceLabel(); break;
        case 2: _t->onSavePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateMetadata((*reinterpret_cast< const BitTorrent::TorrentInfo(*)>(_a[1]))); break;
        case 4: _t->handleDownloadFinished((*reinterpret_cast< const Net::DownloadResult(*)>(_a[1]))); break;
        case 5: _t->TMMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->categoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->doNotDeleteTorrentClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->accept(); break;
        case 9: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BitTorrent::TorrentInfo >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddNewTorrentDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddNewTorrentDialog.data,
    qt_meta_data_AddNewTorrentDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddNewTorrentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddNewTorrentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddNewTorrentDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddNewTorrentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
