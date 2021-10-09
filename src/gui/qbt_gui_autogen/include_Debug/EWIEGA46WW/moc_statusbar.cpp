/****************************************************************************
** Meta object code from reading C++ file 'statusbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/gui/statusbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusBar_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusBar_t qt_meta_stringdata_StatusBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "StatusBar"
QT_MOC_LITERAL(1, 10, 30), // "alternativeSpeedsButtonClicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "connectionButtonClicked"
QT_MOC_LITERAL(4, 66, 19), // "showRestartRequired"
QT_MOC_LITERAL(5, 86, 7), // "refresh"
QT_MOC_LITERAL(6, 94, 18), // "updateAltSpeedsBtn"
QT_MOC_LITERAL(7, 113, 11), // "alternative"
QT_MOC_LITERAL(8, 125, 8) // "capSpeed"

    },
    "StatusBar\0alternativeSpeedsButtonClicked\0"
    "\0connectionButtonClicked\0showRestartRequired\0"
    "refresh\0updateAltSpeedsBtn\0alternative\0"
    "capSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void StatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alternativeSpeedsButtonClicked(); break;
        case 1: _t->connectionButtonClicked(); break;
        case 2: _t->showRestartRequired(); break;
        case 3: _t->refresh(); break;
        case 4: _t->updateAltSpeedsBtn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->capSpeed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusBar::alternativeSpeedsButtonClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusBar::connectionButtonClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StatusBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QStatusBar::staticMetaObject>(),
    qt_meta_stringdata_StatusBar.data,
    qt_meta_data_StatusBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusBar.stringdata0))
        return static_cast<void*>(this);
    return QStatusBar::qt_metacast(_clname);
}

int StatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStatusBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void StatusBar::alternativeSpeedsButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StatusBar::connectionButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
