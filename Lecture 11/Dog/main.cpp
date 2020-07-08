// main.cpp
#include "Dog.h"
#include "DogSchool.h"

int main()
{
    Dog *d1, *d2;
    d1 = new Dog("철수");
    d2 = new Dog("영희");
    DogSchool *ds = new DogSchool("명랑 애견학교");
    ds->insert(d1);
    d1->bark();
}