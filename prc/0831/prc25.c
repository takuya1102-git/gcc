//二つの整数を引数として受け取り、それらの平均を計算して返す
//calcAverage関数を作成してください。

# include <stdio.h>

double calcAverage(int x, int y);

int main(void)
{
    int x = 31;
    int y = 32;

    printf("%.2f", calcAverage(x, y));

    return 0;
}

double calcAverage(int x, int y)
{
    return (x + y) /2.0;
}