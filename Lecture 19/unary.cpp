//unary operator *를 사용하여 사각형의 면적을 프로그램하기

#include <iostream>
using namespace std;

class Rect
{
public:
    Rect(int w, int h) : m_width(w), m_height(h) {}
    const int operator*()
    {
        return m_width * m_height;
    }

private:
    int m_width, m_height;
};

int main()
{
    Rect r(2, 3);
    cout << *r << endl;

    return 0;
}
