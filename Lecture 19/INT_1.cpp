// method로 정의하기

#include <iostream>
using namespace std;

class INT
{
public: // 생성자 2개 필요.
    INT() : m_data(0) {}
    INT(int i) : m_data(i) {}
    int getValue() { return m_data; }
    const INT operator+(INT b)
    {
        return INT(this->m_data + b.m_data);
    }
    const INT operator*(INT b)
    {
        return INT(m_data * b.m_data);
    }

private:
    int m_data;
};

int main()
{
    INT x(3), y(4), z;
    z = x + y; // z = x.operator + (y)
    cout << z.getValue() << endl;
}