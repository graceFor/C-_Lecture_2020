// C언어로 객체 만들기 2

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double re;
    double im;
    void (*printfunc)(struct Complex *);
} Complex;

void print_c(Complex *a)
{
    printf("%2.1f+%2.1fi\n", a->re, a->im);
}

int main()
{

    Complex *cp;
    cp = (Complex *)malloc(sizeof(Complex));
    cp->printfunc = print_c;
    cp->re = 1.1;
    cp->im = 2.2;
    cp->printfunc(cp);

    return 0;
}