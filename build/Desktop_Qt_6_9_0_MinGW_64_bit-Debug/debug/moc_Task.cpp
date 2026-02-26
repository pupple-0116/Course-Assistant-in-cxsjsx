/****************************************************************************
** Meta object code from reading C++ file 'Task.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Smart Course Assistant/Smart Course Assistant/Task.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Task.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4TaskE_t {};
} // unnamed namespace

template <> constexpr inline auto Task::qt_create_metaobjectdata<qt_meta_tag_ZN4TaskE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Task",
        "statusChanged",
        "",
        "title",
        "dueDate",
        "courseName",
        "description",
        "isCompleted",
        "isExam",
        "daysRemaining",
        "statusText",
        "priorityColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'title'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dueDate'
        QtMocHelpers::PropertyData<QDate>(4, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'courseName'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'description'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'isCompleted'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 0),
        // property 'isExam'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 0),
        // property 'daysRemaining'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'statusText'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'priorityColor'
        QtMocHelpers::PropertyData<QColor>(11, QMetaType::QColor, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Task, qt_meta_tag_ZN4TaskE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Task::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4TaskE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4TaskE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4TaskE_t>.metaTypes,
    nullptr
} };

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Task *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->statusChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Task::*)()>(_a, &Task::statusChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast<QDate*>(_v) = _t->dueDate(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->courseName(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->description(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isCompleted(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isExam(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->daysRemaining(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->statusText(); break;
        case 8: *reinterpret_cast<QColor*>(_v) = _t->priorityColor(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setDueDate(*reinterpret_cast<QDate*>(_v)); break;
        case 2: _t->setCourseName(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setDescription(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setCompleted(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setExam(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4TaskE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Task::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
