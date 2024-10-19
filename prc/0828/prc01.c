//二つの整数を引数として受け取り、それらの平均を計算して返す
//calcAverage関数を作成してください。

#include <stdio.h>

double calcAverage(int x, int y);

int main (void)
{
    int x = 25;
    int y = 26;
    printf("平均値は%.2fです。", calcAverage(x, y) );
    
    return 0;
}

double calcAverage(int x, int y)
{
    //double z = (x + y) / 2.0;

    //return z;

    return (x + y) / 2.0;
}