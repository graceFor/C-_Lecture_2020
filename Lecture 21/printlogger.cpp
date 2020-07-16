// Logger를 변경하여 Logger 클래스를 단일 상속 받은 구조로 만들고 Printer를 객체(instance)로 포함하도록 구조를 바꾼다.(object adapter)

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

class PrintLogger : public Logger
{ // Printer를 상속 받지 않는다.
public:
    PrintLogger() { m_str = new Printer(); }
    void log(string s)
    {
        m_str->print(s);
        // print함수를 이용하여 s 를 출력한다.
    }

private:
    Printer *m_str; // Printer 클래스를 포함하기 위한 포인터
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