//0から20までの偶数を順番に出力するプログラムを作成してください。

#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 20; i++)
    {
        if(i% 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}