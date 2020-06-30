// length 구하기

#include <stdio.h>

int main()
{
    char buffer[10] = "Hello";
    int len = 0;
    for (int n = 0; buffer[n] != 0; n++)
    {
        len++;
    }
    printf("%d\n", len);
}