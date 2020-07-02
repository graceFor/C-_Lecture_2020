//stack을 local 변수를 이용해서 만들기 => print_stack

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

void print_stack(struct item *pS)
{
    printf("TOP: ");
    for (; pS; pS = pS->next)
    {
        printf("%d --> ", pS->score);
    }
    printf("END\n");
}
int main()
{
    struct item *pStack = NULL; // stack pointer
    insert(&pStack, 1);
    insert(&pStack, 2);
    insert(&pStack, 3);

    print_stack(pStack);
    pop(&pStack);
    print_stack(pStack);
    pop(&pStack);
    print_stack(pStack);
    pop(&pStack);
    print_stack(pStack);

    return 0;
}
