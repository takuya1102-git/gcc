#include <stdio.h>

int main(void)
{
    int a = 900;
    printf("%d\n", a);

    long addrA = (long)&a;

    printf("%ld", addrA);

}