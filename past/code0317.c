#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numStr;

    printf("�J�����_�[����c�ɂȂ�񂾐�����3�I�сA���̍��v����͂������������B\n");
    scanf("%s", numStr);

    int num = atoi(numStr) / 3;
    printf("���Ȃ��̑I�񂾐���%d,%d,%d�ł��ˁB\n", num - 7, num, num +7);

    return 0;
}