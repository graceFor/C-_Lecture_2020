//class Dog => parent, class Jindo => child (상속)

#include <iostream>

using namespace std;

class Dog
{
public:
    Dog(string n) : m_name(n) {}
    void show() { cout << "나는 " << m_name << "입니다." << endl; }

private:
    string m_name;
};

class Jindo : public Dog
{
public:
    Jindo(string n) : Dog(n) {}
};

int main()
{
    Dog d("치와와");
    d.show();
    Jindo j("진도개");
    j.show();
    return 0;
}