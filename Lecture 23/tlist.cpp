//Templete class 선언

#include <iostream>
using namespace std;

template <class T>
class List
{
    class Link
    {
    public:
        Link() {}
        T m_data;
        Link *next;
    };

public:
    List() : m_first(0) {}
    void insert(T data)
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
            cout << p->m_data;
            cout << " --> ";
        }
        cout << "END" << endl;
    }

private:
    Link *m_first;
};

int main()
{
    List<int> i;
    i.insert(1);
    i.insert(2);
    i.insert(3);
    i.printall();
    List<double> l;
    l.insert(1.1);
    l.insert(2.2);
    l.insert(3.3);
    l.printall();

    return 0;
}