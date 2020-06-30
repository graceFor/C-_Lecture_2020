// error.c

#include <stdlib.h>
#include <stdio.h>

int main()
{
    double *pDegree = NULL; // 포인터 초기화
    pDegree = (double *)malloc(sizeof(double));
    *pDegree = 12.345;
    printf("%lf\n", *pDegree);
}