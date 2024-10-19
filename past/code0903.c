#include <stdio.h>

int main(void)
{
    int a = 70;
    printf("%d\n", a); //70 正しい利用
    printf("%p\n", a); //0000000000000046
    printf("\n");
    printf("%d\n", &a); //127925388
    printf("%p\n", &a); //0000003d079ffc8c　正しい利用
    printf("\n");

    int* addrA = &a;
    printf("%d\n", addrA); //127925388
    printf("%p\n", addrA); //0000003d079ffc8c　正しい利用
    printf("\n");
    printf("%d\n", &addrA); //127925376
    printf("%p\n", &addrA); //0000003d079ffc80　正しい利用
    printf("\n");
    printf("%d\n", *addrA); //70　正しい利用
    printf("%p\n", *addrA); //0000000000000046

}