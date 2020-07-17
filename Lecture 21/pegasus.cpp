// pegasus.cpp

#include <iostream>
using namespace std;

class Animal
{
public:
    float getWeight() { return weight; }

protected:
    float weight;
};

class Horse : virtual public Animal
{
public:
    Horse() { weight = 20; }
    void go()
    {
        cout << "다가닥 다가닥.\n";
    }
};

class Bird : virtual public Animal
{
public:
    Bird() { weight = 0.5; }
    void go()
    {
        // 가상 상속
        cout << " I'm flying. \n";
    }
};

class Pegasus : public Horse, public Bird
{
};

int main()
{
    Pegasus p;
    p.Horse::go();
    p.Bird::go();
    cout << p.Horse::getWeight() << "kg\n";
    cout << p.Bird::getWeight() << "kg\n";

    return 0;
}