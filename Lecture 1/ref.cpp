// ref.cpp

#include <stdio.h>

void fun(int &b)
{
    b = 99;
}
int main()
{
    int a = 1;
    fun(a);
    printf("%d\n", a);
}