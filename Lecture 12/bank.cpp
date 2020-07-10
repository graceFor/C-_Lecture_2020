
#include <iostream>

using namespace std;

class BankAccout
{
public:
    BankAccout()
    {
        m_balance = 0;
        m_irate = 0.05;
    }
    BankAccout(int bal)
    {
        m_balance = bal;
        m_irate = 0.05;
    }
    BankAccout(double rate)
    {
        m_balance = 0;
        m_irate = rate;
    }
    void show()
    {
        cout << "잔액 " << m_balance << "\n이자율: " << m_irate << endl;
    }

private:
    int m_balance;
    double m_irate;
};

int main()
{
    BankAccout b1;
    b1.show();
    BankAccout b2 = BankAccout(100);
    b2.show();
    BankAccout b3 = BankAccout(0.1);
    b3.show();

    return 0;
}
