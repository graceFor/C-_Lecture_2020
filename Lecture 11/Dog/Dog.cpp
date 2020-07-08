// Dog.cpp

#include <iostream>
#include "Dog.h"
#include "DogSchool.h"

void Dog::bark()
{
    cout << "멍멍." << m_name << endl;
    if (m_school)
    {
        cout << "나는 " << m_school->get_name() << "에 다닙니다.\n";
    }
}
void Dog::setSchool(DogSchool *ds)
{
    {
        m_school = ds;
    }
}
