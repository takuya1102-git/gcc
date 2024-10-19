//二つの整数の大きい方を選ぶ関数を作成してください。
//2つのint型引数を取り、大きい方の数値を戻り値として返すこととします。
//また、int型の変数x,y,zにそれぞれの数値を設定し、作成した関数を使用して
//最も大きい数値を表示するコードを記述してください。

# include <stdio.h>

int maxValue(int x, int y);

int main(void)
{
    int x = 50;
    int y = 30;
    int z = 40;

    printf("最も大きい数値は%dです。", maxValue(z,(maxValue(x, y))));

    return 0;
    
}

int maxValue(int x, int y)
{
    if(x < y)
    {
        return y;
    }
    else
    {
        return x;
    }
}