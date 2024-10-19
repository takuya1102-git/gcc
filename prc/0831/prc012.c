//キーボードから整数値を入力させ
//場合に応じて次のようなメッセージを出力するコードを記述してください。
//値が0-10の場合　正解です。
//それ以外の場合　間違いです。

# include <stdio.h>

int main(void)
{
    printf("正の整数を入力してください。\n");
    int value;
    scanf("%d", &value);

    if(0 <= value && value <= 10)
    {
        printf("正解です。\n");
    }
    else
    {
        printf("間違いです。\n");
    }
    
    return 0;
}