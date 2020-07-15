//overloading => c언어 형태

#include <iostream>
#include <stdio.h>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}

float max(float x, float y)
{
    return (x > y) ? x : y;
}

int main()
{
    int result, i = 1, j = 2;
    float fresult, f1 = 1.5, f2 = 2.5;
    result = max(i, j);
    fresult = max(f1, f2);
    printf("%d\n", result);
    printf("%f\n", fresult);

    return 0;
}