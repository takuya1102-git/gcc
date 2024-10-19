// うるう年を判定する関数
#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year); //プロトタイプ宣言

int main(void) //メイン関数実行
{
    int year = 1600; // int型で変数yearを宣言し1600のリテラルを代入

    if(isLeapYear(year)) //もし値が入ったら
    {
        printf("%d年はうるう年です。\n", year);
    }
    else //もし値が入らなかったら、
    {
        printf("%d年はうるう年ではありません。\n", year);
    }
    return 0; //正常終了
}

bool isLeapYear(int year) 
//関数定義、bool型の戻り値で返すisLeapYearと命名、引数はint型の変数yearで受け取る。
{
    return (year % 400 == 0 || (year % 4 && year % 100 != 0)); 
    //400で割り切れる。もしくは4で割り切れて100で割り切れない数字なら1を、以外は0を戻り値として返す。
}