//stack을 전역변수를 이용해서 만들기

#include <stdio.h>
#include <stdlib.h>

struct item
{
    int score;
    struct item *next;
};
struct item *pStack; // stack pointer

void insert(int n)
{
    struct item *pAlloc;
    pAlloc = (struct item *)malloc(sizeof(struct item));
    pAlloc->score = n;
    pAlloc->next = pStack;
    pStack = pAlloc;
}

int top()
{
    return pStack->score;
}
void pop()
{
    struct item *pFree;
    pFree = pStack; //삭제할 item 가르키기
    pStack = pStack->next;
    free(pFree);
}

int main()
{
    pStack = NULL;
    insert(1);
    insert(2);
    insert(3);

    printf("Stack top is %d\n", top()); // 3
    pop();
    printf("Stack top is %d\n", top()); // 2
    pop();
    printf("Stack top is %d\n", top()); // 1

    return 0;
}
