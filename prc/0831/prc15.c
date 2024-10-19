//タブ(\t)を使って、次のように九九の表を画面に出力するコードを記述してください。

# include <stdio.h>

int main(void)
{
    for(int row = 1; row <= 9; row++)
    {
        for(int col = 1; col <= 9; col++)
        {
            printf("%d\t", (row * col));
        }
        printf("\n");
    }

    return 0;
}