// mysin.app

#include <iostream>
#include <stdio.h>

class MYCIN
{
public:
    MYCIN &operator>>(int &i)
    {
        scanf("%d", &i);
        return *this;
    }
    MYCIN &operator>>(double &i)
    {
        scanf("%lf", &i);
        return *this;
    }
    MYCIN &operator>>(char *i)
    {
        scanf("%s", i);
        return *this;
    }
};

int main()
{
    MYCIN cin;
    int x;
    double y;
    char str[100];
    cin >> x >> y >> str;
    printf("%d, %lf, %s", x, y, str);

    return 0;
}