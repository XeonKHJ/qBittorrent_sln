/****************************************************************************
** Meta object code from reading C++ file 'searchjobwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../qBittorrent/src/gui/search/searchjobwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchjobwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchJobWidget_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchJobWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchJobWidget_t qt_meta_stringdata_SearchJobWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SearchJobWidget"
QT_MOC_LITERAL(1, 16, 19), // "resultsCountUpdated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "statusChanged"
QT_MOC_LITERAL(4, 51, 17), // "NameFilteringMode"
QT_MOC_LITERAL(5, 69, 10), // "Everywhere"
QT_MOC_LITERAL(6, 80, 9) // "OnlyNames"

    },
    "SearchJobWidget\0resultsCountUpdated\0"
    "\0statusChanged\0NameFilteringMode\0"
    "Everywhere\0OnlyNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchJobWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       4,    4, 0x2,    2,   31,

 // enum data: key, value
       5, uint(SearchJobWidget::NameFilteringMode::Everywhere),
       6, uint(SearchJobWidget::NameFilteringMode::OnlyNames),

       0        // eod
};

void SearchJobWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchJobWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultsCountUpdated(); break;
        case 1: _t->statusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchJobWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchJobWidget::resultsCountUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchJobWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchJobWidget::statusChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SearchJobWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SearchJobWidget.data,
    qt_meta_data_SearchJobWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchJobWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchJobWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchJobWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SearchJobWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SearchJobWidget::resultsCountUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SearchJobWidget::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE