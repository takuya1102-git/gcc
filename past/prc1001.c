#include <stdio.h>
#include <string.h> //memcpy,memcmpの関数使用に必要

void sub(char* addr) 
//関数名subを定義（ポインタ型　ポインタ変数addrで引数：先頭アドレスを受け取る）
{
    for (int i =0; i < 3; i++)
    {
        printf("%d,%d\n", i + 1, *(addr + i)); 
        //addrを*(間接演算子)で先頭アドレスの実際に書き込まれている値を取り出す。
    }
}

int main(void)
{
    char a[] = {1,2,3};
    char b[3];

    sub(&a[0]); //&演算子でa[0]が先頭アドレスに化ける、sub関数に引数として渡して呼び出し。
    memcpy(&b[0], &a[0], 3); //メモリー領域のまるごとコピー
    sub(&b[0]); //&演算子でb[0]が先頭アドレスに化ける、sub関数に引数として渡して呼び出し。

    if(memcmp(&a[0], &b[0], 3) == 0) //メモリ領域のまるごと比較
    {
        printf("正常\n");
    }

    return 0;
}
    
