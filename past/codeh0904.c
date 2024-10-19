#include <stdio.h>

int main(void)
{
    int a = 70;
    printf("%d\n",a); //aの値を表示

    int* addrA = &a; //intのポインタ型addrAにアドレス演算子を用いてaのアドレスを代入

    // addrA = 50; intのポインタ型の変数addrAにはintの整数50は代入できない。
    printf("%p,%d\n", addrA, *addrA); 
    //アドレスの表示は%pで行う。ポインタ型の前に*を付けるとそのアドレスが示す変数の値に化ける

    return 0;

}