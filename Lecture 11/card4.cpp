//cardm.cpp
#include <iostream>
#include "card.h"
using namespace std;

Card::Card()
{
    suit = 0;
    rank = 0;
}
int Card::getSuit() { return suit; }
int Card::getRank() { return rank; }
void Card::setSuitRank(int s, int r)
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
void Card::flip() { faceUp = !faceUp; }
void Card::show()
{ //구현은 여기서
    {
        cout << "Suit: " << suit << endl
             << "Rank: " << rank << endl;
    }
}