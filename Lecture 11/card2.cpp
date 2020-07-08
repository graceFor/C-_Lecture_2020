// 원형과 구현의 분리
#include <stdio.h>
#include "card.h"

int main()
{
    enum suit
    {
        spade,
        diamond,
        clover,
        heart
    };
    Card card1;
    card1.setSuitRank(clover, 11);
    card1.show();
    card1.setSuitRank(heart, 15);
    card1.show();
    card1.setSuitRank(4, 1);
    card1.show();

    return 0;
}
