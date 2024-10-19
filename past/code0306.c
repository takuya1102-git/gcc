#include <stdio.h>

int main(void)
{
    float f = 3;
    double d = f;
    int i =3.2;
    int age = (int)3.2;

    printf("%f\n", f);
    printf("%f\n", d);
    printf("%05d\n", i);
    printf("%5d\n", age);

    d = 8.5 / 2;
    long l = 5 + 2L;
    
    printf("%f\n", d);
    printf("%ld\n", l);

    return 0;
}