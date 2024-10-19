//キーボードから文字列を入力させ、
//文字列の長さを調べるコードを記述してください。

#include <stdio.h>
#include <stdlib.h> //scanfを使うため。

typedef char String[1024]; //char[1024]の配列型をStringに名前変更　typedefは別名を与える関数

int main(void)
{
    String msg; //String型（Char配列型）で変数msgを宣言
    printf("文字列を入力してください。\n");
    scanf("%s", msg); //入力された文字列をmsgのString型の箱へ入れる。

    for(int i = 0; i < 1024; i++) // 1024でメモリー取得してるので、それが最大値
    {
        if(msg[i] == '\0' ) //charのリテラルの為、''で囲う。引用符で囲まれた文字　Char型　\0で一文字と認識
        {
            printf("文字列の長さは%dです", i);
            break; //ループから抜け出す。単独で利用可能。

        }
    }
    return 0;
}