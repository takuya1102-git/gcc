#include <stdio.h>

int main(void)
{
    for(int row = 1; row <= 9; row++)
    {
        for(int col = 1; col <= 9; col++)
        {
            printf("%2d ", row * col);
        }
        printf("\n");
    }

    return 0;
}