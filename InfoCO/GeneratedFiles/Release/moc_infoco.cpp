/****************************************************************************
** Meta object code from reading C++ file 'infoco.h'
**
** Created: Wed 3. Apr 18:22:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../infoco.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infoco.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InfoCO[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      26,    7,    7,    7, 0x08,
      44,    7,    7,    7, 0x08,
      62,    7,    7,    7, 0x08,
      80,    7,    7,    7, 0x08,
      98,    7,    7,    7, 0x08,
     116,    7,    7,    7, 0x08,
     146,  139,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InfoCO[] = {
    "InfoCO\0\0ButtonListClick()\0ButtonCalcClick()\0"
    "ButtonMapsClick()\0ButtonQuestClic()\0"
    "ButtonBlocClick()\0ButtoninfoClick()\0"
    "ButtonEditQuestClick()\0reason\0"
    "RenewDoubleClick(QSystemTrayIcon::ActivationReason)\0"
};

void InfoCO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InfoCO *_t = static_cast<InfoCO *>(_o);
        switch (_id) {
        case 0: _t->ButtonListClick(); break;
        case 1: _t->ButtonCalcClick(); break;
        case 2: _t->ButtonMapsClick(); break;
        case 3: _t->ButtonQuestClic(); break;
        case 4: _t->ButtonBlocClick(); break;
        case 5: _t->ButtoninfoClick(); break;
        case 6: _t->ButtonEditQuestClick(); break;
        case 7: _t->RenewDoubleClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InfoCO::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InfoCO::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InfoCO,
      qt_meta_data_InfoCO, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InfoCO::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InfoCO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InfoCO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InfoCO))
        return static_cast<void*>(const_cast< InfoCO*>(this));
    return QDialog::qt_metacast(_clname);
}

int InfoCO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
