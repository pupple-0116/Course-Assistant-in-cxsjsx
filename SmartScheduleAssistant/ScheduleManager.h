#ifndef SCHEDULEMANAGER_H
#define SCHEDULEMANAGER_H

#include <QObject>
#include <QList>
#include <QVector>
#include "Course.h"

class ScheduleManager : public QObject
{
    Q_OBJECT

public:
    explicit ScheduleManager(QObject *parent = nullptr);
    ~ScheduleManager();

    // 课程管理
    bool addCourse(const Course &course);
    bool editCourse(int index, const Course &newCourse);
    bool removeCourse(int index);

    // 课程查询
    QList<Course*> getCoursesByDay(int dayOfWeek) const;
    Course* getCurrentCourse() const;
    Course* getNextCourse() const;
    const QList<Course*>& getAllCourses() const;

signals:
    void coursesChanged();

private:
    static const QString DATA_FILE_PATH;
    static const int VERSION_CODE = 1;

    void saveCourses() const;
    void loadCourses();
    int getCurrentSection() const;

    QList<Course*> m_courses;
};

#endif // SCHEDULEMANAGER_H
