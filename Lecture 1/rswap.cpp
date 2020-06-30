// rswap.cpp

#include <stdio.h>

void rswap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 0, b = 0;
    printf("a와 b의 값을 입력하시오 : ");
    scanf("%d %d", &a, &b);
    rswap(a, b);
    printf("%d %d\n", a, b);
}