// cout.cpp

#include <stdio.h>
#include <iostream>

class COUT
{
public:
    void operator<<(int i)
    {
        printf("%d\n", i);
    }
};
int main()
{
    COUT cout;
    cout << 1;
    return 0;
}
