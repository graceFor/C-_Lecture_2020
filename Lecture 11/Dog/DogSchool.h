#ifndef __DOGSCHOOL_H
#define __DOGSCHOOL_H
#include <string>
using namespace std;

class Dog;
class DogSchool
{
public:
    int numDogs;
    string m_shool_name;
    Dog *allDogs[100];
    DogSchool(string sname) : m_shool_name(sname), numDogs(0) {}
    string get_name();
    void insert(Dog *d);
};

#endif