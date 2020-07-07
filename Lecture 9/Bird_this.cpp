//this를 이용하여 표현하기

#include <stdio.h>
#include <iostream>
using namespace std;

struct Bird
{
public:
    string name;
    void sing()
    {
        cout << "My name is " << this->name << endl;
    }
};

int main()
{
    Bird b, c;
    b.name = "Tweety";
    c.name = "Birdy";
    b.sing();
    c.sing();

    return 0;
}