#include <iostream>
using namespace std;

class Animal
{
public:
    Animal(string n) : a_name(n) {}
    void show() { cout << "Animal " << a_name << endl; }

protected:
    string a_name;
};

class Dog : public Animal
{
public:
    Dog(string n) : Animal(n) {}
};

int main()
{
    Animal *a = new Animal("동물");
    Dog *d = new Dog("개");
    a = d;
    a->show();
    d->show();
    return 0;
}