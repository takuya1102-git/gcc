//1����7�܂ł̐�������͂���ƁA����ɑΉ�����j����
//�\�������v���O�������쐬���Ă��������B
//���Ⴆ��1�Ɠ��͂����猎�j���A2�Ɠ��͂�����Ηj��
//�Ƃ�������ł��B

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    // enum{���j�� = 1,�Ηj��,���j��,�ؗj��,���j��,�y�j��,���j��};
    String weekStr;
    scanf("%s",weekStr);
    int week = atoi(weekStr);

    if(week == 1)
    {
        printf("���j��");
    }
    else if(week == 2)
    {
        printf("�Ηj��");
    }
    else if(week == 3)
    {
        printf("���j��");
    }
    else if(week == 4)
    {
        printf("�ؗj��");
    }
    else if(week == 5)
    {
        printf("���j��");
    }
    else if(week == 6)
    {
        printf("�y�j��");
    }
    else
    {
        printf("���j��");
    }

    return 0;
}