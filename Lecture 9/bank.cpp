// Banck Account

#include <stdio.h>
#include <iostream>
using namespace std;

class Bank_Account
{
private:
    string BA_number;
    string BA_name;
    int balance;

public:
    void Set_BA_nunmber(string num) { BA_number = num; }
    void Set_BA_name(string name) { BA_name = name; }
    void Set_Balance(int bal) { balance = bal; }
    void Desposit(int deposit) { this->balance += deposit; }
    void Withdraw(int with) { balance -= with; }
    void print()
    {
        cout << "계좌번호: " << BA_number << endl;
        cout << "이름: " << BA_name << endl;
        cout << "잔고: " << balance << endl;
    }
};

int main()
{
    Bank_Account kim;
    kim.Set_BA_nunmber("60162269");
    kim.Set_BA_name("김현경");
    kim.Set_Balance(1000);
    kim.Desposit(500);
    kim.Withdraw(300);
    kim.print();

    return 0;
}