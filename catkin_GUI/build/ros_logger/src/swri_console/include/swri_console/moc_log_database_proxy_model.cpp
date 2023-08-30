/****************************************************************************
** Meta object code from reading C++ file 'log_database_proxy_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/ros_logger/src/swri_console/include/swri_console/log_database_proxy_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log_database_proxy_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_swri_console__LogDatabaseProxyModel_t {
    QByteArrayData data[15];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_swri_console__LogDatabaseProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_swri_console__LogDatabaseProxyModel_t qt_meta_stringdata_swri_console__LogDatabaseProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "swri_console::LogDatabaseProx..."
QT_MOC_LITERAL(1, 36, 13), // "messagesAdded"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 21), // "handleDatabaseCleared"
QT_MOC_LITERAL(4, 73, 18), // "processNewMessages"
QT_MOC_LITERAL(5, 92, 18), // "processOldMessages"
QT_MOC_LITERAL(6, 111, 14), // "minTimeUpdated"
QT_MOC_LITERAL(7, 126, 14), // "setDisplayTime"
QT_MOC_LITERAL(8, 141, 7), // "display"
QT_MOC_LITERAL(9, 149, 15), // "setAbsoluteTime"
QT_MOC_LITERAL(10, 165, 8), // "absolute"
QT_MOC_LITERAL(11, 174, 15), // "setColorizeLogs"
QT_MOC_LITERAL(12, 190, 13), // "colorize_logs"
QT_MOC_LITERAL(13, 204, 24), // "setUseRegularExpressions"
QT_MOC_LITERAL(14, 229, 10) // "useRegexps"

    },
    "swri_console::LogDatabaseProxyModel\0"
    "messagesAdded\0\0handleDatabaseCleared\0"
    "processNewMessages\0processOldMessages\0"
    "minTimeUpdated\0setDisplayTime\0display\0"
    "setAbsoluteTime\0absolute\0setColorizeLogs\0"
    "colorize_logs\0setUseRegularExpressions\0"
    "useRegexps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_swri_console__LogDatabaseProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void swri_console::LogDatabaseProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogDatabaseProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messagesAdded(); break;
        case 1: _t->handleDatabaseCleared(); break;
        case 2: _t->processNewMessages(); break;
        case 3: _t->processOldMessages(); break;
        case 4: _t->minTimeUpdated(); break;
        case 5: _t->setDisplayTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setAbsoluteTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setColorizeLogs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setUseRegularExpressions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogDatabaseProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDatabaseProxyModel::messagesAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject swri_console::LogDatabaseProxyModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_swri_console__LogDatabaseProxyModel.data,
    qt_meta_data_swri_console__LogDatabaseProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *swri_console::LogDatabaseProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *swri_console::LogDatabaseProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_swri_console__LogDatabaseProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int swri_console::LogDatabaseProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void swri_console::LogDatabaseProxyModel::messagesAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
