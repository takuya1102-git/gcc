#include <stdio.h>

int main(void)
{
    const int TAX = 110;
    int fax = 50000;

    printf("50000�~����40000�~�ɒl�������܂��B\n");

    fax = 40000;

    printf("FAX�V���i(�ō���)�F%d�~\n", fax * TAX /100);

    return 0;
}