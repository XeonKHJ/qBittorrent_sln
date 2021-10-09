/****************************************************************************
** Meta object code from reading C++ file 'appcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/webui/api/appcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppController_t {
    QByteArrayData data[11];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppController_t qt_meta_stringdata_AppController = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AppController"
QT_MOC_LITERAL(1, 14, 19), // "webapiVersionAction"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "versionAction"
QT_MOC_LITERAL(4, 49, 15), // "buildInfoAction"
QT_MOC_LITERAL(5, 65, 14), // "shutdownAction"
QT_MOC_LITERAL(6, 80, 17), // "preferencesAction"
QT_MOC_LITERAL(7, 98, 20), // "setPreferencesAction"
QT_MOC_LITERAL(8, 119, 21), // "defaultSavePathAction"
QT_MOC_LITERAL(9, 141, 26), // "networkInterfaceListAction"
QT_MOC_LITERAL(10, 168, 33) // "networkInterfaceAddressListAc..."

    },
    "AppController\0webapiVersionAction\0\0"
    "versionAction\0buildInfoAction\0"
    "shutdownAction\0preferencesAction\0"
    "setPreferencesAction\0defaultSavePathAction\0"
    "networkInterfaceListAction\0"
    "networkInterfaceAddressListAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void AppController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->webapiVersionAction(); break;
        case 1: _t->versionAction(); break;
        case 2: _t->buildInfoAction(); break;
        case 3: _t->shutdownAction(); break;
        case 4: _t->preferencesAction(); break;
        case 5: _t->setPreferencesAction(); break;
        case 6: _t->defaultSavePathAction(); break;
        case 7: _t->networkInterfaceListAction(); break;
        case 8: _t->networkInterfaceAddressListAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppController::staticMetaObject = { {
    QMetaObject::SuperData::link<APIController::staticMetaObject>(),
    qt_meta_stringdata_AppController.data,
    qt_meta_data_AppController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppController.stringdata0))
        return static_cast<void*>(this);
    return APIController::qt_metacast(_clname);
}

int AppController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = APIController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
