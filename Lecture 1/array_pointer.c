//포인터를 배열처럼 사용하기

#include <stdio.h>

int main()
{
    char str[6] = "hello";
    char *p;

    p = str;

    printf("%s\n", str);        // hello
    printf("%s\n", p);          // hello
    printf("%c\n", str[1]);     // e
    printf("%c\n", p[1]);       // e
    printf("%c\n", *(str + 1)); // e
    printf("%c\n", *(p + 1));   // e
}