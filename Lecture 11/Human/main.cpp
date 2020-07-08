#include "boy.h"
#include "girl.h"

int main()
{
    Boy *b = new Boy("김철수");
    Girl *g = new Girl("박영은");
    b->SetGF(g);
    g->SetBF(b);

    b->hello();
    g->hello();

    return 0;
}