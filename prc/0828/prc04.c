//正の整数nを引数として受け取り、n番目のフィボナッチ数を計算して返す関数
//fibonacciを作成してください。
//フィボナッチ数列とは「1,1,2,3,5,8,13,21,34,55…」のように、
//前の数字を足した数が続く法則の事

#include <stdio.h>

int fibonacci(int value);

int main(void)
{
    int value;
    printf("正の整数を入れてください。フィボナッチ数列で返します。\n");
    scanf("%d", &value);
    
    printf("フィボナッチ数列%d番目は、%dです。\n", value, fibonacci(value));
    
    return 0;
}

int fibonacci(int value)
{
    int a = 0;
    int b = 1;
    int c;

    if(value == 1)
    {
        c = 1;
    }
    else
    {
        for(int i = 1; i < value; i++)
        {
            c = a + b;
            a = b;
            b = c;  
        }

    }
    
    return c;
}