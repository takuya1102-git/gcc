# include <stdio.h>

int main(void)
{
    int oddSum = 0;

    for(int i = 1; i <= 1000; i++)
    {
        if(i % 2 != 0)
        {
            oddSum += i;
        }
    }

    printf("1����1000�̊�̘a��%d�ł��B\n", oddSum);

    return 0;
}