//Figure, Parallelogram overriding

#include <iostream>
using namespace std;

class Figure
{
public:
    Figure(float w, float h) : m_width(w), m_height(h) {}
    virtual float area() { return m_height * m_width; } // return 값(면적) 정의
protected:
    float m_width;
    float m_height;
};
class Parallelogram : public Figure
{
public:
    Parallelogram(float w, float h, float d) : Figure(w, h) { m_degree = d; }
    float area()
    {
        return m_width * m_height * m_degree;
    } // 체적을 구하는 메소드 area() 정의
private:
    float m_degree;
};

int main()
{
    Figure f(3, 4);
    Parallelogram p(4, 3, 60.0);
    cout << "면적 = " << f.area() << endl;
    cout << "체적 = " << p.area() << endl;

    return 0;
}