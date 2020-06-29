//call by value

#include <stdio.h>

void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int x = 2;
    int y = 5;
    swap(x, y);
    printf("x=%d  y=%d\n", x, y);
    return 0;
}