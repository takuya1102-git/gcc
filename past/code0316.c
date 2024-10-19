#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    
    int a =rand() % 10;
    int b =rand() % 10;
    int c =rand() % 10;
    int d =rand() % 10;

    printf("4‚Â‚Ì”Ô†‚ğ¶¬‚µ‚Ü‚·B\n");



    printf("ˆÃØ”Ô†‚Í%d%d%d%d", a, b, c, d);
   
    return 0;
}