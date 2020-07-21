#include <iostream>
#include <iomanip>
#define MAX 5
#include <string>
using namespace std;

template <typename T>
float Average(T x)
{
    float avg;
    return avg = (float)x / 3;
}

class Course
{
private:
    int num;
    char name[10];

public:
    int kor;
    int eng;
    int math;
    float tot;
    float avg;
    Course(int k, int e, int m)
    {
        this->kor = k;
        this->eng = e;
        this->math = m;
    }
};
class Register
{
public:
    Register(int n, const char *s)
    {
        num = n;
        strcpy(name, s);
    }

private:
    int num;
    char name[10];
    friend class Student;
};

class Student : public Register
{
public:
    Student(int n, const char *s, int k, int e, int m) : Register(n, s)
    {
        c = new Course(k, e, m);
    }
    void Print();
    friend void Total(Student kim[]);
    const Student operator+(int);

private:
    Course *c;
};

void Student::Print()
{
    cout << num << " " << name << " " << c->kor << " " << c->eng << " " << c->math << " " << c->tot << " " << c->avg << endl;
}
const Student Student ::operator+(int)
{
    c->kor = c->kor + 3;
    c->math = c->math + 3;
    c->eng = c->eng + 3;
    return *this;
}

void Total(Student kim[])
{

    for (int i = 0; i < MAX; i++)
    {
        kim[i].c->tot = kim[i].c->kor + kim[i].c->eng + kim[i].c->math;
        kim[i].c->avg = Average(kim[i].c->tot);
    }
}

int main()
{
    Student st[MAX] = {
        Student(101, "Kim", 85, 90, 80),
        Student(102, "Lee", 90, 95, 89),
        Student(103, "Park", 80, 70, 70),
        Student(104, "Hong", 75, 80, 90),
        Student(105, "Kang", 85, 90, 85)};
    for (int i = 0; i < 5; i++)
    {
        st[i] = st[i] + 3;
    }
    Total(st);
    cout << "학번" << setw(6) << "이름" << setw(7) << "국어" << setw(7) << "영어" << setw(7) << "수학" << setw(7) << "평균" << endl;
    cout << "===========================================================================" << endl;
    for (int i = 0; i < MAX; i++)
    {
        st[i].Print();
    }
}
