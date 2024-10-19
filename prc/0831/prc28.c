//正の整数nを引数として受け取り、n番目のフィボナッチ数を計算して返す関数
//fibonacciを作成してください。
//フィボナッチ数列とは「1,1,2,3,5,8,13,21,34,55…」のように、
//前の数字を足した数が続く法則の事

# include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int n = 8;
    printf("%d", fibonacci(n));
    
    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}