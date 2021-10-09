/****************************************************************************
** Meta object code from reading C++ file 'torrent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/base/bittorrent/torrent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torrent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitTorrent__TorrentOperatingModeNS_t {
    QByteArrayData data[4];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitTorrent__TorrentOperatingModeNS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitTorrent__TorrentOperatingModeNS_t qt_meta_stringdata_BitTorrent__TorrentOperatingModeNS = {
    {
QT_MOC_LITERAL(0, 0, 34), // "BitTorrent::TorrentOperatingM..."
QT_MOC_LITERAL(1, 35, 20), // "TorrentOperatingMode"
QT_MOC_LITERAL(2, 56, 11), // "AutoManaged"
QT_MOC_LITERAL(3, 68, 6) // "Forced"

    },
    "BitTorrent::TorrentOperatingModeNS\0"
    "TorrentOperatingMode\0AutoManaged\0"
    "Forced"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitTorrent__TorrentOperatingModeNS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    2,   19,

 // enum data: key, value
       2, uint(BitTorrent::TorrentOperatingModeNS::TorrentOperatingMode::AutoManaged),
       3, uint(BitTorrent::TorrentOperatingModeNS::TorrentOperatingMode::Forced),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject BitTorrent::TorrentOperatingModeNS::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_BitTorrent__TorrentOperatingModeNS.data,
    qt_meta_data_BitTorrent__TorrentOperatingModeNS,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
