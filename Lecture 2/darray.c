#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Students
{
private:
    string name;
    int kor, eng, math, total;
    double avg;

public:
    Students()
    {
        name = "NONE";
        kor = 0;
        eng = 0;
        math = 0;
    }
    Students(string n, int k, int e, int m)
    {
        name = n;
        kor = k;
        eng = e;
        math = m;
    }
    int get_Korea() { return kor; }
    int get_Eng() { return eng; }
    int get_Math() { return math; }
    void set_Total(int t) { total = t; }
    void Compute_Average() { avg = double(total) / 3; }
    void showStudent()
    {
        cout << name << "\t" << kor << "\t" << eng << "\t" << math << "\t" << total << "\t" << avg << endl;
    }
};

void Compute_Total(Students* s)
{
    int tot;
    tot = s->get_Eng() + s->get_Korea() + s->get_Math();
    s->set_Total(tot);
}

int main()
{
    Students* A = new Students("Kim", 95, 95, 90);
    Students* B = new Students("Park", 90, 85, 90);
    Students* C = new Students("Lee", 95, 95, 95);
    Compute_Total(A);
    Compute_Total(B);
    Compute_Total(C);
    A->Compute_Average();
    B->Compute_Average();
    C->Compute_Average();
    cout << "이름" << "\t" << "국어" << "\t" << "영어" << "\t" << "수학" << "\t" << "합계" << "\t" << "평균" << endl;
    A->showStudent();
    B->showStudent();
    C->showStudent();

    return 0;
}