//キーボードから正の整数値を5回入力させ
//入力された順番と逆順で５個の整数値を表示してください。
//ただし、配列の添え字を使用しない事。

#include <stdio.h>

int main(void)
{
    int num[10] ={0};
    printf("正の整数値を入力しなさい。（5回）\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", (num + i)); 
        //配列は自動的にポインタ型　num[i]とnum + i は同義

    }

    for(int i = 4; i >= 0; i--)
    {
        printf("%d,", *(num + i));
        //*(num + i)とnum[i]は共に指定のメモリ番地に変数を生み出す演算子
    }
}