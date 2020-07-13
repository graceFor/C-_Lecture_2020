//FlyingDog (상속)

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

class FlyingDog : public Dog
{
public:
    FlyingDog(string n) : Dog(n) {}
    void fly()
    {
        cout << "훨훨\n";
    }
};

int main()
{
    FlyingDog d("플라이견");
    d.show();
    d.fly();
    return 0;
}