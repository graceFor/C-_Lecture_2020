// typedef의 이용

#include <stdio.h>

void prn()
{
    printf("연습\n");
}
struct kim
{
    int data;
    void (*fun)();
};

int main()
{
    struct kim a;
    a.fun = prn;
    a.fun();

    return 0;
}
