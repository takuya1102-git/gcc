#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numStr;
    printf("1から7の番号を入力してください。\n");
    scanf("%s", numStr);
    int num = atoi(numStr);

    if(num == 1)
    {
        printf("月曜日\n");
    }
    else if(num == 2)
    {
        printf("火曜日\n");
    }
    else if(num == 3)
    {
        printf("水曜日\n");
    }
    else if(num == 4)
    {
        printf("木曜\n");
    }
    else if(num == 5)
    {
        printf("金曜日\n");
    }
    else if(num == 6)
    {
        printf("土曜日\n");
    }
    else if(num == 7) 
    {
        printf("日曜日\n");
    }
    else 
    {
        printf("1から7で入力してください。\n");
    }

    return 0;
    
}