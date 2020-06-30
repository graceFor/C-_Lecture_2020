// ptrarray.c => 최근에 넣은 값부터 출력해라

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[80];
    char *strptr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", buffer);
        strptr[i] = (char *)malloc(strlen(buffer) + 1);
        strcpy(strptr[i], buffer);
    }
    for (int i = 2; i >= 0; i--)
    {
        printf("%s\n", strptr[i]);
    }
}
