#include <iostream>
#include <stdio.h>
using namespace std;

class Boonsoo
{
    int ja; // 분자
    int mo; // 분모
public:
    void set(int j, int m)
    {
        ja = j;
        mo = m;
    }
    int get_ja() { return ja; }
    int get_mo() { return mo; }
    void Add(Boonsoo *b)
    { // 두 개의 분수를 통분하여 더하는 코드 작성

        if (mo == b->mo)
        {
            ja = ja + b->ja;
        }
        else
        {
            ja = (ja * b->mo) + (b->ja * mo);
            mo = mo * b->mo;
        }
    }
    void print()
    {
        cout << ja << "/" << mo << endl;
    }
};

Boonsoo *boonMult(Boonsoo &a, Boonsoo &b)
{
    Boonsoo *temp = new (Boonsoo);
    temp->set((a.get_ja() * b.get_ja()), (a.get_mo() * b.get_mo()));
    return temp;
}

int main()
{
    Boonsoo boonA, boonB;
    boonA.set(2, 3);
    boonB.set(3, 5);
    boonA.print();
    boonB.print();
    Boonsoo *boonC = boonMult(boonA, boonB);
    boonC->print();
    boonA.Add(&boonB);
    boonA.print();

    return 0;
}