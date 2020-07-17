// list_set => privarte로 상속받기

#include <iostream>
using namespace std;

class Link
{
public:
    Link() {}
    int m_data;
    Link *next;
    friend class List;
};
class List
{
public:
    List() : m_first(0) {}
    bool find(int n)
    {
        Link *p;
        for (p = m_first; p; p = p->next)
        {
            if (p->m_data == n)
                return true;
        }
        return false;
    }
    void insert(int data)
    {
        Link *t = new Link();
        t->next = m_first;
        t->m_data = data;
        m_first = t;
    }
    void printall()
    {
        Link *p;
        cout << "START: ";
        for (p = m_first; p; p = p->next)
        {
            cout << p->m_data << " --> ";
        }
        cout << "END" << endl;
    }

private:
    Link *m_first;
};
//class Set ==> List를 상속 받아 만든다.
class Set : private List
{
public:
    void insert(int data)
    {
        if (find(data) == 1)
        {
            return;
        }
        List::insert(data);
    }
    void printall()
    {
        List::printall();
    }
};
int main()
{
    List l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(2);
    l.printall();
    Set s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.printall();

    return 0;
}
