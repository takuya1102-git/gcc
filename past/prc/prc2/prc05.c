#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numStr;
    printf("1����7�̔ԍ�����͂��Ă��������B\n");
    scanf("%s", numStr);
    int num = atoi(numStr);

    if(num == 1)
    {
        printf("���j��\n");
    }
    else if(num == 2)
    {
        printf("�Ηj��\n");
    }
    else if(num == 3)
    {
        printf("���j��\n");
    }
    else if(num == 4)
    {
        printf("�ؗj\n");
    }
    else if(num == 5)
    {
        printf("���j��\n");
    }
    else if(num == 6)
    {
        printf("�y�j��\n");
    }
    else if(num == 7) 
    {
        printf("���j��\n");
    }
    else 
    {
        printf("1����7�œ��͂��Ă��������B\n");
    }

    return 0;
    
}