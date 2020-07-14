// CStack class의 instance를 내부 변수(포인터)로 선언하여 데이터가 양수인 경우만 삽입하는 CPositiveStack

// CStack class에서 상속을 받아 데이터가 양수인 것만 받아들이는 CPositiveStack 을 만든다.

#include <iostream>
using namespace std;
class CStack
{
public:
    class node
    {
    public:
        int data;
        node *next;
        node(int x, node *nxt) : data(x), next(nxt) {}
    };
    CStack();
    void insert(int);
    int pop();
    void show();

protected:
    node *first;
};

CStack::CStack() { first = 0; }
void CStack::insert(int x)
{
    node *temp;
    temp = new node(x, first);
    temp->next = first;
    first = temp;
}
int CStack::pop()
{
    int retval;
    node *temp;
    if (first == 0)
        return -1;
    retval = first->data;
    temp = first;
    first = first->next;
    delete temp;
    return retval;
}

void CStack::show()
{
    node *temp;
    for (temp = first; temp; temp = temp->next)
        cout << temp->data << "--> ";
    cout << "END\n";
}

class CPositiveStack
{
public:
    CPositiveStack();
    void insert(int x)
    {
        if (x < 0)
            return;
        PS->insert(x);
    }
    void show()
    {
        PS->show();
    }
    void pop();

private:
    CStack *PS;
};

CPositiveStack::CPositiveStack()
{
    PS = new CStack();
}

int main()
{
    CStack s;
    CPositiveStack ps;
    s.insert(1);
    s.insert(2);
    s.insert(-3);
    s.insert(4);
    s.show();
    ps.insert(1);
    ps.insert(2);
    ps.insert(-3);
    ps.insert(4);
    ps.show();

    return 0;
}