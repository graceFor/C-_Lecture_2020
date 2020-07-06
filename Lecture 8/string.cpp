//C++ String type

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    string s("Hello");
    string s2;

    s2 = " world";
    s = s + s2;
    s += "!!!";

    cout << s << endl;

    return 0;
}