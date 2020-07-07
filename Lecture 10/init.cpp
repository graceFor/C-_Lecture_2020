//사각형을 나타내는 주어진 클래스 Rect를 동적으로 할당

#include <iostream>
#include <stdio.h>
using namespace std;

class Rect
{
public:
    int m_width;
    int m_height;
    Rect()
    {
        m_width = 5;
        m_height = 6;
    }
    void show()
    {
        cout << "면적 " << m_width * m_height << endl;
    }
};

int main()
{
    Rect *rect;
    rect = new Rect;
    rect->show();

    return 0;
}