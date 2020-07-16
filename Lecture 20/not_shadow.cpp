
// Polymorphism: virtual 키워드 없으면 shadowing 된다.

#include <iostream>
using namespace std;

class Parent
{
public: // virtual keyword here
    virtual void example() { cout << "Parent" << endl; }
};
class Child : public Parent
{
public:
    void example() { cout << "Child" << endl; }
};
int main()
{
    Parent *p = new Parent();
    p->example(); // Parent
    Child *c = new Child();
    c->example(); // Child
    p = c;
    p->example(); // Child

    return 0;
}