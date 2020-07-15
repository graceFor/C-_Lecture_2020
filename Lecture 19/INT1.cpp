// 하나의 정수를 나타내기 위한 INT 클래스를 정의하고 함수 add를 정의하라

#include <iostream>
using namespace std;

class INT
{
public: // 생성자 2개 필요.
    INT() : m_data(0) {}
    INT(int i) : m_data(i) {}
    INT(int i, int j) { m_data = i + j; }
    int getValue() { return m_data; }

private:
    int m_data;
};
const INT add(INT a, INT b)
{
    INT temp(a.getValue(), b.getValue());
    // 생성자를 이용하여 덧셈을 한다.
    return temp; // temp를 반환한다.
}
L int main()
{
    INT x(3), y(4), z;
    z = add(x, y);
    cout << z.getValue() << endl;
}