#include <stdio.h>
#include <string.h> //memcpy,memcmpを使う為に追加
#include <stdlib.h> //mallocを使う為に追加

void sub(char* addr) 
//subの関数名で定義(charのポインタ型で変数名addrで先頭アドレスを受け取る)
{
    for(int i = 0; i < 3; i++)
    {
        printf("%d,%d\n", i+1, *(addr + i)); 
        //間接演算子・addrの先頭アドレスからiをプラスして中身に化ける
    }
}

int main(void)
{
    char a[] = {1, 2, 3}; //charの配列型に値を代入
    char* b = (char*)malloc(3); 
    //ヒープに3バイト確保、charのポインタ型bの先頭アドレスに割り当て。
    
    sub(a); //aの先頭アドレスを渡し関数を呼び出す。
    memcpy(b, a, 3); //メモリ領域のまるごとコピー
    sub(b); //bの先頭アドレスを渡し関数を呼び出す。

    if(memcmp(a, b, 3) == 0) //メモリ領域のまるごと比較
    {
        printf("正常\n");
    }

    free(b); //使用済みのヒープ領域の解放

    return 0;
}