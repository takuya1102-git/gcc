// ���邤�N�𔻒肷��֐�
#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year); //�v���g�^�C�v�錾

int main(void) //���C���֐����s
{
    int year = 1600; // int�^�ŕϐ�year��錾��1600�̃��e��������

    if(isLeapYear(year)) //�����l����������
    {
        printf("%d�N�͂��邤�N�ł��B\n", year);
    }
    else //�����l������Ȃ�������A
    {
        printf("%d�N�͂��邤�N�ł͂���܂���B\n", year);
    }
    return 0; //����I��
}

bool isLeapYear(int year) 
//�֐���`�Abool�^�̖߂�l�ŕԂ�isLeapYear�Ɩ����A������int�^�̕ϐ�year�Ŏ󂯎��B
{
    return (year % 400 == 0 || (year % 4 && year % 100 != 0)); 
    //400�Ŋ���؂��B��������4�Ŋ���؂��100�Ŋ���؂�Ȃ������Ȃ�1���A�ȊO��0��߂�l�Ƃ��ĕԂ��B
}