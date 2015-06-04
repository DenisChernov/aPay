/****************************************************************************
** Meta object code from reading C++ file 'threadServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "threadServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_threadServer_t {
    QByteArrayData data[9];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_threadServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_threadServer_t qt_meta_stringdata_threadServer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "threadServer"
QT_MOC_LITERAL(1, 13, 16), // "clientTransmited"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "finished"
QT_MOC_LITERAL(4, 40, 9), // "slot_from"
QT_MOC_LITERAL(5, 50, 12), // "slot_Working"
QT_MOC_LITERAL(6, 63, 20), // "slot_clientMsgParsed"
QT_MOC_LITERAL(7, 84, 14), // "responseClient"
QT_MOC_LITERAL(8, 99, 3) // "msg"

    },
    "threadServer\0clientTransmited\0\0finished\0"
    "slot_from\0slot_Working\0slot_clientMsgParsed\0"
    "responseClient\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_threadServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void threadServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        threadServer *_t = static_cast<threadServer *>(_o);
        switch (_id) {
        case 0: _t->clientTransmited(); break;
        case 1: _t->finished(); break;
        case 2: _t->slot_from(); break;
        case 3: _t->slot_Working(); break;
        case 4: _t->slot_clientMsgParsed((*reinterpret_cast< responseClient(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (threadServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&threadServer::clientTransmited)) {
                *result = 0;
            }
        }
        {
            typedef void (threadServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&threadServer::finished)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject threadServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_threadServer.data,
      qt_meta_data_threadServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *threadServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *threadServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_threadServer.stringdata))
        return static_cast<void*>(const_cast< threadServer*>(this));
    return QObject::qt_metacast(_clname);
}

int threadServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void threadServer::clientTransmited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void threadServer::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
