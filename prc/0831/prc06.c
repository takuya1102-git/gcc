//1から100までの奇数の合計を計算するプログラムを作成

# include <stdio.h>

int main(void)
{
    int oddSum = 0;

    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
        {
            oddSum += i;
        }
    }
    printf("1から100までの奇数の合計は%dです。", oddSum);
    
    return 0;
}