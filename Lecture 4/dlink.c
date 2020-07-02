#include <stdio.h>
#include <stdlib.h>

struct item
{
    int score;
    struct item *next;
};
struct item *p;
struct item *pFirst = NULL;

int main()
{
    p = (struct item *)malloc(sizeof(struct item));
    p->score = 33;
    p->next = pFirst;
    pFirst = p;

    p = (struct item *)malloc(sizeof(struct item));
    p->score = 22;
    p->next = pFirst;
    pFirst = p;

    p = (struct item *)malloc(sizeof(struct item));
    p->score = 11;
    p->next = pFirst;
    pFirst = p;

    printf("%d\n", pFirst->score);             //11
    printf("%d\n", pFirst->next->score);       //22
    printf("%d\n", pFirst->next->next->score); //33

    return 0;
}