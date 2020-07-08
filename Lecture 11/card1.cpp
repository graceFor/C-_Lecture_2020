// 조건을 설정하여 범위를 넘는 경우에는 변경하지 않고 그냥 return 하기

#include <iostream>
#include <stdio.h>
using namespace std;

class Card
{
public:
    int suit;
    int rank;
    bool faceUp;
    Card()
    {
        suit = 0;
        rank = 0;
    }
    int getSuit() { return suit; }
    int getRank() { return rank; }
    void setSuitRank(int s, int r)
    {
        if (s >= 0 && s <= 3)
        {
            suit = s;
        }
        if (r >= 0 && r <= 12)
        {
            rank = r;
        }
    }
    void flip() { faceUp = !faceUp; }
    void show() { cout << "Suit: " << suit << endl
                       << "Rank: " << rank << endl; }
};

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
