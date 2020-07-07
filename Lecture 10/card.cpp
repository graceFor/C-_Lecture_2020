// 클래스 변수

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
        num_instance++;
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
    c1.show();
    Card c2;
    c2.show();

    return 0;
}