//stack을 local 변수를 이용해서 만들기

#include <stdio.h>
#include <stdlib.h>

struct item
{
    int score;
    struct item *next;
};

void insert(struct item **s, int n)
{
    struct item *pAlloc;
    pAlloc = (struct item *)malloc(sizeof(struct item));
    pAlloc->score = n;
    pAlloc->next = *s;
    *s = pAlloc;
}

int top(struct item *s)
{
    return s->score;
}
void pop(struct item **s)
{
    struct item *pFree;
    pFree = *s; //삭제할 item 가르키기
    *s = (*s)->next;
    free(pFree);
}

int main()
{
    struct item *pStack = NULL; // stack pointer
    insert(&pStack, 1);
    insert(&pStack, 2);
    insert(&pStack, 3);

    printf("Stack top is %d\n", top(pStack)); // 3
    pop(&pStack);
    printf("Stack top is %d\n", top(pStack)); // 2
    pop(&pStack);
    printf("Stack top is %d\n", top(pStack)); // 1

    return 0;
}
