// 배열의 범위를 체크하는 프로그램

#include <iostream>
using namespace std;

class LimitedArray
{
private:
    int data[100];
    int limit;

public:
    LimitedArray(int n) : limit(n) {}
    int &operator[](int n)
    {
        if (n >= limit)
        {
            cout << "Bounds error\n";
            return data[0];
        }
        return data[n];
    }
};

int main()
{
    LimitedArray a(5); // Array of size 5
    i = a[6];          // Bounds error
    i = a[3];          // Okay
    a[3] = 1;          // 현재는 불가능 하지만 배열은 시작주소를 포함하므로
                       // & 사용으로 Okay. l-value로 사용 가능
}