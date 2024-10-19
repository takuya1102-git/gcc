//キーボードから5科目のテストの点数を入力して、
//次のような合計点と平均点（小数点第二位まで表示）を出力するコードを記述してください。

# include <stdio.h>

int main(void)
{
    int tests[5] = {0};
    int sum = 0;
    double avg = 0;

    printf("5科目のテストの点数を入力してください。\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d科目目は？\n", i + 1);
        scanf("%d", &tests[i]);
        sum += tests[i];
    }

    avg = sum / 5.0;
    printf("合計点は%d点、平均点は%.2f点です。", sum, avg);
    
    return 0;
}