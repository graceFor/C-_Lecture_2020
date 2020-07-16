#include _CRT_NONSTDC_NO_DEPRECATE
#include "sms.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
SMSSender::SMSSender(const char *addr)
{
    phone = strdup(addr);
}
void SMSSender::send(const char *msg)
{
    printf("%s %s\n", phone, msg);
}