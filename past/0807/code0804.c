#include <stdio.h>

void funcA(void); //プロトタイプ宣言
void funcB(void); //プロトタイプ宣言

int main(void) //メイン関数実行（一番最初）
{
    funcA(); //関数呼び出し
    return 0; //正常終了
}

void funcA(void) //関数定義　重要事項の表明
{
    printf("関数Aです。\n"); //対象の関数
    funcB(); //別の関数呼び出し
}

void funcB(void) //関数定義　重要事項の表明
{
    printf("関数Bです。\n"); //対象の関数
}