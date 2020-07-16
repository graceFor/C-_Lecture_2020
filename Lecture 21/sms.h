class SMSSender
{
protected:
    char *phone;

public:
    // 생성자에서 메시지를 받을 전화번호를 설정한다.
    SMSSender(const char *phone_number);
    // 메시지를 보내는 함수
    void send(const char *message);
};