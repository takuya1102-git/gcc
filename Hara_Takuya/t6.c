# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int value;
    int ans;

    printf("数を入力してください。\n");
    scanf("%d", &value);
    
    ans = rand() % 10;

    if(value == ans)
    {
        printf("正解です。\n");
    }
    else
    {
        printf("不正解です。正解は%dです。\n", ans);
    }
        
    return 0;
}