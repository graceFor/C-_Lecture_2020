// fptest.c => 두 수를 더하는 함수 add, 두 수를 곱하는 함수 times

#include <stdio.h>

int plus(int x, int y) { return x + y; }
int times(int x, int y) { return x * y; }
int main()
{
    int (*fun)(int, int);
    fun = plus;
    printf("%d\n", fun(2, 3));
    fun = times;
    printf("%d\n", fun(2, 3));

    return 0;
}