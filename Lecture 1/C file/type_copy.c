// warning => type 다름 (int-> int)
#include <stdio.h>

int main()
{
    int num = 12345;
    int *pNum;
    pNum = &num;
    printf("%d\n", *pNum);
    return 0;
}