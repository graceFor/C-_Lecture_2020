// typedef의 이용

#include <stdio.h>

typedef int DBLFUN(int, int);

int main()
{
    DBLFUN *ff();
    DBLFUN *fun;

    fun = ff();
    printf("%d\n", fun(2, 3));

    return 0;
}

int plus(int x, int y) { return x + y; }
DBLFUN *ff() { return &plus; }