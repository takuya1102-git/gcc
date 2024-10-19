#include <stdio.h>

void printInByAddress(int* valAddr) //関数定義　アドレス情報が格納できるポインタ型で変数valAddrを用意して受け取る
{
    printf("%d", *valAddr); 
    //ポインタ変数に格納されているアドレスを使ってメモリを読み取り、その値に化ける
}

int main(void)
{
    int num = 999;
    printInByAddress(&num); 
    //＆関数で変数numが確保されているメモリ領域の先頭アドレスに化けて関数呼びだし。ポインタ変数num
    return 0;
}