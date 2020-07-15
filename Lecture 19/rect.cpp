//unary operator를 이용해서 사각형의 폭을 1 증가시키는 전치 연산자 ++와 높이를 1씩 증가시키는 후위 연산자++를 정의

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
    const int operator++()
    {
        return m_width++;
    }
    const int operator++(int n)
    {
        return m_height++;
    }

private:
    int m_width, m_height;
};

int main()
{
    Rect r(2, 3);
    r++; // 높이 증가
    cout << *r << endl;
    ++r; // 너비 증가
    cout << *r << endl;
    return 0;
}
