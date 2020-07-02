// alist.c

#include <stdio.h>

int main()
{
    int start = 2;
    int score[8] = {55, 22, 11, 66, 33, 88, 44, 77};
    int next[8] = {3, 4, 1, 7, 6, -1, 0, 5};

    for (int i = start; i >= 0; i = next[i])
    {
        printf("%d\n", score[i]);
    }
    return 0;
}