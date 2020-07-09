//student.cpp

#include "student.h"
#include "grade.h"
#include <iostream>
using namespace std;

void Student::set_Grade(Grade *g)
{
    grade = g->get_Grade();
}
void Student::show()
{
    cout << "학번 : " << number << endl;
    cout << "이름 : " << name << endl;
    cout << "점수 : " << grade << endl;
}