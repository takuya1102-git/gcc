//整数を引数として受け取り、その整数が偶数か奇数かを判定して表示する関数
//checkEvenを作成してください。

# include <stdio.h>

void checkEven(int value);

int main(void)
{
    int value;
    printf("整数を入力してください。\n");
    scanf("%d", &value);
    checkEven(value);

    return 0;
}

void checkEven(int value)
{
    if(value % 2 == 0)
    {
        printf("%dは偶数です。", value);
    }
    else
    {
        printf("%dは奇数です。", value);
    }

}