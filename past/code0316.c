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

    printf("4つの番号を生成します。\n");



    printf("暗証番号は%d%d%d%d", a, b, c, d);
   
    return 0;
}