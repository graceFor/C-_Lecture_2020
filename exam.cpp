#include <iostream>
#define MAX 5
#include <string>
using namespace std;

template <typename T>
float Average(T x)
{
    float avg;
    return avg = (float)x / 4;
}

class Register
{
public:
    int num;
    char name[10];
};

class Subjects
{
public:
    int kor, eng, math, sci;
    float tot, avg;
    Subjects()
    {
        kor = 0;
        eng = 0;
        math = 0;
        sci = 0;
    }
    Subjects(int k, int e, int m, int s)
    {
        kor = k;
        eng = e;
        math = m;
        sci = s;
    }
};

class Student : virtual public Register
{

public:
    Student()
    {
        sp = new Subjects();
    }
    Student(int n, const char *s, int k, int e, int m, int t)
    {
        num = n;
        strcpy(name, s);
        sp = new Subjects(k, e, m, t);
    }
    friend void Print(Student *stu);
    friend void Total(Student *st);
    const Student operator++(int i);

private:
    Subjects *sp;
};

const Student Student ::operator++(int i)
{
    sp->kor++;
    sp->math++;
    sp->sci++;
    sp->eng++;
    return *this;
}

void Total(Student *stu)
{

    for (int i = 0; i < MAX; i++)
    {
        stu[i].sp->tot = stu[i].sp->kor + stu[i].sp->eng + stu[i].sp->math + stu[i].sp->sci;
        stu[i].sp->avg = Average(stu[i].sp->tot);
    }
}

void Print(Student *stu)
{
    Total(stu);

    for (int i = 0; i < MAX; i++)
    {
        cout << stu[i].num << " ";
        cout << stu[i].name << " ";
        cout << stu[i].sp->kor << " ";
        cout << stu[i].sp->eng << " ";
        cout << stu[i].sp->math << " ";
        cout << stu[i].sp->sci << " ";
        cout << stu[i].sp->tot << " ";
        cout << stu[i].sp->avg << endl;
    }
}

int main()
{
    Student stu[MAX] = {
        Student(101, "Kim", 85, 90, 80, 77),
        Student(102, "Lee", 90, 95, 89, 85),
        Student(103, "Park", 80, 70, 70, 55),
        Student(104, "Hong", 75, 80, 90, 85),
        Student(105, "Kang", 85, 90, 85, 85)};
    for (int i = 0; i < MAX; i++)
    {
        stu[i] = stu[i]++;
    }

    Print(stu);
}
