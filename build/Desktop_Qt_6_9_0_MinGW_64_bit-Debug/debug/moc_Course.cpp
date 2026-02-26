/****************************************************************************
** Meta object code from reading C++ file 'Course.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Smart Course Assistant/Smart Course Assistant/Course.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Course.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6CourseE_t {};
} // unnamed namespace

template <> constexpr inline auto Course::qt_create_metaobjectdata<qt_meta_tag_ZN6CourseE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Course",
        "name",
        "dayOfWeek",
        "startSection",
        "endSection",
        "classroom",
        "teacher",
        "note",
        "color"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dayOfWeek'
        QtMocHelpers::PropertyData<int>(2, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'startSection'
        QtMocHelpers::PropertyData<int>(3, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'endSection'
        QtMocHelpers::PropertyData<int>(4, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'classroom'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'teacher'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'note'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'color'
        QtMocHelpers::PropertyData<QColor>(8, QMetaType::QColor, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Course, qt_meta_tag_ZN6CourseE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Course::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6CourseE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6CourseE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6CourseE_t>.metaTypes,
    nullptr
} };

void Course::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Course *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->dayOfWeek(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->startSection(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->endSection(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->classroom(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->teacher(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->note(); break;
        case 7: *reinterpret_cast<QColor*>(_v) = _t->color(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setDayOfWeek(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setStartSection(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setEndSection(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setClassroom(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setTeacher(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setNote(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setColor(*reinterpret_cast<QColor*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Course::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Course::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6CourseE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Course::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
