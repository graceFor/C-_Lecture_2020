// Polygon에서 사각형, 직각사각형을 상속받아 나타내기

#include <iostream>
using namespace std;

class Polygon
{
protected:
    int m_width, m_height;

public:
    int area(){};
    void setsize(int w, int h)
    {
        m_width = w;
        m_height = h;
    }
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return m_width * m_height;
    }
};

class Triangel : public Polygon
{
public:
    int area()
    {
        return m_width * m_height / 2;
    }
};

int main()
{
    Rectangle r;
    Triangel t;
    r.setsize(3, 4);
    t.setsize(5, 10);
    int r_a = r.area();
    int t_a = t.area();
    cout << "사각형의 넓이 = " << r_a << endl;
    cout << "삼각형의 넓이 = " << t_a << endl;

    return 0;
}