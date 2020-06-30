//str_ptr2.c => world만 출력되도록 하기
#include <stdio.h>

int main()
{
    char *str = "Hello world";

    str += 6;

    printf("%s\n", str);
    return 0;
}