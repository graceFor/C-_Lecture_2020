//배열일 때 생성자와 소멸자

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Dog
{
public:
    static int numDog;
    int mynum;
    Dog()
    {
        mynum = numDog++;
        cout << "Dog " << mynum << " is born.\n";
    }
    ~Dog() { cout << "dog" << mynum << "is dead.\n"; }
};
int Dog::numDog = 0;
int main()
{
    Dog *d = new Dog[5];
    delete[] d;
}