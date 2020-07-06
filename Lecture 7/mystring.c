// C언어로 객체 만들기 6 => mystring.c

#include <stdio.h>
#include <stdlib.h>

typedef struct mystring
{
    char *p;
    void (*show)(struct mystring *s);
} mystring;

void print(mystring *s)
{
    if (s->p == 0)
    {
        printf("String is not initialized\n");
    }
    else
    {
        printf("%s", s->p);
    }
}

mystring *new_string(char *s)
{

    mystring *temp = (mystring *)malloc(sizeof(mystring));
    temp->p = strdup(s);
    temp->show = print;
    return temp;
}
int main()
{
    mystring *str;
    str = new_string("Hello");
    str->show(str);
    free(str);
    return 0;
}