# include <stdio.h>

int main(void)
{
    int scores[5] = {92, 88, 85, 98, 100};
    int max = scores[0];
    int min = scores[0];
    int sum = 0;
    double avg ;

    for(int i = 0; i < 5; i++)
    {
        if(max < scores[i])
        {
            max = scores[i];
        }
        
        if(min > scores[i])
        {
            min = scores[i];
        }

        sum += scores[i];
    }

    avg = sum / 5.0;

    printf("最高点は%dです。\n", max);
    printf("最低点は%dです。\n", min);
    printf("合計点は%dです。\n", sum);
    printf("平均点は%.2fです。\n", avg);

    return 0;
}