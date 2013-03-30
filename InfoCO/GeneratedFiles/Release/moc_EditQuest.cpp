/****************************************************************************
** Meta object code from reading C++ file 'EditQuest.h'
**
** Created: Fri 29. Mar 20:35:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EditQuest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditQuest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditQuest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      32,   10,   10,   10, 0x08,
      49,   10,   10,   10, 0x08,
      68,   10,   10,   10, 0x08,
      87,   10,   10,   10, 0x08,
     109,   10,   10,   10, 0x08,
     132,   10,   10,   10, 0x08,
     157,   10,   10,   10, 0x08,
     185,   10,   10,   10, 0x08,
     213,   10,   10,   10, 0x08,
     241,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditQuest[] = {
    "EditQuest\0\0comboBoxMapChanged()\0"
    "ButtonNPCClick()\0ButtonQuestClick()\0"
    "ButtonClearClick()\0ButtonAddQuestClick()\0"
    "ButtonEditQuestClick()\0ButtonDeleteQuestClick()\0"
    "ButtomButtonGeometr0Click()\0"
    "ButtomButtonGeometr1Click()\0"
    "ButtomButtonGeometr3Click()\0"
    "ButtomButtonGeometr4Click()\0"
};

void EditQuest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditQuest *_t = static_cast<EditQuest *>(_o);
        switch (_id) {
        case 0: _t->comboBoxMapChanged(); break;
        case 1: _t->ButtonNPCClick(); break;
        case 2: _t->ButtonQuestClick(); break;
        case 3: _t->ButtonClearClick(); break;
        case 4: _t->ButtonAddQuestClick(); break;
        case 5: _t->ButtonEditQuestClick(); break;
        case 6: _t->ButtonDeleteQuestClick(); break;
        case 7: _t->ButtomButtonGeometr0Click(); break;
        case 8: _t->ButtomButtonGeometr1Click(); break;
        case 9: _t->ButtomButtonGeometr3Click(); break;
        case 10: _t->ButtomButtonGeometr4Click(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EditQuest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditQuest::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditQuest,
      qt_meta_data_EditQuest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditQuest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditQuest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditQuest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditQuest))
        return static_cast<void*>(const_cast< EditQuest*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditQuest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
