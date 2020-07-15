// 함수 add를 operator version 으로 바꾸고 테스트는 add(x,y) 대신 x + y 로 바꾼다.

#include <iostream>
using namespace std;

class INT
{
public:
    INT() : m_data(0) {}
    INT(int i) : m_data(i) {}
    int getValue() { return m_data; }

private:
    int m_data;
};
const INT operator+(INT a, INT b)
{
    return INT(a.getValue() + b.getValue());
}
const INT operator*(INT a, INT b)
{
    return INT(a.getValue() * b.getValue());
}

int main()
{
    INT x(3), y(4), a, m;
    a = x + y;
    cout << a.getValue() << endl;
    m = x * y;
    cout << m.getValue() << endl;
}