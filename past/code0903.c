#include <stdio.h>

int main(void)
{
    int a = 70;
    printf("%d\n", a); //70 ���������p
    printf("%p\n", a); //0000000000000046
    printf("\n");
    printf("%d\n", &a); //127925388
    printf("%p\n", &a); //0000003d079ffc8c�@���������p
    printf("\n");

    int* addrA = &a;
    printf("%d\n", addrA); //127925388
    printf("%p\n", addrA); //0000003d079ffc8c�@���������p
    printf("\n");
    printf("%d\n", &addrA); //127925376
    printf("%p\n", &addrA); //0000003d079ffc80�@���������p
    printf("\n");
    printf("%d\n", *addrA); //70�@���������p
    printf("%p\n", *addrA); //0000000000000046

}