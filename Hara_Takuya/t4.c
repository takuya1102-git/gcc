# include <stdio.h>

int main(void)
{
    int score;
    printf("���Ȃ��̐��т���͂��Ă��������B\n");
    scanf("%d", &score);

    if(score >= 80)
    {
        printf("���Ȃ��̐��т͗D�ł��B\n");
    }
    else if(score >= 60)
    {
        printf("���Ȃ��̐��т͗ǂł��B\n");
    }
    else
    {
        printf("���Ȃ��̐��т͉ł��B\n");
    }

    return 0;
}