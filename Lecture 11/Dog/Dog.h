#ifndef __DOG_H
#define __DOG_H
#include <string>
using namespace std;
class DogSchool;

class Dog
{
public:
    string m_name;
    DogSchool *m_school;
    Dog(string n) : m_name(n), m_school(0) {}
    void bark();
    void setSchool(DogSchool *ds);
};
#endif