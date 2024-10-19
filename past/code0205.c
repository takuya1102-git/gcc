#include <stdio.h>

int main(void)
{
    const int TAX = 110;
    int fax = 50000;

    printf("50000‰~‚©‚ç40000‰~‚É’l‰º‚°‚µ‚Ü‚·B\n");

    fax = 40000;

    printf("FAXV‰¿Ši(Å‚İ)F%d‰~\n", fax * TAX /100);

    return 0;
}