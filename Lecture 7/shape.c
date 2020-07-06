// C언어로 객체 만들기 5 => shape.c

#include <stdio.h>
#include <stdlib.h>

typedef struct shape
{
    float width, height;
    float (*area)(struct shape *);
} shape;

float rect_area(struct shape *s)
{
    return s->width * s->height;
}

float tri_area(struct shape *s)
{
    return s->width * s->height * 0.5;
}

shape *new_triangle(float h, float w)
{

    shape *t = (shape *)malloc(sizeof(shape));
    t->height = h;
    t->width = w;
    t->area = tri_area;
    return t;
}

shape *new_rectangle(float h, float w)
{
    shape *r = (shape *)malloc(sizeof(shape));
    r->height = h;
    r->width = w;
    r->area = rect_area;
    return r;
}

int main()
{
    shape *tri, *rect;
    rect = new_rectangle(2.0, 4.0);
    tri = new_triangle(2.0, 4.0);
    printf("Rectangle Area = %lf\n", rect->area(rect));
    printf("Triangle Area = %lf\n", tri->area(tri));

    return 0;
}