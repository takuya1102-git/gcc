//1から10までを順番に出力するプログラムを作成してください。
# include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%02d ", i);
    }

    return 0;


}