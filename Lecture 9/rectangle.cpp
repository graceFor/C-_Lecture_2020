//rectangle.app

#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int m_height;

public:
    void setHeight(int h) { m_height = h; }
};

int main()
{
    Rectangle r;
    // r.m_height=1;
    r.setHeight(1);

    return 0;
}
