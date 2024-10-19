//キーボードから正の整数値を5回入力させ
//入力された順番と逆順で５個の整数値を表示してください。
//ただし、配列の添え字を使用しない事。

# include <stdio.h>

int main(void)
{
    int* values;

    printf("正の整数を5回入力してください。\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d回目の入力をしてください。\n", i + 1);
        scanf("%d", (values + i));
    }

    for(int i = 4; i >= 0; i--)
    {
        printf("%d ", *(values + i));
    }

    return 0;
}