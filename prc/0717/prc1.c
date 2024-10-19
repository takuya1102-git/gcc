//1から10までを順番に出力するプログラムを作成してください。

#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",i + 1);
    }

    return 0;
}