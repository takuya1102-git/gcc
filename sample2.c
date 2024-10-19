#include <stdio.h>

void multiple(void);
void multiple2(int value);
void multiple3(int tables[9][9]);
double calculation(char operation, int num1, int num2);

int main(void)
{
    //multiple();
    //multiple2(7);
    
    int tables[9][9];
    multiple3(tables);

    for(int row = 0; row < 9 ; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            printf("%2d ", tables[row][col]);     
        }
        printf("\n");
    }

    // printf("%4.2f",calculation('+', 5, 3));
    return 0;
}

void multiple(void)
{
    int sum;

    for(int row = 1; row < 10 ; row++)
    {
        for(int col = 1; col < 10; col++)
        {
            sum = row * col;
            printf("%2d ", sum);
        }
        printf("\n");
    }
}

void multiple2(int value)
{
    int sum;

    for(int col = 1; col < 10; col++)
        {
            sum = value * col;
            printf("%2d ", sum);
        }
}

void multiple3(int tables[9][9])
{
    int sum;

    for(int row = 0; row < 9 ; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            sum = (row + 1) * (col + 1);
            tables[row][col] = sum;
        }
    }
}

double calculation(char operation, int num1, int num2)
{
    double ans;
    switch(operation)
    {
        case '+':
        ans = num1 + num2;
        break;
        case '-':
        ans = num1 - num2;
        break;
        case '*':
        ans = num1 * num2;
        break;
        case '/':
        ans = num1 / num2;
        break;
    }

    return ans;
}