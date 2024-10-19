//配列に点数を設定し、最高点・最低点を表示するコードを記述してください。

#include <stdio.h>

int main(void)
{
    int scores[5] = {80,60,22,50,75};
    int max = scores[0];
    int min = scores[0];

    for(int i = 1; i < 5; i++)// 
    {
        if(max < scores[i])
        {
            max = scores[i];
        }
        if(min > scores[i])
        {
            min = scores[i];
        }
    }

    printf("最高得点は%d点です。\n", max);
    printf("最低得点は%d点です。\n", min);
    
    return 0;
}