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
    printf("%2.1f + %2.1fi\n", a->re, a->im);
}
Complex *new_complex(double r, double i)
{
    Complex *t;
    t = (Complex *)malloc(sizeof(Complex));
    t->re = r;
    t->im = i;
    t->printfunc = print_c;
    return t;
}

int main()
{
    Complex *c;
    c = new_complex(2.2, 3.3);
    c->printfunc(c);

    return 0;
}