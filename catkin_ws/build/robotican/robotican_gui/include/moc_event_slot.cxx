/****************************************************************************
** Meta object code from reading C++ file 'event_slot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/robotican/robotican_gui/include/event_slot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'event_slot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventSlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x0a,
      38,   30,   10,   10, 0x0a,
      66,   60,   10,   10, 0x0a,
      87,   10,   10,   10, 0x0a,
      98,   10,   10,   10, 0x0a,
     115,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EventSlot[] = {
    "EventSlot\0\0val\0setBatPwr(int)\0val,led\0"
    "setLed(long int,Led*)\0state\0"
    "setMoveState(Status)\0closeApp()\0"
    "moveArmToDrive()\0moveArmToPreset()\0"
};

void EventSlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventSlot *_t = static_cast<EventSlot *>(_o);
        switch (_id) {
        case 0: _t->setBatPwr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setLed((*reinterpret_cast< long int(*)>(_a[1])),(*reinterpret_cast< Led*(*)>(_a[2]))); break;
        case 2: _t->setMoveState((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 3: _t->closeApp(); break;
        case 4: _t->moveArmToDrive(); break;
        case 5: _t->moveArmToPreset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EventSlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EventSlot::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_EventSlot,
      qt_meta_data_EventSlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventSlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventSlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventSlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventSlot))
        return static_cast<void*>(const_cast< EventSlot*>(this));
    return QThread::qt_metacast(_clname);
}

int EventSlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
