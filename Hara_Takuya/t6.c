# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int value;
    int ans;

    printf("������͂��Ă��������B\n");
    scanf("%d", &value);
    
    ans = rand() % 10;

    if(value == ans)
    {
        printf("�����ł��B\n");
    }
    else
    {
        printf("�s�����ł��B������%d�ł��B\n", ans);
    }
        
    return 0;
}