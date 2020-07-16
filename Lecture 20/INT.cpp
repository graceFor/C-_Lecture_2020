// Magnitude => INT overriding

#include <iostream>
using namespace std;

class Magnitude
{
public:
    virtual int operator<=(Magnitude &x)
    {
        cout << "M <= ";
        return (*this < x) || (*this == x);
    }
    virtual int operator>=(Magnitude &x)
    {
        cout << "M >= ";
        return !(*this < x);
    }
    virtual int operator<(Magnitude &x)
    {
        cout << "M < ";
        return (*this <= x) && !(*this == x);
    }
    virtual int operator>(Magnitude &x)
    {
        cout << "M > ";
        return (x < *this);
    }
    virtual int operator==(Magnitude &x)
    {
        cout << "M == ";
        return (*this == x);
    }
};

class INT : public Magnitude
{
public:
    int data;
    INT(int a) : data(a) {}
    int operator==(Magnitude &x)
    {
        cout << "Iop == ";
        return ((INT *)(&x))->data == this->data;
    }
    int operator<(Magnitude &x)
    {
        cout << "Iop < ";
        return ((INT *)(&x))->data > this->data;
    }
};

int main()
{
    Magnitude *m1 = new INT(1);
    Magnitude *m2 = new INT(2);
    cout << ((*m1) <= (*m2)) << endl;
    cout << ((*m1) >= (*m2)) << endl;
    INT a(1), b(2);
    if (a <= b)
        cout << "a smaller\n";
    if (b >= a)
        cout << "b >= a\n";
    if (b > a)
        cout << "b is larger\n";
    if (a < b)
        cout << "a is smaler\n";

    return 0;
}