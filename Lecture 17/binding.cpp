//method Binding in C++

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void monya() { cout << "동물" << endl; }
    void whatRU() { cout << "An animal!" << endl; }
};

class Dog : public Animal
{
public:
    void monya() { cout << "멍멍이" << endl; }
    void whatRU() { cout << "A Dog!" << endl; }
};

int main()
{
    Animal *ap = new Dog();
    Animal a2;

    Dog doggy;
    a2 = doggy;
    ap->monya();
    ap->whatRU();
    a2.monya();
    a2.whatRU();

    return 0;
}