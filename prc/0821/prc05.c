//キーボードから正の整数値を5回入力させ、配列に格納します。
//そして入力された数値を偶数と奇数に分類して表示させてください。

#include <stdio.h>

int main(void)
{
    int num[5] = {0}; //int型の配列　変数num[5]を宣言、0を代入
    
    printf("整数を入力してください。(5回)\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]); //&演算子を付けてメモリ領域の先頭番地に化ける     
    }

    printf("偶数は");

    for(int i = 0; i < 5; i++)
    {
        if(num[i] % 2 == 0) //2で割って余りが出ないなら
        {
            printf("%d ", num[i]); //表示します。
        }   
    }

    printf("です。\n");

    printf("奇数は");

    for(int i = 0; i < 5; i++)
    {
        if(num[i] % 2 != 0) //2で割って余りがでない。ではないなら
        {
            printf("%d ", num[i]);//表示します。
        }   
    }

    printf("です。\n");

    return 0;

}