// 2�̈�����n���B
#include <stdio.h>

void add(int x, int y); //�v���g�^�C�v�錾

int main(void) //���C���֐����s
{
    int year = 2022; //�@int�^�ŕϐ�year��錾�A2022�̒l����

    add(year, 4); //add�֐���int�^��year�̕ϐ���4�������n���Ăяo��
    add(year, 50); //add�֐���int�^��year�̕ϐ���50�������n���Ăяo��

    return 0; //����I��
}

void add(int x, int y) //add�̖��̂Ŋ֐���錾�A������int�^��x,y�̔���p��
{
    int ans = x + y; //�����@�@�����n���󂯎��p�̔�x,y�����Z
    printf("%d + %d = %d\n", x, y, ans); 
    //int�^�̃v���[�X�z���_�[�Ɋe�ϐ������A""����\��
}