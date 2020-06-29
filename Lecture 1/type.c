// warning => type 다름
#include <stdio.h>

int main()
{
    int num = 12345;
    char *pNum;
    pNum = &num;
    printf("%d\n", *pNum);
    return 0;
}