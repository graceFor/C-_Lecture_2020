//list1.c

#include <stdio.h>

struct item
{
    int score;
    struct item *next;
};

int main()
{
    struct item A, B;
    struct item *first;
    first = &A;
    A.score = 1;
    A.next = &B;
    B.score = 2;
    B.next = NULL;
    printf("%d\n", first->score);       //A의 score -> 1 출력
    printf("%d\n", A.score);            //A의 score -> 1 출력
    printf("%d\n", first->next->score); //B의 score -> 2 출력
    printf("%d\n", B.score);            //B의 score -> 2 출력
    printf("%d\n", (*(A.next)).score);  //B의 score -> 2 출력
}