//Templete class 선언

#include <iostream>
using namespace std;

// template 클래스 형식 선언
template <class T>
// class Rect 에서 int 를 형식에 맞게 수정
class Rect
{
private:
    T w, h;

public:
    Rect(T w, T h) : w(w), h(h) {}
    T area() { return w * h; }
};
int main()
{
    Rect<int> a(2, 3);
    Rect<double> b(2.5, 3.5);
    cout << a.area() << endl;
    cout << b.area() << endl;

    return 0;
}