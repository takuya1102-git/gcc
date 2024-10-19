//キーボードから5科目のテストの点数を入力して、
//次のような合計点と平均点（小数点第二位まで表示）を出力するコードを記述してください。
//

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];


int main(void)
{
    int scores[5];//intの配列型　scores[5]を宣言
    String score; //String型でscoreを宣言
    int sum = 0; //int型でsumを宣言、0で初期化
    int i; //int型でiを宣言

    for( i = 0; i < 5; i++)
    {
        printf("%d科目の点数を入力してください\n", i + 1);
        scanf("%s", score);
        scores[i] = atoi(score);

        sum += scores[i]; //sum + scores[i]をsumに代入

    }
    printf("%d科目の合計点は%d点です。\n", i, sum);

    double avg = sum / 5.0; //小数点第二位まで表示なので浮動小数点型で平均を出す。

    printf("%d科目の平均点は%.2f点です。", i, avg);//小数点第二位まで表示なので%.2fと書く

    return 0;



}