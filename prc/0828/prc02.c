//正の整数nを引数として受け取り、nの階乗を計算して返す関数
//factorialを作成してください。
//※階乗はその数から1までの積。但し0！＝1

# include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("正の整数を入れてください。階乗で回答します。\n");
    scanf("%d", &n);

    printf("%dの階乗は%dです。", n, factorial(n) );
    
    return 0;
}

int factorial(int n)
{
    int ans = 1;
    if(n == 0)
    {
        ans = 1;
    }
    else if(n > 0)
    {
        for(int i = n; i > 0; i--)
        {
            ans *= i;
        }
    }
    else
    {
        ans = 0;
        printf("正の整数以外が入力された為、無効です。次の結果は正しくありません。\n");
    }

    return ans;
}