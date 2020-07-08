
#include <iostream>
using namespace std;

class Student
{
private:
    string STU_number;
    string STU_name;
    int korea, english, total;
    double average;

public:
    string Get_STU_number() { return STU_number; }
    string Get_STU_name() { return STU_name; }
    int Get_Korea() { return korea; }
    int Get_English() { return english; }
    void Set_STU_number(string num) { STU_number = num; }
    void Set_STU_name(string name) { STU_name = name; }
    void Set_korea(int kor) { korea = kor; }
    void Set_english(int eng) { english = eng; }
    void Compute_total() { total = korea + english; }
    void Compute_average() { average = double(total) / 2; }
    void Print()
    {
        cout << "학번: " << STU_number << endl;
        cout << "이름: " << STU_name << endl;
        cout << "국어: " << korea << endl;
        cout << "영어: " << english << endl;
        cout << "총점: " << total << endl;
        cout << "평균: " << average << endl;
    }
};

int main()
{
    Student kim;
    kim.Set_STU_number("60162269");
    kim.Set_STU_name("김현경");
    kim.Set_korea(100);
    kim.Set_english(95);
    kim.Compute_total();
    kim.Compute_average();
    kim.Print();

    return 0;
}