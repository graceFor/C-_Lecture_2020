//여러가지 생성자 만들기

#include <iostream>

using namespace std;

class Rect
{
public:
    Rect()
    {
        width = 1;
        height = 1;
    }
    Rect(int r) : width(r), height(r) {} //base init방법
    Rect(int w, int h)
    {
        width = w;
        height = h;
    }
    void area()
    {
        cout << "면적 " << width << " * " << height << " = " << width * height << endl;
    }

private:
    int width, height;
};

int main()
{
    Rect *r1 = new Rect();
    r1->area();
    Rect *r2 = new Rect(2);
    r2->area();
    Rect *r3 = new Rect(3, 4);
    r3->area();

    return 0;
}