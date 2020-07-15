//overloading => c++ 형태

#include <iostream>
#include <stdio.h>
using namespace std;

int max(int x, int y, int c)
{
    return max(max(x, y), c);
}

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int i, j, k;
    while (cin >> i >> j >> k)
    {
        cout << max(i, j, k) << endl;
    }

    return 0;
}