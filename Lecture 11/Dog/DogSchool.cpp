#include "Dog.h"
#include "DogSchool.h"

string DogSchool::get_name() { return m_shool_name; }
void DogSchool::insert(Dog *d)
{
    allDogs[numDogs++] = d;
    d->setSchool(this);
}