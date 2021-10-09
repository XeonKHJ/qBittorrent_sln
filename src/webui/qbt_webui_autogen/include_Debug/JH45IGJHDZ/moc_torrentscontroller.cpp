/****************************************************************************
** Meta object code from reading C++ file 'torrentscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/webui/api/torrentscontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torrentscontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TorrentsController_t {
    QByteArrayData data[48];
    char stringdata0[833];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorrentsController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorrentsController_t qt_meta_stringdata_TorrentsController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TorrentsController"
QT_MOC_LITERAL(1, 19, 10), // "infoAction"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "propertiesAction"
QT_MOC_LITERAL(4, 48, 14), // "trackersAction"
QT_MOC_LITERAL(5, 63, 14), // "webseedsAction"
QT_MOC_LITERAL(6, 78, 11), // "filesAction"
QT_MOC_LITERAL(7, 90, 17), // "pieceHashesAction"
QT_MOC_LITERAL(8, 108, 17), // "pieceStatesAction"
QT_MOC_LITERAL(9, 126, 12), // "resumeAction"
QT_MOC_LITERAL(10, 139, 11), // "pauseAction"
QT_MOC_LITERAL(11, 151, 13), // "recheckAction"
QT_MOC_LITERAL(12, 165, 16), // "reannounceAction"
QT_MOC_LITERAL(13, 182, 12), // "renameAction"
QT_MOC_LITERAL(14, 195, 17), // "setCategoryAction"
QT_MOC_LITERAL(15, 213, 20), // "createCategoryAction"
QT_MOC_LITERAL(16, 234, 18), // "editCategoryAction"
QT_MOC_LITERAL(17, 253, 22), // "removeCategoriesAction"
QT_MOC_LITERAL(18, 276, 16), // "categoriesAction"
QT_MOC_LITERAL(19, 293, 13), // "addTagsAction"
QT_MOC_LITERAL(20, 307, 16), // "removeTagsAction"
QT_MOC_LITERAL(21, 324, 16), // "createTagsAction"
QT_MOC_LITERAL(22, 341, 16), // "deleteTagsAction"
QT_MOC_LITERAL(23, 358, 10), // "tagsAction"
QT_MOC_LITERAL(24, 369, 9), // "addAction"
QT_MOC_LITERAL(25, 379, 12), // "deleteAction"
QT_MOC_LITERAL(26, 392, 17), // "addTrackersAction"
QT_MOC_LITERAL(27, 410, 17), // "editTrackerAction"
QT_MOC_LITERAL(28, 428, 20), // "removeTrackersAction"
QT_MOC_LITERAL(29, 449, 14), // "addPeersAction"
QT_MOC_LITERAL(30, 464, 14), // "filePrioAction"
QT_MOC_LITERAL(31, 479, 17), // "uploadLimitAction"
QT_MOC_LITERAL(32, 497, 19), // "downloadLimitAction"
QT_MOC_LITERAL(33, 517, 20), // "setUploadLimitAction"
QT_MOC_LITERAL(34, 538, 22), // "setDownloadLimitAction"
QT_MOC_LITERAL(35, 561, 20), // "setShareLimitsAction"
QT_MOC_LITERAL(36, 582, 18), // "increasePrioAction"
QT_MOC_LITERAL(37, 601, 18), // "decreasePrioAction"
QT_MOC_LITERAL(38, 620, 13), // "topPrioAction"
QT_MOC_LITERAL(39, 634, 16), // "bottomPrioAction"
QT_MOC_LITERAL(40, 651, 17), // "setLocationAction"
QT_MOC_LITERAL(41, 669, 23), // "setAutoManagementAction"
QT_MOC_LITERAL(42, 693, 21), // "setSuperSeedingAction"
QT_MOC_LITERAL(43, 715, 19), // "setForceStartAction"
QT_MOC_LITERAL(44, 735, 30), // "toggleSequentialDownloadAction"
QT_MOC_LITERAL(45, 766, 30), // "toggleFirstLastPiecePrioAction"
QT_MOC_LITERAL(46, 797, 16), // "renameFileAction"
QT_MOC_LITERAL(47, 814, 18) // "renameFolderAction"

    },
    "TorrentsController\0infoAction\0\0"
    "propertiesAction\0trackersAction\0"
    "webseedsAction\0filesAction\0pieceHashesAction\0"
    "pieceStatesAction\0resumeAction\0"
    "pauseAction\0recheckAction\0reannounceAction\0"
    "renameAction\0setCategoryAction\0"
    "createCategoryAction\0editCategoryAction\0"
    "removeCategoriesAction\0categoriesAction\0"
    "addTagsAction\0removeTagsAction\0"
    "createTagsAction\0deleteTagsAction\0"
    "tagsAction\0addAction\0deleteAction\0"
    "addTrackersAction\0editTrackerAction\0"
    "removeTrackersAction\0addPeersAction\0"
    "filePrioAction\0uploadLimitAction\0"
    "downloadLimitAction\0setUploadLimitAction\0"
    "setDownloadLimitAction\0setShareLimitsAction\0"
    "increasePrioAction\0decreasePrioAction\0"
    "topPrioAction\0bottomPrioAction\0"
    "setLocationAction\0setAutoManagementAction\0"
    "setSuperSeedingAction\0setForceStartAction\0"
    "toggleSequentialDownloadAction\0"
    "toggleFirstLastPiecePrioAction\0"
    "renameFileAction\0renameFolderAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorrentsController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x08 /* Private */,
       3,    0,  245,    2, 0x08 /* Private */,
       4,    0,  246,    2, 0x08 /* Private */,
       5,    0,  247,    2, 0x08 /* Private */,
       6,    0,  248,    2, 0x08 /* Private */,
       7,    0,  249,    2, 0x08 /* Private */,
       8,    0,  250,    2, 0x08 /* Private */,
       9,    0,  251,    2, 0x08 /* Private */,
      10,    0,  252,    2, 0x08 /* Private */,
      11,    0,  253,    2, 0x08 /* Private */,
      12,    0,  254,    2, 0x08 /* Private */,
      13,    0,  255,    2, 0x08 /* Private */,
      14,    0,  256,    2, 0x08 /* Private */,
      15,    0,  257,    2, 0x08 /* Private */,
      16,    0,  258,    2, 0x08 /* Private */,
      17,    0,  259,    2, 0x08 /* Private */,
      18,    0,  260,    2, 0x08 /* Private */,
      19,    0,  261,    2, 0x08 /* Private */,
      20,    0,  262,    2, 0x08 /* Private */,
      21,    0,  263,    2, 0x08 /* Private */,
      22,    0,  264,    2, 0x08 /* Private */,
      23,    0,  265,    2, 0x08 /* Private */,
      24,    0,  266,    2, 0x08 /* Private */,
      25,    0,  267,    2, 0x08 /* Private */,
      26,    0,  268,    2, 0x08 /* Private */,
      27,    0,  269,    2, 0x08 /* Private */,
      28,    0,  270,    2, 0x08 /* Private */,
      29,    0,  271,    2, 0x08 /* Private */,
      30,    0,  272,    2, 0x08 /* Private */,
      31,    0,  273,    2, 0x08 /* Private */,
      32,    0,  274,    2, 0x08 /* Private */,
      33,    0,  275,    2, 0x08 /* Private */,
      34,    0,  276,    2, 0x08 /* Private */,
      35,    0,  277,    2, 0x08 /* Private */,
      36,    0,  278,    2, 0x08 /* Private */,
      37,    0,  279,    2, 0x08 /* Private */,
      38,    0,  280,    2, 0x08 /* Private */,
      39,    0,  281,    2, 0x08 /* Private */,
      40,    0,  282,    2, 0x08 /* Private */,
      41,    0,  283,    2, 0x08 /* Private */,
      42,    0,  284,    2, 0x08 /* Private */,
      43,    0,  285,    2, 0x08 /* Private */,
      44,    0,  286,    2, 0x08 /* Private */,
      45,    0,  287,    2, 0x08 /* Private */,
      46,    0,  288,    2, 0x08 /* Private */,
      47,    0,  289,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TorrentsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TorrentsController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoAction(); break;
        case 1: _t->propertiesAction(); break;
        case 2: _t->trackersAction(); break;
        case 3: _t->webseedsAction(); break;
        case 4: _t->filesAction(); break;
        case 5: _t->pieceHashesAction(); break;
        case 6: _t->pieceStatesAction(); break;
        case 7: _t->resumeAction(); break;
        case 8: _t->pauseAction(); break;
        case 9: _t->recheckAction(); break;
        case 10: _t->reannounceAction(); break;
        case 11: _t->renameAction(); break;
        case 12: _t->setCategoryAction(); break;
        case 13: _t->createCategoryAction(); break;
        case 14: _t->editCategoryAction(); break;
        case 15: _t->removeCategoriesAction(); break;
        case 16: _t->categoriesAction(); break;
        case 17: _t->addTagsAction(); break;
        case 18: _t->removeTagsAction(); break;
        case 19: _t->createTagsAction(); break;
        case 20: _t->deleteTagsAction(); break;
        case 21: _t->tagsAction(); break;
        case 22: _t->addAction(); break;
        case 23: _t->deleteAction(); break;
        case 24: _t->addTrackersAction(); break;
        case 25: _t->editTrackerAction(); break;
        case 26: _t->removeTrackersAction(); break;
        case 27: _t->addPeersAction(); break;
        case 28: _t->filePrioAction(); break;
        case 29: _t->uploadLimitAction(); break;
        case 30: _t->downloadLimitAction(); break;
        case 31: _t->setUploadLimitAction(); break;
        case 32: _t->setDownloadLimitAction(); break;
        case 33: _t->setShareLimitsAction(); break;
        case 34: _t->increasePrioAction(); break;
        case 35: _t->decreasePrioAction(); break;
        case 36: _t->topPrioAction(); break;
        case 37: _t->bottomPrioAction(); break;
        case 38: _t->setLocationAction(); break;
        case 39: _t->setAutoManagementAction(); break;
        case 40: _t->setSuperSeedingAction(); break;
        case 41: _t->setForceStartAction(); break;
        case 42: _t->toggleSequentialDownloadAction(); break;
        case 43: _t->toggleFirstLastPiecePrioAction(); break;
        case 44: _t->renameFileAction(); break;
        case 45: _t->renameFolderAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorrentsController::staticMetaObject = { {
    QMetaObject::SuperData::link<APIController::staticMetaObject>(),
    qt_meta_stringdata_TorrentsController.data,
    qt_meta_data_TorrentsController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorrentsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorrentsController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorrentsController.stringdata0))
        return static_cast<void*>(this);
    return APIController::qt_metacast(_clname);
}

int TorrentsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = APIController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
