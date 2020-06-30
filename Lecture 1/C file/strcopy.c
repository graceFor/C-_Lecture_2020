// string copy program

#include <stdio.h>
void stringcopy(char *dest, char *src)
{

    for (src; *src; src++, dest++)
    {
        *dest = *src;
    }
    *dest = 0;
}
int main()
{
    char array1[20];
    char array2[20];
    scanf("%s", array1);
    stringcopy(array2, array1);
    printf("%s\n", array2);
    return 0;
}