/****************************************************************************
** Meta object code from reading C++ file 'transferlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/gui/transferlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransferListWidget_t {
    QByteArrayData data[67];
    char stringdata0[1293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransferListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransferListWidget_t qt_meta_stringdata_TransferListWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TransferListWidget"
QT_MOC_LITERAL(1, 19, 21), // "currentTorrentChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 25), // "BitTorrent::Torrent*const"
QT_MOC_LITERAL(4, 68, 7), // "torrent"
QT_MOC_LITERAL(5, 76, 20), // "setSelectionCategory"
QT_MOC_LITERAL(6, 97, 8), // "category"
QT_MOC_LITERAL(7, 106, 15), // "addSelectionTag"
QT_MOC_LITERAL(8, 122, 3), // "tag"
QT_MOC_LITERAL(9, 126, 18), // "removeSelectionTag"
QT_MOC_LITERAL(10, 145, 18), // "clearSelectionTags"
QT_MOC_LITERAL(11, 164, 27), // "setSelectedTorrentsLocation"
QT_MOC_LITERAL(12, 192, 16), // "pauseAllTorrents"
QT_MOC_LITERAL(13, 209, 17), // "resumeAllTorrents"
QT_MOC_LITERAL(14, 227, 21), // "startSelectedTorrents"
QT_MOC_LITERAL(15, 249, 26), // "forceStartSelectedTorrents"
QT_MOC_LITERAL(16, 276, 20), // "startVisibleTorrents"
QT_MOC_LITERAL(17, 297, 21), // "pauseSelectedTorrents"
QT_MOC_LITERAL(18, 319, 20), // "pauseVisibleTorrents"
QT_MOC_LITERAL(19, 340, 26), // "softDeleteSelectedTorrents"
QT_MOC_LITERAL(20, 367, 26), // "permDeleteSelectedTorrents"
QT_MOC_LITERAL(21, 394, 22), // "deleteSelectedTorrents"
QT_MOC_LITERAL(22, 417, 16), // "deleteLocalFiles"
QT_MOC_LITERAL(23, 434, 21), // "deleteVisibleTorrents"
QT_MOC_LITERAL(24, 456, 32), // "increaseQueuePosSelectedTorrents"
QT_MOC_LITERAL(25, 489, 32), // "decreaseQueuePosSelectedTorrents"
QT_MOC_LITERAL(26, 522, 27), // "topQueuePosSelectedTorrents"
QT_MOC_LITERAL(27, 550, 30), // "bottomQueuePosSelectedTorrents"
QT_MOC_LITERAL(28, 581, 22), // "copySelectedMagnetURIs"
QT_MOC_LITERAL(29, 604, 17), // "copySelectedNames"
QT_MOC_LITERAL(30, 622, 22), // "copySelectedInfohashes"
QT_MOC_LITERAL(31, 645, 18), // "CopyInfohashPolicy"
QT_MOC_LITERAL(32, 664, 6), // "policy"
QT_MOC_LITERAL(33, 671, 15), // "copySelectedIDs"
QT_MOC_LITERAL(34, 687, 26), // "openSelectedTorrentsFolder"
QT_MOC_LITERAL(35, 714, 23), // "recheckSelectedTorrents"
QT_MOC_LITERAL(36, 738, 26), // "reannounceSelectedTorrents"
QT_MOC_LITERAL(37, 765, 17), // "setTorrentOptions"
QT_MOC_LITERAL(38, 783, 23), // "previewSelectedTorrents"
QT_MOC_LITERAL(39, 807, 18), // "hideQueuePosColumn"
QT_MOC_LITERAL(40, 826, 4), // "hide"
QT_MOC_LITERAL(41, 831, 16), // "displayDLHoSMenu"
QT_MOC_LITERAL(42, 848, 15), // "applyNameFilter"
QT_MOC_LITERAL(43, 864, 4), // "name"
QT_MOC_LITERAL(44, 869, 17), // "applyStatusFilter"
QT_MOC_LITERAL(45, 887, 1), // "f"
QT_MOC_LITERAL(46, 889, 19), // "applyCategoryFilter"
QT_MOC_LITERAL(47, 909, 14), // "applyTagFilter"
QT_MOC_LITERAL(48, 924, 21), // "applyTrackerFilterAll"
QT_MOC_LITERAL(49, 946, 18), // "applyTrackerFilter"
QT_MOC_LITERAL(50, 965, 27), // "QSet<BitTorrent::TorrentID>"
QT_MOC_LITERAL(51, 993, 10), // "torrentIDs"
QT_MOC_LITERAL(52, 1004, 11), // "previewFile"
QT_MOC_LITERAL(53, 1016, 8), // "filePath"
QT_MOC_LITERAL(54, 1025, 21), // "renameSelectedTorrent"
QT_MOC_LITERAL(55, 1047, 20), // "torrentDoubleClicked"
QT_MOC_LITERAL(56, 1068, 15), // "displayListMenu"
QT_MOC_LITERAL(57, 1084, 14), // "currentChanged"
QT_MOC_LITERAL(58, 1099, 11), // "QModelIndex"
QT_MOC_LITERAL(59, 1111, 7), // "current"
QT_MOC_LITERAL(60, 1119, 31), // "setSelectedTorrentsSuperSeeding"
QT_MOC_LITERAL(61, 1151, 7), // "enabled"
QT_MOC_LITERAL(62, 1159, 37), // "setSelectedTorrentsSequential..."
QT_MOC_LITERAL(63, 1197, 29), // "setSelectedFirstLastPiecePrio"
QT_MOC_LITERAL(64, 1227, 25), // "setSelectedAutoTMMEnabled"
QT_MOC_LITERAL(65, 1253, 26), // "askNewCategoryForSelection"
QT_MOC_LITERAL(66, 1280, 12) // "saveSettings"

    },
    "TransferListWidget\0currentTorrentChanged\0"
    "\0BitTorrent::Torrent*const\0torrent\0"
    "setSelectionCategory\0category\0"
    "addSelectionTag\0tag\0removeSelectionTag\0"
    "clearSelectionTags\0setSelectedTorrentsLocation\0"
    "pauseAllTorrents\0resumeAllTorrents\0"
    "startSelectedTorrents\0forceStartSelectedTorrents\0"
    "startVisibleTorrents\0pauseSelectedTorrents\0"
    "pauseVisibleTorrents\0softDeleteSelectedTorrents\0"
    "permDeleteSelectedTorrents\0"
    "deleteSelectedTorrents\0deleteLocalFiles\0"
    "deleteVisibleTorrents\0"
    "increaseQueuePosSelectedTorrents\0"
    "decreaseQueuePosSelectedTorrents\0"
    "topQueuePosSelectedTorrents\0"
    "bottomQueuePosSelectedTorrents\0"
    "copySelectedMagnetURIs\0copySelectedNames\0"
    "copySelectedInfohashes\0CopyInfohashPolicy\0"
    "policy\0copySelectedIDs\0"
    "openSelectedTorrentsFolder\0"
    "recheckSelectedTorrents\0"
    "reannounceSelectedTorrents\0setTorrentOptions\0"
    "previewSelectedTorrents\0hideQueuePosColumn\0"
    "hide\0displayDLHoSMenu\0applyNameFilter\0"
    "name\0applyStatusFilter\0f\0applyCategoryFilter\0"
    "applyTagFilter\0applyTrackerFilterAll\0"
    "applyTrackerFilter\0QSet<BitTorrent::TorrentID>\0"
    "torrentIDs\0previewFile\0filePath\0"
    "renameSelectedTorrent\0torrentDoubleClicked\0"
    "displayListMenu\0currentChanged\0"
    "QModelIndex\0current\0setSelectedTorrentsSuperSeeding\0"
    "enabled\0setSelectedTorrentsSequentialDownload\0"
    "setSelectedFirstLastPiecePrio\0"
    "setSelectedAutoTMMEnabled\0"
    "askNewCategoryForSelection\0saveSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  259,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  262,    2, 0x0a /* Public */,
       7,    1,  265,    2, 0x0a /* Public */,
       9,    1,  268,    2, 0x0a /* Public */,
      10,    0,  271,    2, 0x0a /* Public */,
      11,    0,  272,    2, 0x0a /* Public */,
      12,    0,  273,    2, 0x0a /* Public */,
      13,    0,  274,    2, 0x0a /* Public */,
      14,    0,  275,    2, 0x0a /* Public */,
      15,    0,  276,    2, 0x0a /* Public */,
      16,    0,  277,    2, 0x0a /* Public */,
      17,    0,  278,    2, 0x0a /* Public */,
      18,    0,  279,    2, 0x0a /* Public */,
      19,    0,  280,    2, 0x0a /* Public */,
      20,    0,  281,    2, 0x0a /* Public */,
      21,    1,  282,    2, 0x0a /* Public */,
      23,    0,  285,    2, 0x0a /* Public */,
      24,    0,  286,    2, 0x0a /* Public */,
      25,    0,  287,    2, 0x0a /* Public */,
      26,    0,  288,    2, 0x0a /* Public */,
      27,    0,  289,    2, 0x0a /* Public */,
      28,    0,  290,    2, 0x0a /* Public */,
      29,    0,  291,    2, 0x0a /* Public */,
      30,    1,  292,    2, 0x0a /* Public */,
      33,    0,  295,    2, 0x0a /* Public */,
      34,    0,  296,    2, 0x0a /* Public */,
      35,    0,  297,    2, 0x0a /* Public */,
      36,    0,  298,    2, 0x0a /* Public */,
      37,    0,  299,    2, 0x0a /* Public */,
      38,    0,  300,    2, 0x0a /* Public */,
      39,    1,  301,    2, 0x0a /* Public */,
      41,    1,  304,    2, 0x0a /* Public */,
      42,    1,  307,    2, 0x0a /* Public */,
      44,    1,  310,    2, 0x0a /* Public */,
      46,    1,  313,    2, 0x0a /* Public */,
      47,    1,  316,    2, 0x0a /* Public */,
      48,    0,  319,    2, 0x0a /* Public */,
      49,    1,  320,    2, 0x0a /* Public */,
      52,    1,  323,    2, 0x0a /* Public */,
      54,    0,  326,    2, 0x0a /* Public */,
      55,    0,  327,    2, 0x08 /* Private */,
      56,    1,  328,    2, 0x08 /* Private */,
      57,    2,  331,    2, 0x08 /* Private */,
      60,    1,  336,    2, 0x08 /* Private */,
      62,    1,  339,    2, 0x08 /* Private */,
      63,    1,  342,    2, 0x08 /* Private */,
      64,    1,  345,    2, 0x08 /* Private */,
      65,    0,  348,    2, 0x08 /* Private */,
      66,    0,  349,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 58,   59,    2,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransferListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransferListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentTorrentChanged((*reinterpret_cast< BitTorrent::Torrent*const(*)>(_a[1]))); break;
        case 1: _t->setSelectionCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addSelectionTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeSelectionTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clearSelectionTags(); break;
        case 5: _t->setSelectedTorrentsLocation(); break;
        case 6: _t->pauseAllTorrents(); break;
        case 7: _t->resumeAllTorrents(); break;
        case 8: _t->startSelectedTorrents(); break;
        case 9: _t->forceStartSelectedTorrents(); break;
        case 10: _t->startVisibleTorrents(); break;
        case 11: _t->pauseSelectedTorrents(); break;
        case 12: _t->pauseVisibleTorrents(); break;
        case 13: _t->softDeleteSelectedTorrents(); break;
        case 14: _t->permDeleteSelectedTorrents(); break;
        case 15: _t->deleteSelectedTorrents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->deleteVisibleTorrents(); break;
        case 17: _t->increaseQueuePosSelectedTorrents(); break;
        case 18: _t->decreaseQueuePosSelectedTorrents(); break;
        case 19: _t->topQueuePosSelectedTorrents(); break;
        case 20: _t->bottomQueuePosSelectedTorrents(); break;
        case 21: _t->copySelectedMagnetURIs(); break;
        case 22: _t->copySelectedNames(); break;
        case 23: _t->copySelectedInfohashes((*reinterpret_cast< CopyInfohashPolicy(*)>(_a[1]))); break;
        case 24: _t->copySelectedIDs(); break;
        case 25: _t->openSelectedTorrentsFolder(); break;
        case 26: _t->recheckSelectedTorrents(); break;
        case 27: _t->reannounceSelectedTorrents(); break;
        case 28: _t->setTorrentOptions(); break;
        case 29: _t->previewSelectedTorrents(); break;
        case 30: _t->hideQueuePosColumn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->displayDLHoSMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 32: _t->applyNameFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->applyStatusFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->applyCategoryFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->applyTagFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->applyTrackerFilterAll(); break;
        case 37: _t->applyTrackerFilter((*reinterpret_cast< const QSet<BitTorrent::TorrentID>(*)>(_a[1]))); break;
        case 38: _t->previewFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->renameSelectedTorrent(); break;
        case 40: _t->torrentDoubleClicked(); break;
        case 41: _t->displayListMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 42: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 43: _t->setSelectedTorrentsSuperSeeding((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->setSelectedTorrentsSequentialDownload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->setSelectedFirstLastPiecePrio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setSelectedAutoTMMEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->askNewCategoryForSelection(); break;
        case 48: _t->saveSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<BitTorrent::TorrentID> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransferListWidget::*)(BitTorrent::Torrent * const );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferListWidget::currentTorrentChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransferListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_TransferListWidget.data,
    qt_meta_data_TransferListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransferListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransferListWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int TransferListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void TransferListWidget::currentTorrentChanged(BitTorrent::Torrent * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
