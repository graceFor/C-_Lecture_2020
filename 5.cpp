#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define Max 5
using namespace std;

class Student
{
public:
    int num;
    char name[10];
};

class Lscore : public Student
{
public:
    int kor;
    int eng;
};

class Nscore : public Student
{
public:
    int math;
    int sci;
};

class Totscore : public Lscore, public Nscore
{
public:
    Totscore(int n, const char *na, int k, int e, int m, int s)
    {
        Nscore::num = n;
        strcpy(Nscore::name, na);
        this->kor = k;
        this->eng = e;
        this->math = m;
        this->sci = s;
    }
    Totscore operator+(int k)
    {
        kor += k;
        eng += k;
        math += k;
        sci += k;
        return *this;
    }

    friend void Print(Totscore *stu);
};

void Print(Totscore *stu)
{
    for (int i = 0; i < Max; i++)
    {
        cout << stu[i].Nscore::num << " " << stu[i].Nscore::name << " " << stu[i].kor << " " << stu[i].eng << " " << stu[i].math << " " << stu[i].sci << endl;
    }
}

int main()
{
    Totscore stu[Max] = {
        Totscore(101, "Kim", 85, 90, 80, 77),
        Totscore(102, "Lee", 90, 95, 89, 89),
        Totscore(103, "Park", 80, 70, 70, 55),
        Totscore(104, "Hong", 75, 80, 90, 85),
        Totscore(105, "Kang", 85, 90, 85, 85)};

    for (int i = 0; i < Max; i++)
    {
        stu[i] = stu[i] + 5;
    }
    Print(stu);

    return 0;
}