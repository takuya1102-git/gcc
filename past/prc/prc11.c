#include <stdio.h>

int main(void)
{
    int count = 6;

    for(int i = 1; i <= count; i++)
    {
        for(int j = 0; j < (count - i) ; j++)
        { 
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1) ; k++)
        {
            printf("*");
        }
        for(int l = 0; l < (count - i) ; l++)
        {
            printf(" ");
        }
        printf("\n");

    }

    return 0;
}