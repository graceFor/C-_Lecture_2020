// Templete 함수 선언

#include <iostream>
using namespace std;
// template 함수(maxi())를 여기 작성.
template <typename T>
T maxi(T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

class Rect
{
private:
    int w, h;

public:
    Rect(int w, int h) : w(w), h(h) {}
    bool operator>(Rect &r)
    {
        return area() > r.area(); // 면적이 큰 객체의 면적을 되돌려 줌
    }
    int area() { return w * h; }
    void show()
    {
        cout << "사각형 " << w << "X" << h << endl;
    }
};
int main()
{
    Rect a(1, 2), b(2, 3);
    Rect c = maxi(a, b);
    c.show();
}