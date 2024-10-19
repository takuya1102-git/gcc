//0から100までの整数のうち、3で割り切れる数だけを出力するプログラムを作成して下さい。
#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            printf("%d ",i);
        }
    }
}