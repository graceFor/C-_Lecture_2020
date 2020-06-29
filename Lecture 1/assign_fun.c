// assign_fun.c

#include <stdio.h>

void assign(int *x, int y)
{
    *x = y;
}
int main()
{
    int a = 0, b = 999;
    assign(&a, b);
    printf("%d\n", a);
    return 0;
}