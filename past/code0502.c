#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("���Ȃ��̉^���肢�܂��ˁB\n");
    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1;

    switch (fortune)
    {
        case 1:
        printf("��g\n");
        break;
        case 2:
        printf("���g\n");
        break;
        case 3:
        printf("�g\n");
        break;
        default:
        printf("��\n");
    }

    return 0;
}