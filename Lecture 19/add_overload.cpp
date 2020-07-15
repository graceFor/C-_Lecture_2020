//Add String => overload

#include <iostream>
#include <string>
using namespace std;

string addString(string s1, string s2)
{
    return s1.append(s2);
}

int main()
{
    string s1("Hello"), s2("world");
    cout << addString(s1, s2) << endl;
    return 0;
}