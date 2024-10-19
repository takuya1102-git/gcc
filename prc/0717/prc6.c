//1から100までの奇数の合計を計算するプログラムを作成


#include <stdio.h>

int main(void)
{
    int sum = 0;

    for(int i = 1; i <= 100; i++)
    {
        
        if(i % 2 != 0 )
        {
            sum = sum + i;
        }
    }

    printf("%d",sum);

    return 0;
}