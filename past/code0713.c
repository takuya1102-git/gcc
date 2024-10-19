#include <stdio.h>

int main(void)
{
    enum {j = 5};  //理解不能
    int scores[j] = {88,61,90,75,93}; //5つの配列を設定
    int sum = 0;  //scoresを足し合わせBOX
    int max = scores[0];  //1つ目を初期値
    int min = scores[0];

    for(int i = 0; i < j; i++) // j = 5 未満で1つづつインクリメント
    {
        sum = sum + scores[i]; //

        if(max < scores[i]) //MAXより大きい場合は
        {
            max = scores[i]; //maxに代入
        }

        if(min > scores[i]) //minより小さい場合は
        {
            min = scores[i]; //minに代入
        }
        
    }

    printf("最高得点：%d\n", max);
    printf("最低得点：%d\n", min);
    printf("平均得点：%.2f\n", (double)sum / j);

    return 0;



}


