//pswap.c

#include <stdio.h>

void pswap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int one, two;
    printf("one과 two의 값을 입력하시오: ");
    scanf("%d %d", &one, &two);
    pswap(&one, &two);
    scanf("%d %d", &one, &two);
}
