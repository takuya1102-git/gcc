// add�֐��̖߂�l���󂯎��B
#include <stdio.h>

int add(int x, int y); //�v���g�^�C�v�錾

int main(void) //���C���֐����s
{
    int year = 2022; //int�^��year�ϐ��錾�A2022�̒l����
    int ans1; //int�^��ans1��錾

    ans1 = add(year, 4); 
    //add�֐��ɕϐ�year,4�������n���A�Ԃ��ꂽ�߂�lans��ans1�ɑ��
    printf("%d�N��%d�N���%d�N�ł��B\n", year, 4, ans1);

    int ans2 = add(year, 50); 
    //int�^��ans2��錾�Aadd�֐��ɕϐ�year,4�������n���A�Ԃ��ꂽ�߂�lans��ans2�ɑ��
    printf("%d�N��%d�N��%d�N��ł��B\n", ans2, year, 50);

    return 0; //����I��
}

int add(int x, int y)  
//�֐���`�@add�Ɩ����@�߂�l��int�^�A������int�^Xy��ݒ�
{
    int ans = x + y; //�����@�Fint�^��ans��錾�A���Z�����l����
    return ans; //�߂�l��ans���Ăяo�����Ɉ����n���B
}