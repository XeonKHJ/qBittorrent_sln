/****************************************************************************
** Meta object code from reading C++ file 'session.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/base/bittorrent/session.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'session.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitTorrent__Session_t {
    QByteArrayData data[77];
    char stringdata0[1177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitTorrent__Session_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitTorrent__Session_t qt_meta_stringdata_BitTorrent__Session = {
    {
QT_MOC_LITERAL(0, 0, 19), // "BitTorrent::Session"
QT_MOC_LITERAL(1, 20, 19), // "allTorrentsFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "categoryAdded"
QT_MOC_LITERAL(4, 55, 12), // "categoryName"
QT_MOC_LITERAL(5, 68, 15), // "categoryRemoved"
QT_MOC_LITERAL(6, 84, 21), // "downloadFromUrlFailed"
QT_MOC_LITERAL(7, 106, 3), // "url"
QT_MOC_LITERAL(8, 110, 6), // "reason"
QT_MOC_LITERAL(9, 117, 23), // "downloadFromUrlFinished"
QT_MOC_LITERAL(10, 141, 13), // "fullDiskError"
QT_MOC_LITERAL(11, 155, 8), // "Torrent*"
QT_MOC_LITERAL(12, 164, 7), // "torrent"
QT_MOC_LITERAL(13, 172, 3), // "msg"
QT_MOC_LITERAL(14, 176, 14), // "IPFilterParsed"
QT_MOC_LITERAL(15, 191, 5), // "error"
QT_MOC_LITERAL(16, 197, 9), // "ruleCount"
QT_MOC_LITERAL(17, 207, 17), // "loadTorrentFailed"
QT_MOC_LITERAL(18, 225, 18), // "metadataDownloaded"
QT_MOC_LITERAL(19, 244, 11), // "TorrentInfo"
QT_MOC_LITERAL(20, 256, 4), // "info"
QT_MOC_LITERAL(21, 261, 32), // "recursiveTorrentDownloadPossible"
QT_MOC_LITERAL(22, 294, 21), // "speedLimitModeChanged"
QT_MOC_LITERAL(23, 316, 11), // "alternative"
QT_MOC_LITERAL(24, 328, 12), // "statsUpdated"
QT_MOC_LITERAL(25, 341, 27), // "subcategoriesSupportChanged"
QT_MOC_LITERAL(26, 369, 8), // "tagAdded"
QT_MOC_LITERAL(27, 378, 3), // "tag"
QT_MOC_LITERAL(28, 382, 10), // "tagRemoved"
QT_MOC_LITERAL(29, 393, 23), // "torrentAboutToBeRemoved"
QT_MOC_LITERAL(30, 417, 12), // "torrentAdded"
QT_MOC_LITERAL(31, 430, 22), // "torrentCategoryChanged"
QT_MOC_LITERAL(32, 453, 11), // "oldCategory"
QT_MOC_LITERAL(33, 465, 15), // "torrentFinished"
QT_MOC_LITERAL(34, 481, 23), // "torrentFinishedChecking"
QT_MOC_LITERAL(35, 505, 13), // "torrentLoaded"
QT_MOC_LITERAL(36, 519, 23), // "torrentMetadataReceived"
QT_MOC_LITERAL(37, 543, 13), // "torrentPaused"
QT_MOC_LITERAL(38, 557, 14), // "torrentResumed"
QT_MOC_LITERAL(39, 572, 22), // "torrentSavePathChanged"
QT_MOC_LITERAL(40, 595, 24), // "torrentSavingModeChanged"
QT_MOC_LITERAL(41, 620, 15), // "torrentsUpdated"
QT_MOC_LITERAL(42, 636, 17), // "QVector<Torrent*>"
QT_MOC_LITERAL(43, 654, 8), // "torrents"
QT_MOC_LITERAL(44, 663, 15), // "torrentTagAdded"
QT_MOC_LITERAL(45, 679, 17), // "torrentTagRemoved"
QT_MOC_LITERAL(46, 697, 12), // "trackerError"
QT_MOC_LITERAL(47, 710, 7), // "tracker"
QT_MOC_LITERAL(48, 718, 23), // "trackerlessStateChanged"
QT_MOC_LITERAL(49, 742, 11), // "trackerless"
QT_MOC_LITERAL(50, 754, 13), // "trackersAdded"
QT_MOC_LITERAL(51, 768, 21), // "QVector<TrackerEntry>"
QT_MOC_LITERAL(52, 790, 8), // "trackers"
QT_MOC_LITERAL(53, 799, 15), // "trackersChanged"
QT_MOC_LITERAL(54, 815, 15), // "trackersRemoved"
QT_MOC_LITERAL(55, 831, 14), // "trackerSuccess"
QT_MOC_LITERAL(56, 846, 14), // "trackerWarning"
QT_MOC_LITERAL(57, 861, 17), // "configureDeferred"
QT_MOC_LITERAL(58, 879, 10), // "readAlerts"
QT_MOC_LITERAL(59, 890, 14), // "enqueueRefresh"
QT_MOC_LITERAL(60, 905, 18), // "processShareLimits"
QT_MOC_LITERAL(61, 924, 18), // "generateResumeData"
QT_MOC_LITERAL(62, 943, 20), // "handleIPFilterParsed"
QT_MOC_LITERAL(63, 964, 19), // "handleIPFilterError"
QT_MOC_LITERAL(64, 984, 22), // "handleDownloadFinished"
QT_MOC_LITERAL(65, 1007, 19), // "Net::DownloadResult"
QT_MOC_LITERAL(66, 1027, 6), // "result"
QT_MOC_LITERAL(67, 1034, 18), // "fileSearchFinished"
QT_MOC_LITERAL(68, 1053, 9), // "TorrentID"
QT_MOC_LITERAL(69, 1063, 2), // "id"
QT_MOC_LITERAL(70, 1066, 8), // "savePath"
QT_MOC_LITERAL(71, 1075, 9), // "fileNames"
QT_MOC_LITERAL(72, 1085, 25), // "networkOnlineStateChanged"
QT_MOC_LITERAL(73, 1111, 6), // "online"
QT_MOC_LITERAL(74, 1118, 26), // "networkConfigurationChange"
QT_MOC_LITERAL(75, 1145, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(76, 1167, 9) // "configure"

    },
    "BitTorrent::Session\0allTorrentsFinished\0"
    "\0categoryAdded\0categoryName\0categoryRemoved\0"
    "downloadFromUrlFailed\0url\0reason\0"
    "downloadFromUrlFinished\0fullDiskError\0"
    "Torrent*\0torrent\0msg\0IPFilterParsed\0"
    "error\0ruleCount\0loadTorrentFailed\0"
    "metadataDownloaded\0TorrentInfo\0info\0"
    "recursiveTorrentDownloadPossible\0"
    "speedLimitModeChanged\0alternative\0"
    "statsUpdated\0subcategoriesSupportChanged\0"
    "tagAdded\0tag\0tagRemoved\0torrentAboutToBeRemoved\0"
    "torrentAdded\0torrentCategoryChanged\0"
    "oldCategory\0torrentFinished\0"
    "torrentFinishedChecking\0torrentLoaded\0"
    "torrentMetadataReceived\0torrentPaused\0"
    "torrentResumed\0torrentSavePathChanged\0"
    "torrentSavingModeChanged\0torrentsUpdated\0"
    "QVector<Torrent*>\0torrents\0torrentTagAdded\0"
    "torrentTagRemoved\0trackerError\0tracker\0"
    "trackerlessStateChanged\0trackerless\0"
    "trackersAdded\0QVector<TrackerEntry>\0"
    "trackers\0trackersChanged\0trackersRemoved\0"
    "trackerSuccess\0trackerWarning\0"
    "configureDeferred\0readAlerts\0"
    "enqueueRefresh\0processShareLimits\0"
    "generateResumeData\0handleIPFilterParsed\0"
    "handleIPFilterError\0handleDownloadFinished\0"
    "Net::DownloadResult\0result\0"
    "fileSearchFinished\0TorrentID\0id\0"
    "savePath\0fileNames\0networkOnlineStateChanged\0"
    "online\0networkConfigurationChange\0"
    "QNetworkConfiguration\0configure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitTorrent__Session[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      36,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x06 /* Public */,
       3,    1,  255,    2, 0x06 /* Public */,
       5,    1,  258,    2, 0x06 /* Public */,
       6,    2,  261,    2, 0x06 /* Public */,
       9,    1,  266,    2, 0x06 /* Public */,
      10,    2,  269,    2, 0x06 /* Public */,
      14,    2,  274,    2, 0x06 /* Public */,
      17,    1,  279,    2, 0x06 /* Public */,
      18,    1,  282,    2, 0x06 /* Public */,
      21,    1,  285,    2, 0x06 /* Public */,
      22,    1,  288,    2, 0x06 /* Public */,
      24,    0,  291,    2, 0x06 /* Public */,
      25,    0,  292,    2, 0x06 /* Public */,
      26,    1,  293,    2, 0x06 /* Public */,
      28,    1,  296,    2, 0x06 /* Public */,
      29,    1,  299,    2, 0x06 /* Public */,
      30,    1,  302,    2, 0x06 /* Public */,
      31,    2,  305,    2, 0x06 /* Public */,
      33,    1,  310,    2, 0x06 /* Public */,
      34,    1,  313,    2, 0x06 /* Public */,
      35,    1,  316,    2, 0x06 /* Public */,
      36,    1,  319,    2, 0x06 /* Public */,
      37,    1,  322,    2, 0x06 /* Public */,
      38,    1,  325,    2, 0x06 /* Public */,
      39,    1,  328,    2, 0x06 /* Public */,
      40,    1,  331,    2, 0x06 /* Public */,
      41,    1,  334,    2, 0x06 /* Public */,
      44,    2,  337,    2, 0x06 /* Public */,
      45,    2,  342,    2, 0x06 /* Public */,
      46,    2,  347,    2, 0x06 /* Public */,
      48,    2,  352,    2, 0x06 /* Public */,
      50,    2,  357,    2, 0x06 /* Public */,
      53,    1,  362,    2, 0x06 /* Public */,
      54,    2,  365,    2, 0x06 /* Public */,
      55,    2,  370,    2, 0x06 /* Public */,
      56,    2,  375,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      57,    0,  380,    2, 0x08 /* Private */,
      58,    0,  381,    2, 0x08 /* Private */,
      59,    0,  382,    2, 0x08 /* Private */,
      60,    0,  383,    2, 0x08 /* Private */,
      61,    0,  384,    2, 0x08 /* Private */,
      62,    1,  385,    2, 0x08 /* Private */,
      63,    0,  388,    2, 0x08 /* Private */,
      64,    1,  389,    2, 0x08 /* Private */,
      67,    3,  392,    2, 0x08 /* Private */,
      72,    1,  399,    2, 0x08 /* Private */,
      74,    1,  402,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      76,    0,  405,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   32,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   27,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   27,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   47,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool,   12,   49,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 51,   12,   52,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 51,   12,   52,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   47,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   47,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 68, QMetaType::QString, QMetaType::QStringList,   69,   70,   71,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, 0x80000000 | 75,    2,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void BitTorrent::Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Session *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->allTorrentsFinished(); break;
        case 1: _t->categoryAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->categoryRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->downloadFromUrlFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->downloadFromUrlFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fullDiskError((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->IPFilterParsed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->loadTorrentFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->metadataDownloaded((*reinterpret_cast< const TorrentInfo(*)>(_a[1]))); break;
        case 9: _t->recursiveTorrentDownloadPossible((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 10: _t->speedLimitModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->statsUpdated(); break;
        case 12: _t->subcategoriesSupportChanged(); break;
        case 13: _t->tagAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->tagRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->torrentAboutToBeRemoved((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 16: _t->torrentAdded((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 17: _t->torrentCategoryChanged((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->torrentFinished((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 19: _t->torrentFinishedChecking((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 20: _t->torrentLoaded((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 21: _t->torrentMetadataReceived((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 22: _t->torrentPaused((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 23: _t->torrentResumed((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 24: _t->torrentSavePathChanged((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 25: _t->torrentSavingModeChanged((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 26: _t->torrentsUpdated((*reinterpret_cast< const QVector<Torrent*>(*)>(_a[1]))); break;
        case 27: _t->torrentTagAdded((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->torrentTagRemoved((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->trackerError((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->trackerlessStateChanged((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->trackersAdded((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QVector<TrackerEntry>(*)>(_a[2]))); break;
        case 32: _t->trackersChanged((*reinterpret_cast< Torrent*(*)>(_a[1]))); break;
        case 33: _t->trackersRemoved((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QVector<TrackerEntry>(*)>(_a[2]))); break;
        case 34: _t->trackerSuccess((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 35: _t->trackerWarning((*reinterpret_cast< Torrent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->configureDeferred(); break;
        case 37: _t->readAlerts(); break;
        case 38: _t->enqueueRefresh(); break;
        case 39: _t->processShareLimits(); break;
        case 40: _t->generateResumeData(); break;
        case 41: _t->handleIPFilterParsed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->handleIPFilterError(); break;
        case 43: _t->handleDownloadFinished((*reinterpret_cast< const Net::DownloadResult(*)>(_a[1]))); break;
        case 44: _t->fileSearchFinished((*reinterpret_cast< const TorrentID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 45: _t->networkOnlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->networkConfigurationChange((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 47: _t->configure(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::allTorrentsFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::categoryAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::categoryRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::downloadFromUrlFailed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::downloadFromUrlFinished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::fullDiskError)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Session::*)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::IPFilterParsed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::loadTorrentFailed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Session::*)(const TorrentInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::metadataDownloaded)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::recursiveTorrentDownloadPossible)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Session::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::speedLimitModeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::statsUpdated)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::subcategoriesSupportChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::tagAdded)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::tagRemoved)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentAboutToBeRemoved)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentAdded)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentCategoryChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentFinished)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentFinishedChecking)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentLoaded)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentMetadataReceived)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentPaused)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentResumed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentSavePathChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentSavingModeChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Session::*)(const QVector<Torrent*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentsUpdated)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentTagAdded)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::torrentTagRemoved)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerError)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerlessStateChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QVector<TrackerEntry> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackersAdded)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackersChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QVector<TrackerEntry> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackersRemoved)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerSuccess)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Session::*)(Torrent * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::trackerWarning)) {
                *result = 35;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BitTorrent::Session::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BitTorrent__Session.data,
    qt_meta_data_BitTorrent__Session,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BitTorrent::Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitTorrent::Session::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitTorrent__Session.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BitTorrent::Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void BitTorrent::Session::allTorrentsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BitTorrent::Session::categoryAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BitTorrent::Session::categoryRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BitTorrent::Session::downloadFromUrlFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BitTorrent::Session::downloadFromUrlFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BitTorrent::Session::fullDiskError(Torrent * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BitTorrent::Session::IPFilterParsed(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BitTorrent::Session::loadTorrentFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BitTorrent::Session::metadataDownloaded(const TorrentInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BitTorrent::Session::recursiveTorrentDownloadPossible(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BitTorrent::Session::speedLimitModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void BitTorrent::Session::statsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void BitTorrent::Session::subcategoriesSupportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void BitTorrent::Session::tagAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void BitTorrent::Session::tagRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void BitTorrent::Session::torrentAboutToBeRemoved(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void BitTorrent::Session::torrentAdded(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void BitTorrent::Session::torrentCategoryChanged(Torrent * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void BitTorrent::Session::torrentFinished(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void BitTorrent::Session::torrentFinishedChecking(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void BitTorrent::Session::torrentLoaded(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void BitTorrent::Session::torrentMetadataReceived(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void BitTorrent::Session::torrentPaused(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void BitTorrent::Session::torrentResumed(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void BitTorrent::Session::torrentSavePathChanged(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void BitTorrent::Session::torrentSavingModeChanged(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void BitTorrent::Session::torrentsUpdated(const QVector<Torrent*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void BitTorrent::Session::torrentTagAdded(Torrent * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void BitTorrent::Session::torrentTagRemoved(Torrent * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void BitTorrent::Session::trackerError(Torrent * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void BitTorrent::Session::trackerlessStateChanged(Torrent * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void BitTorrent::Session::trackersAdded(Torrent * _t1, const QVector<TrackerEntry> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void BitTorrent::Session::trackersChanged(Torrent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void BitTorrent::Session::trackersRemoved(Torrent * _t1, const QVector<TrackerEntry> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void BitTorrent::Session::trackerSuccess(Torrent * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void BitTorrent::Session::trackerWarning(Torrent * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}
struct qt_meta_stringdata_BitTorrent__SessionSettingsEnums_t {
    QByteArrayData data[23];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitTorrent__SessionSettingsEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitTorrent__SessionSettingsEnums_t qt_meta_stringdata_BitTorrent__SessionSettingsEnums = {
    {
QT_MOC_LITERAL(0, 0, 32), // "BitTorrent::SessionSettingsEnums"
QT_MOC_LITERAL(1, 33, 10), // "BTProtocol"
QT_MOC_LITERAL(2, 44, 4), // "Both"
QT_MOC_LITERAL(3, 49, 3), // "TCP"
QT_MOC_LITERAL(4, 53, 3), // "UTP"
QT_MOC_LITERAL(5, 57, 16), // "ChokingAlgorithm"
QT_MOC_LITERAL(6, 74, 10), // "FixedSlots"
QT_MOC_LITERAL(7, 85, 9), // "RateBased"
QT_MOC_LITERAL(8, 95, 18), // "MixedModeAlgorithm"
QT_MOC_LITERAL(9, 114, 12), // "Proportional"
QT_MOC_LITERAL(10, 127, 20), // "SeedChokingAlgorithm"
QT_MOC_LITERAL(11, 148, 10), // "RoundRobin"
QT_MOC_LITERAL(12, 159, 13), // "FastestUpload"
QT_MOC_LITERAL(13, 173, 9), // "AntiLeech"
QT_MOC_LITERAL(14, 183, 21), // "ResumeDataStorageType"
QT_MOC_LITERAL(15, 205, 6), // "Legacy"
QT_MOC_LITERAL(16, 212, 6), // "SQLite"
QT_MOC_LITERAL(17, 219, 16), // "OSMemoryPriority"
QT_MOC_LITERAL(18, 236, 6), // "Normal"
QT_MOC_LITERAL(19, 243, 11), // "BelowNormal"
QT_MOC_LITERAL(20, 255, 6), // "Medium"
QT_MOC_LITERAL(21, 262, 3), // "Low"
QT_MOC_LITERAL(22, 266, 7) // "VeryLow"

    },
    "BitTorrent::SessionSettingsEnums\0"
    "BTProtocol\0Both\0TCP\0UTP\0ChokingAlgorithm\0"
    "FixedSlots\0RateBased\0MixedModeAlgorithm\0"
    "Proportional\0SeedChokingAlgorithm\0"
    "RoundRobin\0FastestUpload\0AntiLeech\0"
    "ResumeDataStorageType\0Legacy\0SQLite\0"
    "OSMemoryPriority\0Normal\0BelowNormal\0"
    "Medium\0Low\0VeryLow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitTorrent__SessionSettingsEnums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       6,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   44,
       5,    5, 0x2,    2,   50,
       8,    8, 0x2,    2,   54,
      10,   10, 0x2,    3,   58,
      14,   14, 0x2,    2,   64,
      17,   17, 0x2,    5,   68,

 // enum data: key, value
       2, uint(BitTorrent::SessionSettingsEnums::BTProtocol::Both),
       3, uint(BitTorrent::SessionSettingsEnums::BTProtocol::TCP),
       4, uint(BitTorrent::SessionSettingsEnums::BTProtocol::UTP),
       6, uint(BitTorrent::SessionSettingsEnums::ChokingAlgorithm::FixedSlots),
       7, uint(BitTorrent::SessionSettingsEnums::ChokingAlgorithm::RateBased),
       3, uint(BitTorrent::SessionSettingsEnums::MixedModeAlgorithm::TCP),
       9, uint(BitTorrent::SessionSettingsEnums::MixedModeAlgorithm::Proportional),
      11, uint(BitTorrent::SessionSettingsEnums::SeedChokingAlgorithm::RoundRobin),
      12, uint(BitTorrent::SessionSettingsEnums::SeedChokingAlgorithm::FastestUpload),
      13, uint(BitTorrent::SessionSettingsEnums::SeedChokingAlgorithm::AntiLeech),
      15, uint(BitTorrent::SessionSettingsEnums::ResumeDataStorageType::Legacy),
      16, uint(BitTorrent::SessionSettingsEnums::ResumeDataStorageType::SQLite),
      18, uint(BitTorrent::SessionSettingsEnums::OSMemoryPriority::Normal),
      19, uint(BitTorrent::SessionSettingsEnums::OSMemoryPriority::BelowNormal),
      20, uint(BitTorrent::SessionSettingsEnums::OSMemoryPriority::Medium),
      21, uint(BitTorrent::SessionSettingsEnums::OSMemoryPriority::Low),
      22, uint(BitTorrent::SessionSettingsEnums::OSMemoryPriority::VeryLow),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject BitTorrent::SessionSettingsEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_BitTorrent__SessionSettingsEnums.data,
    qt_meta_data_BitTorrent__SessionSettingsEnums,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
