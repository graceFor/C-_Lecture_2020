//student.h

#ifndef __STUDENT_H
#define __STUDENT_H

#include <string>
using namespace std;

class Grade;

class Student
{
public:
    string number, name;
    double grade;
    Student(string num, string name) : number(num), name(name), grade(0) {}
    void set_Grade(Grade *g);
    void show();
};
#endif