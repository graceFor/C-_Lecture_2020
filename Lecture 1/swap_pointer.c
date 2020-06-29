//call by reference => pointer

#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a; // *a는 변수 x
    *a = *b;  // *b는 변수 y
    *b = tmp;
}

int main()
{
    int x = 2;
    int y = 5;
    printf("x=%d  y=%d\n", x, y);
    swap(&x, &y);
    printf("x=%d  y=%d\n", x, y);
    return 0;
}