// card.h
#ifndef __CARD_H
#define __CARD_H
class Card
{
public:
    int suit;
    int rank;
    bool faceUp;
    Card();
    int getSuit();
    int getRank();
    void setSuitRank(int s, int r);
    void flip();
    void show(); //원형만 남겨두고
};

#endif