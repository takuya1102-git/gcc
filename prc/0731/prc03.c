//�L�[�{�[�h����1����5�܂ł�5�i�K�Ő��т���͂����A
//���тɉ����Ď��̂悤�ȃ��b�Z�[�W���o�͂����R�[�h���L�q���Ă��������B
// ���т���͂��Ă��������B
// 3
// ���т�3�ł��B����ɏ���߂����܂��傤�B
//�����Ƃ���΂�܂��傤�B
//������������΂�܂��傤�B
//�����ւ�悭�ł��܂����B
//�����ւ�D�G�ł��B



#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String scoreStr;
    printf("���т���͂��Ă��������B\n");
    scanf("%s", scoreStr);
    int score = atoi(scoreStr);

    switch(score)
    {
        case 1:
            printf("���т�%d�ł��B�����Ƃ���΂�܂��傤�B\n", score);
            break;
        case 2:
            printf("���т�%d�ł��B������������΂�܂��傤�B\n", score);
            break;
        case 3:
            printf("���т�%d�ł��B����ɏ���߂����܂��傤�B\n", score);
            break;
        case 4:
            printf("���т�%d�ł��B�����ւ�悭�ł��܂����B\n", score);
            break;
        case 5:
            printf("���т�%d�ł��B�����ւ�D�G�ł��B\n", score);
            break;
        default:
            printf("�����ł��B\n");
    }
    return 0;

}