// strcpy.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "Hello World";
    char *s;
    s = str1;
    printf("%s\n", s);
    strcpy(str1, "Howdy!");
    printf("%s\n", s);
}