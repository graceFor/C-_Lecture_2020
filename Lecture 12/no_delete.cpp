//no_delete.cpp

#include <iostream>
#include <string.h>

using namespace std;

class mystring
{
    char buffer[100 * 1024 * 1024];

public:
    void set(const char *s)
    {
        strcpy(buffer, s);
    }
};

int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        mystring *str;
        str = new mystring;
        cout << i << endl;
        delete str;
    }
    cout << "정상 종료\n";
}