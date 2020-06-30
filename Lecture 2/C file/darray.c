
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //int array[5];
    int index;
    int size;
    printf("Size를 입력하세요 : ");
    scanf("%d", &size);
    int *array = NULL;
    array = (int *)malloc(size * sizeof(int));
    for (index = 0; index < size; index++)
    {
        array[index] = index;
    }
    for (index = size - 1; index >= 0; index--)
    {
        printf("%d\n", array[index]);
    }
}