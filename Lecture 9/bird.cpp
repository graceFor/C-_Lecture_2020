
#include <iostream>
#include <stdio.h>

struct Bird
{
    char name[10];
    void fly() { printf("I can fly\n"); }
    void sing() { printf("La La La\n"); }
};

int main()
{
    Bird b;
    b.fly();
    b.sing();

    return 0;
}
