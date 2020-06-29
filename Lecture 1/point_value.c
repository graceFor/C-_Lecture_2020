//pointer value

#include <stdio.h>

int main()
{
    char c = 'a';
    char *p = NULL;

    p = &c;
    putchar(c);
    putchar(*p);

    *p = 'c';
    putchar(c);
    putchar(*p);

    return 0;
}