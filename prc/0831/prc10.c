//二つの文字を入力し、べき乗で計算を行うプログラムを作成してください。
//「2の5乗は32です。」と表示する。

# include <stdio.h>

int main(void)
{
    int base ;
    int expo ;
    int ans = 1;

    printf("べき乗を計算します。\n");
    printf("底の値を正の整数で入力してください。\n");
    scanf("%d", &base);
    printf("べき指数の値を正の整数で入力してください。\n");
    scanf("%d", &expo);

    for(int i = 0; i < expo; i++)
    {
        ans *= base;
    }

    printf("%dの%d乗は%dです。", base, expo, ans);
    return 0;
}