//キーボードから整数値を入力させ
//場合に応じて次のようなメッセージを出力するコードを記述してください。
//値が0-10の場合　正解です。
//それ以外の場合　間違いです。

#include <stdio.h> //
#include <stdlib.h> //typedef char String[1024];を使う為の基本関数

typedef char String[1024]; //char型の配列にString型と命名。

int main(void)
{
    String ansStr; //文字の入れ物を用意
    printf("0から10までの整数を入力してください。\n");
    scanf("%s", ansStr); //String型を受け取り、String型変数ansStrに代入
    
    int ans = atoi(ansStr); //int型に変換

    if(ans <= 10 && ans >= 0 ) //もし0以上10以下なら
    {
        printf("正解です。\n");
    }
    else //それ以外なら
    {
        printf("間違いです。\n");
    }

}