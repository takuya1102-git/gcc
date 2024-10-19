# include <stdio.h>

int main(void)
{
    int tables[9][9];
    int row;
    int col;

    for(row = 0; row < 9; row++)
    {
        for(col = 0; col < 9; col++)
        {
            tables[row][col] = (row + 1) * (col + 1);
        }
    }

    for(row = 8; row >= 0; row--)
    {
        for(col = 8; col >= 0; col--)
        {
            printf("%2d\t", tables[row][col]);
        }
        printf("\n");
    }

    return 0;
}