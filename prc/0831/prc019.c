//キーボードから正の整数値を入力させ
//その階乗を計算するコードを記述してください。
//整数を入力してください。
//7
//7の階乗は5040です。

# include <stdio.h>

int main(void)
{
    int value;
    int factrial = 1;
    
    printf("整数を入力してください。\n");
    scanf("%d", &value);

    for(int i = value; i > 0; i--)
    {
        factrial *= i;
    }
    
    printf("%dの階乗は%dです。", value, factrial);

    return 0;
}