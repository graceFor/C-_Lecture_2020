// templete 함수

#include <iostream>
using namespace std;
// template 함수 형태 정의
template <typename T>
T maxi(T x, T y) // template형태로 전환
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    double a = 1.5, b = 2.5;
    int i = 1, j = 2;
    cout << "둘 중 큰 수는: " << maxi(a, b) << endl;
    cout << "둘 중 큰 수는: " << maxi(i, j) << endl;
}