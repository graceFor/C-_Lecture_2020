//grade.cpp

#include "student.h"
#include "grade.h"

double Grade::get_Grade()
{
    double avg;
    avg = (kor + eng + math) / 3.0;
    return avg;
}

void Grade::set_Name(Student *s) { name = s; }
