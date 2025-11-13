/****************************************************************************
** Meta object code from reading C++ file 'crc_main.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../crc_main.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crc_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8crc_mainE_t {};
} // unnamed namespace

template <> constexpr inline auto crc_main::qt_create_metaobjectdata<qt_meta_tag_ZN8crc_mainE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "crc_main",
        "lin_updateClickableRadioBtn",
        "",
        "lin_update_LineEditID",
        "can_updateIdentifierRules",
        "checked",
        "can_updateRtrUi",
        "preliminary_parse",
        "stringRemoveDelimiters",
        "original",
        "stringAddDelimiters",
        "type",
        "getWidgetText",
        "QLineEdit*",
        "senderLineEdit",
        "QPlainTextEdit*",
        "senderTextEdit",
        "getWidgetName",
        "setWidgetText",
        "text",
        "setWidgetStylesheet",
        "style",
        "clicked_buttonCalcCRC",
        "autofill_fields"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'lin_updateClickableRadioBtn'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'lin_update_LineEditID'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'can_updateIdentifierRules'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'can_updateRtrUi'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'preliminary_parse'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stringRemoveDelimiters'
        QtMocHelpers::SlotData<QString(QString)>(8, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'stringAddDelimiters'
        QtMocHelpers::SlotData<QString(QString, char)>(10, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 9 }, { QMetaType::Char, 11 },
        }}),
        // Slot 'getWidgetText'
        QtMocHelpers::SlotData<QString(QLineEdit *, QPlainTextEdit *)>(12, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Slot 'getWidgetName'
        QtMocHelpers::SlotData<QString(QLineEdit *, QPlainTextEdit *)>(17, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Slot 'setWidgetText'
        QtMocHelpers::SlotData<void(QLineEdit *, QPlainTextEdit *, QString)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'setWidgetStylesheet'
        QtMocHelpers::SlotData<void(QLineEdit *, QPlainTextEdit *, QString)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'clicked_buttonCalcCRC'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'autofill_fields'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<crc_main, qt_meta_tag_ZN8crc_mainE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject crc_main::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8crc_mainE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8crc_mainE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8crc_mainE_t>.metaTypes,
    nullptr
} };

void crc_main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<crc_main *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->lin_updateClickableRadioBtn(); break;
        case 1: _t->lin_update_LineEditID(); break;
        case 2: _t->can_updateIdentifierRules((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->can_updateRtrUi((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->preliminary_parse(); break;
        case 5: { QString _r = _t->stringRemoveDelimiters((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->stringAddDelimiters((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<char>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->getWidgetText((*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPlainTextEdit*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->getWidgetName((*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPlainTextEdit*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setWidgetText((*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPlainTextEdit*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 10: _t->setWidgetStylesheet((*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPlainTextEdit*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->clicked_buttonCalcCRC(); break;
        case 12: _t->autofill_fields(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPlainTextEdit* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPlainTextEdit* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPlainTextEdit* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPlainTextEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *crc_main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *crc_main::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8crc_mainE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int crc_main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
