//二つの文字を入力し、べき乗で計算を行うプログラムを作成してください。
//「2の5乗は32です。」と表示する。


#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    printf("二つの数字を入力してください。\n");
    String numStr1;
    String numStr2;
    scanf("%s%s",numStr1, numStr2);
    int num1 = atoi(numStr1);
    int num2 = atoi(numStr2);
    int num3 = 1;

    for(int i = 1; i <= num2; i++)
    {
        num3 = num3 * num1 ;
    }

    printf("%d %d %d\n", num1, num2, num3);

}