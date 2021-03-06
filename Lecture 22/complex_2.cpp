// complex_2.cpp => friend

#include <iostream>
using namespace std;

class Complex
{
public:
    Complex() : re(0), im(0) {}
    Complex(double r, double i) : re(r), im(i) {}
    void print() { cout << re << " + " << im << "i\n"; }
    Complex operator+(Complex b)
    {
        return Complex(re + b.re, im + b.im);
    }

private:
    double re, im;
    friend Complex operator*(int a, Complex b);
};

Complex operator*(int a, Complex b)
{
    return Complex(a * b.re, a * b.im);
}

int main()
{
    Complex a(1.1, 2.2), b(2.2, 1.1);
    Complex c;
    c = 2 * (a + b);
    c.print(); // 6.6 + 6.6i 형태로 출력
}