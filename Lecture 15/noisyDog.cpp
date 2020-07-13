//noisyDog (상속 - overriding)

#include <iostream>

using namespace std;

class Dog
{
public:
    Dog(string n) : m_name(n) {}
    void show() { cout << "나는 " << m_name << "입니다." << endl; }
    void bark() { cout << "멍멍~" << endl; }

private:
    string m_name;
};

class noisyDog : public Dog
{
public:
    noisyDog(string n) : Dog(n) {}
    void bark()
    {
        Dog::bark();
        Dog::bark();
    }
};

int main()
{
    noisyDog d("시끄러운개");
    d.show();
    d.bark();
}