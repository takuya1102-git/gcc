#include <stdio.h>

int MaxValue(int n1, int n2); //プロトタイプ宣言

int main(void){

    int x;
    int y;
    int z;

    printf("3つの値を入力してください。\n");

    scanf("%d", &x);//&演算子でメモリ領域の先頭に化けるので値の代入が可能
    scanf("%d", &y);//&演算子でメモリ領域の先頭に化けるので値の代入が可能
    scanf("%d", &z);//&演算子でメモリ領域の先頭に化けるので値の代入が可能

    printf("一番大きな値は%dです。", MaxValue(x, MaxValue(y, z)));
    //関数を重ねてスッキリさせる。①(ｙかｚの大きい方)とxの大きい方を%dで表示

    return 0;
}

int MaxValue(int n1, int n2)
{
    if( n1 > n2 )
        return n1;
    else
        return n2;
}