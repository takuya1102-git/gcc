//キーボードから正の整数値を5回入力させ、
//最大値を求めるコードを入力して下さい。

#include <stdio.h>

int main(void)
{
    int ans = 0;
    int max = 0;
    
    printf("整数を入力してください。(5回)\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d回目入力して下さい\n", i + 1 );
        scanf("%d\n", &ans); //&演算子でメモリ領域の先頭番地に化ける。

        if(max < ans) //max < ansなら
        {
            max = ans;//maxにansの値を代入
        }
    }

    printf("最大値は%dです。\n", max);
}