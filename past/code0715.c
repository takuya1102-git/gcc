#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
    srand((unsigned)time(NULL));

    printf("***数あてゲーム(レベル2)***\n");
    printf("3桁の数字を当ててください。\n");
    printf("ただし各桁の数字はちょうふくしません。\n");

    int answer[3];
    int input[3];
    bool check;

    for(int i = 0; i < 3; i++)
    {
        do
        {
            answer[i] = rand() % 10;
            for(int j = 0; j < i; j++)
            {
                check = false;
                if(answer[i] == answer[j])
                {
                    break;
                }
                check = true;
            }
        } while (i > 0 && check == false);
    }

    do
    {
        int hit = 0;
        int blow = 0;

        for(int i = 0; i < 3; i++)
        {
            printf("%d桁目の予想を0-9で入力してください。\n", i + 1);
            String inputStr;
            scanf("%s",inputStr);
            input[i] = atoi(inputStr);
        }

        for(int i = 0; i < 3; i++)
        {
            if(input[i] == answer[i])
            {
            hit++;
            }
            for(int j = 0; j < 3; j++)
            {
            if(input[i] == answer[i] && i != j)
            {
                blow++;
            }
            }   
        }

        printf("%dヒット！ %dブロー！\n", hit, blow);

        if(hit == 3)
        {
            printf("正解です。\n");
            break;
        }
        else
        {
            printf("続けますか？（0:終了　0以外の数字:続ける）:");
            String retryStr;
            scanf("%s", retryStr);

            if(atoi(retryStr) == 0)
            {
                printf("正解は・・・");
                
                for(int i = 0; i < 3; i++)
                {
                    printf("%d", answer[i]);
                }
                
                printf("でした。\n");
                break;
            }

        } 

        
    } while (true) ;

    return 0;        
  
}