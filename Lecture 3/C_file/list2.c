//list2.c => 중간에 C 추가

#include <stdio.h>

struct item
{
    int score;
    struct item *next;
};

int main()
{
    struct item A, B, C;
    struct item *first;
    first = &A;
    A.score = 1;
    A.next = &B;
    B.score = 2;
    B.next = NULL;

    C.score = 3;
    C.next = &A;
    first = &C;

    printf("%d\n", first->score);             //C의 score -> 3 출력
    printf("%d\n", first->next->score);       //A의 score -> 1 출력
    printf("%d\n", first->next->next->score); //B의 score -> 2 출력

    return 0;
}