#include <stdio.h>

void funcA(void); //�v���g�^�C�v�錾
void funcB(void); //�v���g�^�C�v�錾

int main(void) //���C���֐����s�i��ԍŏ��j
{
    funcA(); //�֐��Ăяo��
    return 0; //����I��
}

void funcA(void) //�֐���`�@�d�v�����̕\��
{
    printf("�֐�A�ł��B\n"); //�Ώۂ̊֐�
    funcB(); //�ʂ̊֐��Ăяo��
}

void funcB(void) //�֐���`�@�d�v�����̕\��
{
    printf("�֐�B�ł��B\n"); //�Ώۂ̊֐�
}