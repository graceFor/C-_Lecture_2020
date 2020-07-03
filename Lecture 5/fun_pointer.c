
#include <stdio.h>

void pretty_print(int val)
{
    printf("결과는 %d입니다.\n", val);
}
void simple_print(int val) { printf("%d\n", val); }

int main()
{
    void (*print)(int x);
    print = pretty_print;
    print(123);
    print = simple_print;
    print(125);
}