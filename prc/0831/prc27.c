//整数を引数として受け取り、その整数が偶数か奇数かを判定して表示する関数
//checkEvenを作成してください。

# include <stdio.h>

void checkEven(int x);

int main(void)
{
    int x = 9;
    checkEven(x);

    return 0;
}

void checkEven(int x)
{
    if(x % 2 == 0)
    {
        printf("%dは偶数です。\n", x);
    }
    else
    {
        printf("%dは奇数です。\n", x);
    }
}