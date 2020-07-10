//Memory Leak one solution

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class String
{
    char *m_data;

public:
    String(char *s)
    {
        m_data = (char *)malloc(strlen(s) + 1);
        strcpy(m_data, s);
    }
    ~String() { free(m_data); }
};
int main()
{
    String *p = new String("Hello");
    delete (p);

    return 0;
}