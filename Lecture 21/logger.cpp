// Printer 와 Logger 클래스를 다중상속 받은 PrintLogger를 만들어 App 객체로 하여금 로그를 남길 수 있게 한다. (class adapter)

#include <iostream>
#include <string>
using namespace std;

class Logger
{
public:
    virtual void log(string) = 0;
};

class Printer
{
public:
    void print(string msg)
    {
        cout << msg << endl;
    }
};

class PrintLogger : public Logger, public Printer
{
    void log(string s)
    {
        print(s);
    }
};

class App
{
    Logger *mylogger;

public:
    App(Logger *pl) { mylogger = pl; }
    void start()
    { // 홍길동을 각자 이름으로 바꾸어 보자.
        mylogger->log("홍길동: 시스템 이상 무");
    }
};

int main()
{
    App *r1;
    r1 = new App(new PrintLogger);
    r1->start();

    return 0;
}