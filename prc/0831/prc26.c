//正の整数nを引数として受け取り、nの階乗を計算して返す関数
//factorialを作成してください。
//※階乗はその数から1までの積。但し0！＝1

# include <stdio.h>

int factorial(int x);

int main(void)
{
    int x = 7;
    printf("%dの階乗は%dです。", x, factorial(x));

    return 0;
}

int factorial(int x)
{
    int fact = 1;
    if(x == 0)
    {
        return 1;
    }
    else
    {
        for(int i = x; i > 0; i--)
        {
            fact *= i;
        }
        return fact;
    }
}