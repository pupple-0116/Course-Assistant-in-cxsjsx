/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Smart Course Assistant/Smart Course Assistant/Settings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
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
struct qt_meta_tag_ZN8SettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto Settings::qt_create_metaobjectdata<qt_meta_tag_ZN8SettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Settings",
        "reminderMinutesChanged",
        "",
        "minutes",
        "muteStateChanged",
        "muted",
        "themeChanged",
        "theme",
        "settingsReset",
        "trayEnabledChanged",
        "enabled",
        "setReminderMinutes",
        "setMuted",
        "setTheme",
        "setWindowGeometry",
        "geometry",
        "setWindowState",
        "state",
        "setLastUsedCourseColor",
        "color",
        "setDataFilePath",
        "path",
        "resetToDefaults",
        "isTrayEnabled",
        "setTrayEnabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'reminderMinutesChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'muteStateChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'settingsReset'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'trayEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'setReminderMinutes'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'setMuted'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'setTheme'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'setWindowGeometry'
        QtMocHelpers::SlotData<void(const QByteArray &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 15 },
        }}),
        // Slot 'setWindowState'
        QtMocHelpers::SlotData<void(const QByteArray &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 17 },
        }}),
        // Slot 'setLastUsedCourseColor'
        QtMocHelpers::SlotData<void(const QColor &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QColor, 19 },
        }}),
        // Slot 'setDataFilePath'
        QtMocHelpers::SlotData<void(const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'resetToDefaults'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'isTrayEnabled'
        QtMocHelpers::SlotData<bool() const>(23, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setTrayEnabled'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Settings, qt_meta_tag_ZN8SettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Settings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8SettingsE_t>.metaTypes,
    nullptr
} };

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Settings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reminderMinutesChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->muteStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->themeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->settingsReset(); break;
        case 4: _t->trayEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setReminderMinutes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setTheme((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setWindowGeometry((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 9: _t->setWindowState((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 10: _t->setLastUsedCourseColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 11: _t->setDataFilePath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->resetToDefaults(); break;
        case 13: { bool _r = _t->isTrayEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setTrayEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Settings::*)(int )>(_a, &Settings::reminderMinutesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Settings::*)(bool )>(_a, &Settings::muteStateChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Settings::*)(const QString & )>(_a, &Settings::themeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Settings::*)()>(_a, &Settings::settingsReset, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Settings::*)(bool )>(_a, &Settings::trayEnabledChanged, 4))
            return;
    }
}

const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SettingsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Settings::reminderMinutesChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Settings::muteStateChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Settings::themeChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Settings::settingsReset()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Settings::trayEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
