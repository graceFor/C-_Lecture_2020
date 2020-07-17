// Person has subclasses Boy and Girl.

#include <iostream>
using namespace std;

class Person
{
public:
    virtual void say() { cout << "Person" << endl; }

private:
};
class Girl : public Person
{
public:
    virtual void say() { cout << "Girl" << endl; }

private:
};
class Boy : public Person
{
public:
    virtual void say() { cout << "Boy" << endl; }

private:
};
template <class T>
class Box
{
public:
    void set(T *t)
    {
        m_t = t;
    }
    void say() { m_t->say(); }
    T *m_t;
};

int main()
{
    Box<Person> *aBox;
    aBox = new Box<Person>;
    Person *aGirl = new Girl; // error aGirl = new Box<Girl> 로 바꿀 경우
    aBox->set(new Girl);
    aBox->say();
}
