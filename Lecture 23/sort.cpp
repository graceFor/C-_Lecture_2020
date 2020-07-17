// vector와 algorithm을 이용한 정렬: sort()

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void print(vector<int> array, string str)
{
    cout << str << endl;
    for (int i = 0; i < signed(array.size()); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int value[10] = {82, 225, 26, 7, 67, 55, 31, 19, 99};
    vector<int> v1(&value[0], &value[10]);
    print(v1, "초기 리스트");
    sort(v1.begin(), v1.end());
    print(v1, "sort() 적용 후 리스트");

    return 0;
}