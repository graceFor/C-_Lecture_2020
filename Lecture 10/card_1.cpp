// 생성자 호출

#include <iostream>
#include <stdio.h>
using namespace std;

class Card
{
public:
    static int num_instance;
    int m_data;
    Card()
    {
        cout << "생성자 호출 " << num_instance++ << endl;
        m_data = 0;
    }
    void show()
    {
        cout << "일련번호 " << num_instance << endl;
    }
};
int Card::num_instance = 0;

int main()
{
    Card c1;
    Card *pc;
    pc = 0;
    pc = new Card;

    return 0;
}