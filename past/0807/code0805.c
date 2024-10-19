// 一つの引数を渡す。
#include <stdio.h> //基本的な関数の使用

typedef char String[1024]; //char[1024]の配列を作成、Stringと別名を与える。

void hello(String name); //プロトタイプ宣言

int main(void) //メイン関数実行
{
    printf("関数を呼び出します。\n");
    hello("岬"); //関数に引数を渡し呼び出し
    hello("赤城"); //関数に引数を渡し呼び出し
    hello("海東"); //関数に引数を渡し呼び出し
    printf("関数の呼び出しが終わりました。\n");

    return 0; //正常終了
}

void hello(String name) //関数宣言　引数設定　String型　変数nameを用意
{
    printf("%sさん、こんにちわ。\n", name); //処理内容　変数nameを受け取り表示
}