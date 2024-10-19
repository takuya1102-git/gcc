// add関数の戻り値を受け取る。
#include <stdio.h>

int add(int x, int y); //プロトタイプ宣言

int main(void) //メイン関数実行
{
    int year = 2022; //int型でyear変数宣言、2022の値を代入
    int ans1; //int型でans1を宣言

    ans1 = add(year, 4); 
    //add関数に変数year,4を引き渡し、返された戻り値ansをans1に代入
    printf("%d年の%d年後は%d年です。\n", year, 4, ans1);

    int ans2 = add(year, 50); 
    //int型でans2を宣言、add関数に変数year,4を引き渡し、返された戻り値ansをans2に代入
    printf("%d年は%d年の%d年後です。\n", ans2, year, 50);

    return 0; //正常終了
}

int add(int x, int y)  
//関数定義　addと命名　戻り値にint型、引数にint型Xyを設定
{
    int ans = x + y; //処理①：int型でansを宣言、加算した値を代入
    return ans; //戻り値のansを呼び出し元に引き渡す。
}