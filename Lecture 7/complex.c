// C언어로 객체 만들기

#include <stdio.h>
typedef struct
{
    double re;
    double im;
} Complex;

void print_c(Complex a)
{
    printf("%2.1f+%2.1fi\n", a.re, a.im);
}

int main()
{
    Complex x = {1.1, 2.2}, y = {3.3, 4.4};

    print_c(x);
    print_c(y);

    return 0;
}