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

    printf("1から1000の奇数の和は%dです。\n", oddSum);

    return 0;
}