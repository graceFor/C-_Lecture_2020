//list4.c

#include <stdio.h>

struct item
{
    int score;
    struct item *next;
};

int main()
{
    struct item A, B, C, D;
    struct item *pFirst;
    struct item *p;
    A.score = 1;
    B.score = 2;
    C.score = 3;
    D.score = 4;
    pFirst = &A;
    A.next = &B;
    B.next = &C;
    C.next = &D;
    D.next = NULL;
    p = pFirst;
    printf("%d-->", p->score); //A의 score -> 1
    p = p->next;
    printf("%d-->", p->score); //B의 score ->2
    p = p->next;
    printf("%d-->", p->score); //C의 score ->3
    p = p->next;
    printf("%d-->", p->score); //D의 score ->4

    printf("END\n");
    return 0;
}
