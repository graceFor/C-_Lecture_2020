//포인터를 배열처럼 사용하기

#include <stdio.h>

int main()
{
    char name[20] = "Jessie Norman";
    char *first;

    first = &name[7];      // Norman
    first[1] = 'a';        // Narman
    printf("%s\n", first); // Narman
    return 0;
}