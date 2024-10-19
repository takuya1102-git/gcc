#include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 30;
    int box ;

    box = a;
    a = b;
    b = box;

    printf("a=%d,b=%d", a, b);

    return 0;

}