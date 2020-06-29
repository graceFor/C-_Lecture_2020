// pointer
#include <stdio.h>

int main()
{
    char c = 'a';
    char *p = NULL;

    p = &c;
    printf("%x\n", &c);
    printf("%x\n", p);
    printf("%c\n", *p);

    return 0;
}