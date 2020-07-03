// 연결리스트의 마지막(맨 끝) 노드를 찾아 마지막 노드 다음에 새로운 노드를 연결하여 연결리스트를 만드는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct item
{
    int data;
    struct item *next;
};

// append 함수는 리스트의 맨 뒤에 붙이는 함수
void append(struct item **ppS, int num)
{
    struct item *temp;
    temp = (struct item *)malloc(sizeof(struct item));
    temp->data = num;
    temp->next = NULL;
    if ((*ppS) == NULL)
    {
        (*ppS) = temp;
    }
    else
    {
        struct item *palloc;
        palloc = (struct item *)malloc(sizeof(struct item));
        palloc = *ppS;
        while (palloc->next != NULL)
        {
            palloc = palloc->next;
        }
        palloc->next = temp;
    }
}

// del_end 함수는 리스트의 맨 뒤에 있는 항목을 삭제하는 함수.
void del_end(struct item **ppS)
{
    struct item *temp;
    temp = (struct item *)malloc(sizeof(struct item));
    temp = (*ppS);

    if (temp == NULL)
    { // item 존재하지 않으면
        return;
    }

    else
    {

        if (temp->next == NULL)
        { // 한 개의 item만 존재하면 그 item 삭제
            free(temp);
            *ppS = NULL;
        }
        else
        { // 그 외
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            free(temp->next);
            temp->next = NULL;
        }
    }
}

// print_all 함수는 리스트의 끝까지 각 항목을 방문하며 항목의 값을 인쇄하는 함수.
void print_all(struct item *p)
{
    while (p != NULL)
    {
        printf("%d-->", p->data);
        p = p->next;
    }
    printf("END\n");
}

int main()
{
    struct item *pStart = NULL;
    int data;

    while (scanf("%d", &data) == 1) //  ^D enter 입력으로 종료
    {
        append(&pStart, data);
    }

    print_all(pStart);
    del_end(&pStart);
    print_all(pStart);

    return 0;
}
