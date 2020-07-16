// 다중상속

#include <iostream>
using namespace std;

class Dog
{
public:
    void bark() { cout << "멍멍!" << endl; }
};
class Bird
{
public:
    void fly() { cout << "쓩~!" << endl; }
};

class FlyingDog : public Dog, public Bird
{
};

int main()
{
    FlyingDog fy;
    fy.fly();
    fy.bark();

    return 0;
}