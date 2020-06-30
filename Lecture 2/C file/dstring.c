// dstring.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[20];
    char *name_a = NULL;
    char *name_b = NULL;

    printf("name_a 입력 : ");
    scanf("%s", buffer);
    name_a = (char *)malloc(sizeof(strlen(buffer) + 1));
    strcpy(name_a, buffer);

    printf("name_b 입력 : ");
    scanf("%s", buffer);
    name_b = (char *)malloc(sizeof(strlen(buffer) + 1));
    strcpy(name_b, buffer);

    printf("name_a = %s\n", name_a);
    printf("name_b = %s\n", name_b);

    free(name_a);
    free(name_b);

    return 0;
}