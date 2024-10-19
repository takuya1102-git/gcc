#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numStr;

    printf("カレンダーから縦にならんだ数字を3つ選び、その合計を入力しちぇ下さい。\n");
    scanf("%s", numStr);

    int num = atoi(numStr) / 3;
    printf("あなたの選んだ数は%d,%d,%dですね。\n", num - 7, num, num +7);

    return 0;
}