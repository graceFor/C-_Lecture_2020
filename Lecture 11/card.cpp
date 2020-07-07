
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
    void setSuit(int s) { suit = s; }
    void setRank(int r) { rank = r; }
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
    card1.setRank(11);
    card1.setSuit(spade); //0
    card1.show();

    return 0;
}
