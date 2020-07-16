#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "sms.h"
using namespace std;
class Logger
{
public:
    virtual void log(const char *){};
};
class SMSLogger : public Logger, public SMSSender
{
public:
    SMSLogger(const char *addr) : SMSSender(addr) {}
    void log(const char *s) { send(s); }
};
class App
{
    Logger *mylogger;

public:
    App(Logger *pl) { mylogger = pl; }
    void start()
    {
        mylogger->log("oopa49 홍길동 입니다.");
        // 홍길동 대신 여러분의 계정번호 이름을 넣어 보자
    }
};
int main()
{
    App *r1;
    r1 = new App(new SMSLogger("01046118892"));
    r1->start();
}