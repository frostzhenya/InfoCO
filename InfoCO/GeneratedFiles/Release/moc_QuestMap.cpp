/****************************************************************************
** Meta object code from reading C++ file 'QuestMap.h'
**
** Created: Fri 5. Apr 15:51:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QuestMap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuestMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuestMap[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      28,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuestMap[] = {
    "QuestMap\0\0ButtonBackClick()\0"
    "ButtonAcceptClick()\0"
};

void QuestMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuestMap *_t = static_cast<QuestMap *>(_o);
        switch (_id) {
        case 0: _t->ButtonBackClick(); break;
        case 1: _t->ButtonAcceptClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QuestMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuestMap::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QuestMap,
      qt_meta_data_QuestMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuestMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuestMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuestMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuestMap))
        return static_cast<void*>(const_cast< QuestMap*>(this));
    return QDialog::qt_metacast(_clname);
}

int QuestMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
