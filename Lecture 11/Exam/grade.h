//grade.h

#ifndef __GRADE_H
#define __GRADE_H

#include <string>
using namespace std;

class Student;

class Grade
{
public:
    Student *name;
    double kor, eng, math;
    Grade(double k, double e, double m) : kor(k), eng(e), math(m) {}
    double get_Grade();
    void set_Name(Student *s);
};

#endif