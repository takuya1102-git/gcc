//二つの整数の大きい方を選ぶ関数を作成してください。
//2つのint型引数を取り、大きい方の数値を戻り値として返すこととします。
//また、int型の変数x,y,zにそれぞれの数値を設定し、作成した関数を使用して
//最も大きい数値を表示するコードを記述してください。

#include <stdio.h>

int max(int x, int y) //関数を定義　maxと命名　引数はint型で変数x,yで受け取る
{
    int ret = 0; //戻り値の変数を設定
    
    if(x > y) //xがyより大きければ
    {
        ret = x; //大きい方のxをretに代入
    }
    else //xがyより大きくなければ
    {
        ret = y; //大きい方のyうをretに代入
    }

    return ret;
}

int main(void)
{
    int x = 60;
    int y = 80;
    int z = 40;
    int ret = max(x, y); //int型でretを宣言。関数呼び出し、大きい方をretに代入
    ret = max(ret, z); //関数呼び出し、大きい方を変数retへ代入

    printf("%d", ret);

    return 0;

}