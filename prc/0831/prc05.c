//1����7�܂ł̐�������͂���ƁA����ɑΉ�����j����
//�\�������v���O�������쐬���Ă��������B
//���Ⴆ��1�Ɠ��͂����猎�j���A2�Ɠ��͂�����Ηj��
//�Ƃ�������ł��B

# include <stdio.h>

int main(void)
{
    printf("1����7�܂ł̐�������͂��Ă��������B\n");
    int weekday;
    scanf("%d", &weekday);

    switch(weekday)
    {
        case 1:
        printf("���j��\n");
        break;

        case 2:
        printf("���j��\n");
        break;

        case 3:
        printf("�Ηj��\n");
        break;

        case 4:
        printf("���j��\n");
        break;

        case 5:
        printf("�ؗj��\n");
        break;

        case 6:
        printf("���j��\n");
        break;

        case 7:
        printf("�y�j��\n");
        break;
        
        default:
        printf("�����ł��B1�`7�̐����œ��͂��Ă��������B\n");
    }
    return 0;

}