#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 0; i < 100; i++)
    {
        sum = sum + (i + 1);
        
    }

    printf("sum =%d", sum);

    return 0;
}