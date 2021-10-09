/****************************************************************************
** Meta object code from reading C++ file 'pluginselectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/gui/search/pluginselectdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginselectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginSelectDialog_t {
    QByteArrayData data[29];
    char stringdata0[474];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginSelectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginSelectDialog_t qt_meta_stringdata_PluginSelectDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PluginSelectDialog"
QT_MOC_LITERAL(1, 19, 28), // "on_actionUninstall_triggered"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 23), // "on_updateButton_clicked"
QT_MOC_LITERAL(4, 73, 24), // "on_installButton_clicked"
QT_MOC_LITERAL(5, 98, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 121, 17), // "togglePluginState"
QT_MOC_LITERAL(7, 139, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 156, 11), // "setRowColor"
QT_MOC_LITERAL(9, 168, 3), // "row"
QT_MOC_LITERAL(10, 172, 5), // "color"
QT_MOC_LITERAL(11, 178, 18), // "displayContextMenu"
QT_MOC_LITERAL(12, 197, 15), // "enableSelection"
QT_MOC_LITERAL(13, 213, 6), // "enable"
QT_MOC_LITERAL(14, 220, 17), // "askForLocalPlugin"
QT_MOC_LITERAL(15, 238, 15), // "askForPluginUrl"
QT_MOC_LITERAL(16, 254, 20), // "iconDownloadFinished"
QT_MOC_LITERAL(17, 275, 19), // "Net::DownloadResult"
QT_MOC_LITERAL(18, 295, 6), // "result"
QT_MOC_LITERAL(19, 302, 23), // "checkForUpdatesFinished"
QT_MOC_LITERAL(20, 326, 28), // "QHash<QString,PluginVersion>"
QT_MOC_LITERAL(21, 355, 10), // "updateInfo"
QT_MOC_LITERAL(22, 366, 21), // "checkForUpdatesFailed"
QT_MOC_LITERAL(23, 388, 6), // "reason"
QT_MOC_LITERAL(24, 395, 15), // "pluginInstalled"
QT_MOC_LITERAL(25, 411, 4), // "name"
QT_MOC_LITERAL(26, 416, 24), // "pluginInstallationFailed"
QT_MOC_LITERAL(27, 441, 13), // "pluginUpdated"
QT_MOC_LITERAL(28, 455, 18) // "pluginUpdateFailed"

    },
    "PluginSelectDialog\0on_actionUninstall_triggered\0"
    "\0on_updateButton_clicked\0"
    "on_installButton_clicked\0"
    "on_closeButton_clicked\0togglePluginState\0"
    "QTreeWidgetItem*\0setRowColor\0row\0color\0"
    "displayContextMenu\0enableSelection\0"
    "enable\0askForLocalPlugin\0askForPluginUrl\0"
    "iconDownloadFinished\0Net::DownloadResult\0"
    "result\0checkForUpdatesFinished\0"
    "QHash<QString,PluginVersion>\0updateInfo\0"
    "checkForUpdatesFailed\0reason\0"
    "pluginInstalled\0name\0pluginInstallationFailed\0"
    "pluginUpdated\0pluginUpdateFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginSelectDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    2,  103,    2, 0x08 /* Private */,
       8,    2,  108,    2, 0x08 /* Private */,
      11,    1,  113,    2, 0x08 /* Private */,
      12,    1,  116,    2, 0x08 /* Private */,
      14,    0,  119,    2, 0x08 /* Private */,
      15,    0,  120,    2, 0x08 /* Private */,
      16,    1,  121,    2, 0x08 /* Private */,
      19,    1,  124,    2, 0x08 /* Private */,
      22,    1,  127,    2, 0x08 /* Private */,
      24,    1,  130,    2, 0x08 /* Private */,
      26,    2,  133,    2, 0x08 /* Private */,
      27,    1,  138,    2, 0x08 /* Private */,
      28,    2,  141,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   25,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   25,   23,

       0        // eod
};

void PluginSelectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginSelectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionUninstall_triggered(); break;
        case 1: _t->on_updateButton_clicked(); break;
        case 2: _t->on_installButton_clicked(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->togglePluginState((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setRowColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->displayContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->enableSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->askForLocalPlugin(); break;
        case 9: _t->askForPluginUrl(); break;
        case 10: _t->iconDownloadFinished((*reinterpret_cast< const Net::DownloadResult(*)>(_a[1]))); break;
        case 11: _t->checkForUpdatesFinished((*reinterpret_cast< const QHash<QString,PluginVersion>(*)>(_a[1]))); break;
        case 12: _t->checkForUpdatesFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->pluginInstalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->pluginInstallationFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->pluginUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->pluginUpdateFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginSelectDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PluginSelectDialog.data,
    qt_meta_data_PluginSelectDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginSelectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginSelectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginSelectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PluginSelectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
