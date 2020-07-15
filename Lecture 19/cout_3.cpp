// COUT 클래스를 만들어 정수, double, 그리고 스트링을 출력할 수 있게 한다.
// 여러개 출력하기

#include <stdio.h>

class COUT
{
public:
    COUT operator<<(int i)
    {
        printf("%d\n", i);
        return *this;
    }
    COUT operator<<(const char *i)
    { // 문자열 출력
        printf("%s\n", i);
        return *this;
    }
    COUT operator<<(double i)
    { // double형 출력
        printf("%lf\n", i);
        return *this; // 자기 자신 리턴
    }
};

int main()
{
    COUT cout;
    cout << 99 << "Hello world" << 3.14;

    return 0;
}