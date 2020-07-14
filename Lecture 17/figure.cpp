//Dynamic_Binding

#include <iostream>
using namespace std;

class Figure
{
protected:
    float width, height;

public:
    Figure()
    {
        width = 0;
        height = 0;
    }
    Figure(float w, float h)
    {
        width = w;
        height = h;
    }
    void setsize(float w, float h)
    {
        width = w;
        height = h;
    }
    virtual float area() { return 1; }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure() {}
    virtual float area() { return height * width * 0.5; }
};

class Rectangle : public Figure
{
public:
    Rectangle() : Figure() {}
    virtual float area() { return height * width; }
};

int main()
{
    Figure *all[2];
    int type;
    float width, height;
    cout << "타입과 너비, 높이를 입력하세요(0 삼각, 1 사각)";
    cin >> type >> width >> height;
    if (type == 0)
    {
        all[0] = new Triangle();
        all[0]->setsize(width, height);
        cout << "삼각형의 면적은 " << all[0]->area() << endl;
    }
    else
    {
        all[1] = new Rectangle();
        all[1]->setsize(width, height);
        cout << "사각형의 면적은 " << all[1]->area() << endl;
    }
    return 0;
}