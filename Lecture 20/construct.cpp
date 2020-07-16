// Animal <-- Mammal <-- Dog 클래스를 계층으로 정의하고 각각의 default Constructor와 destructor에서 짧은 메시지 하나씩을 출력

#include <iostream>
using namespace std;

class Animal
{
public:
    Animal() { cout << "An animal is created\n"; }
    ~Animal() { cout << "An animal is dead\n"; }
};
class Mammal : public Animal
{
public:
    Mammal() { cout << "An mammal is created\n"; }
    ~Mammal() { cout << "An mammal is dead\n"; }
};
class Dog : public Mammal
{
public:
    Dog() { cout << "A dog is created\n"; }
    ~Dog() { cout << "A dog is dead\n"; }
};
int main()
{
    Dog d;

    return 0;
}