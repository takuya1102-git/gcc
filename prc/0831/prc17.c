//配列に点数を設定し、最高点・最低点を表示するコードを記述してください。
// 55 61 43 71 88

# include <stdio.h>

int main(void)
{
    int scores[] = {55, 61, 43, 71, 88, 33, 22, 11, 16, 99};
    int min = scores[0];
    int max = scores[0];
    
    for(int i = 0; i < sizeof(scores)/sizeof(scores[0]); i++)
    {
        if(min > scores[i])
        {
            min = scores[i];
        }
        if(max < scores[i])
        {
            max = scores[i];
        }
    }

    printf("最低得点：%d点、最高得点：%d点です。", min, max);

    return 0;
}