/****************************************************************************
** Meta object code from reading C++ file 'setting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Header/setting/setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Setting_t {
    QByteArrayData data[11];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Setting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Setting_t qt_meta_stringdata_Setting = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Setting"
QT_MOC_LITERAL(1, 8, 26), // "on_btn_OutputPower_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 40), // "on_btn_ModulationCharacterist..."
QT_MOC_LITERAL(4, 77, 37), // "on_btn_CarrierFrequencyOffset..."
QT_MOC_LITERAL(5, 115, 34), // "on_btn_ReceiverSensitivity_cl..."
QT_MOC_LITERAL(6, 150, 38), // "on_btn_MaximumInputSignalLeve..."
QT_MOC_LITERAL(7, 189, 34), // "on_btn_PERReportIntergrity_cl..."
QT_MOC_LITERAL(8, 224, 23), // "on_cbox_DTMTest_clicked"
QT_MOC_LITERAL(9, 248, 7), // "checked"
QT_MOC_LITERAL(10, 256, 23) // "on_rbtn_Default_clicked"

    },
    "Setting\0on_btn_OutputPower_clicked\0\0"
    "on_btn_ModulationCharacteristics_clicked\0"
    "on_btn_CarrierFrequencyOffset_clicked\0"
    "on_btn_ReceiverSensitivity_clicked\0"
    "on_btn_MaximumInputSignalLevel_clicked\0"
    "on_btn_PERReportIntergrity_clicked\0"
    "on_cbox_DTMTest_clicked\0checked\0"
    "on_rbtn_Default_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Setting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void Setting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Setting *_t = static_cast<Setting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_OutputPower_clicked(); break;
        case 1: _t->on_btn_ModulationCharacteristics_clicked(); break;
        case 2: _t->on_btn_CarrierFrequencyOffset_clicked(); break;
        case 3: _t->on_btn_ReceiverSensitivity_clicked(); break;
        case 4: _t->on_btn_MaximumInputSignalLevel_clicked(); break;
        case 5: _t->on_btn_PERReportIntergrity_clicked(); break;
        case 6: _t->on_cbox_DTMTest_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_rbtn_Default_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Setting::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Setting.data,
    qt_meta_data_Setting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Setting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Setting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Setting.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Setting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
