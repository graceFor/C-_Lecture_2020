// 예외처리

#include <iostream>
using namespace std;

#include <stdio.h>
char msg[] = "존재하지 않는 스트링입니다.";
void mystrprint(const char *s)
{
    if (s == 0)
        throw msg;
    else
        printf("스트링은: %s입니다.\n", s);
}

int main()
{
    const char *s1 = "Hello";
    char *s2 = 0;
    try
    {
        mystrprint(s1);
        mystrprint(s2);
    }
    catch (char *s)
    {
        printf("%s", s);
    }
    return 0;
}
