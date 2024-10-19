//0から20までの偶数を順番に出力するプログラムを作成してください。

# include <stdio.h>

int main(void)
{
    for(int i = 0; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            printf("%02d ", i);
        }
    }
    return 0;
}