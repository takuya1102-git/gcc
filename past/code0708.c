#include <stdio.h>

int main(void)
{
    int scores[2][3];
    int max ;

    scores[0][0] = 80;
    scores[0][1] = 77;
    scores[0][2] = 99;
    scores[1][0] = 51;
    scores[1][1] = 80;
    scores[1][2] = 95;

    for(int i = 0; i < 2; i++)
    {
        max = 0;

        printf("%d人目の点数は、、、\n", i + 1);

        for(int j = 0; j < 3; j++)
        {
            printf("%d科目目は%d点です。\n", j + 1, scores[i][j]);

            if(max < scores[i][j])
            {
                max = scores[i][j];
            }

        }
        printf("最高得点は%d点\n", max);
        printf("\n");
    
    }

    return 0;
}