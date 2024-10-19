#include <stdio.h>

int main(void)
{
    for(int i = 0; i <= 100; i += 3)
    {
        printf("%d ", i);
    }
    printf("\n");
    for(int j = 0; j <= 100; j++)
    {
        if(j % 3 == 0)
        {
            printf("%d ", j);

        }
    }
}