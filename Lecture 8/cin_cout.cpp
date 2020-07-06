//ci and cout

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    char c;
    double ratio;
    char s[20];
    cin >> num;
    cin >> c;
    cin >> ratio >> s;

    cout << num << endl;
    cout << c << endl;
    cout << ratio << s;

    if (cin >> num)
    {
        cout << "데이터 입력됨" << endl;
    }
    else
    {
        cout << "더이상 입력이 없습니다." << endl;
    }
    return 0;
}