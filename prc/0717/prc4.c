//変数a = 20と変数b = 30を入れ替えるプログラムを作成してください。
#include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 30;
    int c;

    c = a;
    a = b;
    b = c;

    printf("a=%d,b=%d", a, b);


    return 0;
}