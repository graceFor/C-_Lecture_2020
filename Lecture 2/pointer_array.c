//pointer_array.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *pp[4];

    pp[0] = (char *)malloc(strlen("Hello") + 1);
    strcpy(pp[0], "Hello");
    printf("%s\n", pp[0]);

    char buffer[80];
    printf("string 입력 : ");
    scanf("%s", buffer);
    pp[1] = (char *)malloc(strlen(buffer) + 1);
    //strcpy(pp[1], buffer);
    pp[1] = _strdup(buffer);
    printf("%s\n", pp[1]);

    return 0;
}