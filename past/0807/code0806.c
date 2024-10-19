// 2つの引数を渡す。
#include <stdio.h>

void add(int x, int y); //プロトタイプ宣言

int main(void) //メイン関数実行
{
    int year = 2022; //　int型で変数yearを宣言、2022の値を代入

    add(year, 4); //add関数にint型のyearの変数と4を引き渡し呼び出し
    add(year, 50); //add関数にint型のyearの変数と50を引き渡し呼び出し

    return 0; //正常終了
}

void add(int x, int y) //addの名称で関数を宣言、引数にint型のx,yの箱を用意
{
    int ans = x + y; //処理①　引き渡し受け取り用の箱x,yを加算
    printf("%d + %d = %d\n", x, y, ans); 
    //int型のプレースホルダーに各変数を代入、""内を表示
}