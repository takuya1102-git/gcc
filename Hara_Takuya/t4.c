# include <stdio.h>

int main(void)
{
    int score;
    printf("あなたの成績を入力してください。\n");
    scanf("%d", &score);

    if(score >= 80)
    {
        printf("あなたの成績は優です。\n");
    }
    else if(score >= 60)
    {
        printf("あなたの成績は良です。\n");
    }
    else
    {
        printf("あなたの成績は可です。\n");
    }

    return 0;
}