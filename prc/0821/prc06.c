//九九の一つの段を表示する関数を作成してください。
//何の段であるかを引数にします。

//出力する九九の段を入力してください。
//6
//6の段を出力します。
// 6 12 18 24 30 36 42 48 54


#include <stdio.h>

void tables(int num); //関数を定義、tablesで引数が、int型の変数numで受け取る。戻り値は無。

int main(void)
{
    int num;

    printf("出力する九九の段を入力してください。\n");
    scanf("%d", &num);
    printf("%dの段を出力します。\n", num);
    tables(num); //関数宣言

    return 0;

}

void tables(int num)
{
    for(int i = 1; i <= 9; i++) //num*1,num*2......num*9のnumの段の九九を成立させる繰り返し
    {
        int table = num * i; //変数numに変数iをかけてtablesに代入
        printf("%2d ", table);
    }
}