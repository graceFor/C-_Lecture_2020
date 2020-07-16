//realloc. c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p;
    char q[20];

    p = (char *)malloc(sizeof(char) * 10);
    printf("string 입력 : ");
    scanf("%s", q);
    strcpy(p, q);

    printf("string 입력 : ");
    scanf("%s", q);

    if (strlen(p) + strlen(q) + 1 > 10)
    {
        p = realloc(p, strlen(p) + strlen(q) + 1);
    }
    strcat(p, q);
    printf("%s\n", p);
    return 0;
}