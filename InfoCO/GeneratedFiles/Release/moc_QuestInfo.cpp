/****************************************************************************
** Meta object code from reading C++ file 'QuestInfo.h'
**
** Created: Fri 5. Apr 18:20:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QuestInfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuestInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuestInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      30,   10,   10,   10, 0x08,
      50,   10,   10,   10, 0x08,
      68,   10,   10,   10, 0x08,
      88,   10,   10,   10, 0x08,
     103,   10,   10,   10, 0x08,
     120,   10,   10,   10, 0x08,
     144,   10,   10,   10, 0x08,
     172,   10,  168,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuestInfo[] = {
    "QuestInfo\0\0ButtomOpenPClick()\0"
    "ButtomClosePClick()\0ButtonBackClick()\0"
    "ButtonToMainClick()\0ListNpcClick()\0"
    "ListQuestClick()\0ButtonGoalToMapsClick()\0"
    "ButtomShowNpcMapClick()\0int\0"
    "returnCountGoal()\0"
};

void QuestInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuestInfo *_t = static_cast<QuestInfo *>(_o);
        switch (_id) {
        case 0: _t->ButtomOpenPClick(); break;
        case 1: _t->ButtomClosePClick(); break;
        case 2: _t->ButtonBackClick(); break;
        case 3: _t->ButtonToMainClick(); break;
        case 4: _t->ListNpcClick(); break;
        case 5: _t->ListQuestClick(); break;
        case 6: _t->ButtonGoalToMapsClick(); break;
        case 7: _t->ButtomShowNpcMapClick(); break;
        case 8: { int _r = _t->returnCountGoal();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuestInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuestInfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QuestInfo,
      qt_meta_data_QuestInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuestInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuestInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuestInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuestInfo))
        return static_cast<void*>(const_cast< QuestInfo*>(this));
    return QDialog::qt_metacast(_clname);
}

int QuestInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
