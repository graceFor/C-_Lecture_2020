// main.cpp

#include "grade.h"
#include "student.h"

int main()
{
    Student *s = new Student("202001", "kim");
    Grade *g = new Grade(85, 90, 90);
    s->set_Grade(g);
    g->set_Name(s);
    s->show();

    return 0;
}
