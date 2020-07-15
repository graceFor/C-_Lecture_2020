// COUT 클래스를 만들어 정수, double, 그리고 스트링을 출력할 수 있게 한다.

#include <stdio.h>
class COUT
{
public:
    void operator<<(int i)
    {
        printf("%d\n", i);
    }
    void operator<<(const char *i)
    { // 문자열 출력
        printf("%s\n", i);
    }
    void operator<<(double i)
    { // double형 출력
        printf("%lf\n", i);
    }
};

int main()
{
    COUT cout;
    cout << 99;
    cout << "Hello world";
    cout << 3.14;

    return 0;
}