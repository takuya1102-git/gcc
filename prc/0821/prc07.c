//��̐����̑傫������I�Ԋ֐����쐬���Ă��������B
//2��int�^���������A�傫�����̐��l��߂�l�Ƃ��ĕԂ����ƂƂ��܂��B
//�܂��Aint�^�̕ϐ�x,y,z�ɂ��ꂼ��̐��l��ݒ肵�A�쐬�����֐����g�p����
//�ł��傫�����l��\������R�[�h���L�q���Ă��������B

#include <stdio.h>

int max(int x, int y) //�֐����`�@max�Ɩ����@������int�^�ŕϐ�x,y�Ŏ󂯎��
{
    int ret = 0; //�߂�l�̕ϐ���ݒ�
    
    if(x > y) //x��y���傫�����
    {
        ret = x; //�傫������x��ret�ɑ��
    }
    else //x��y���傫���Ȃ����
    {
        ret = y; //�傫������y����ret�ɑ��
    }

    return ret;
}

int main(void)
{
    int x = 60;
    int y = 80;
    int z = 40;
    int ret = max(x, y); //int�^��ret��錾�B�֐��Ăяo���A�傫������ret�ɑ��
    ret = max(ret, z); //�֐��Ăяo���A�傫������ϐ�ret�֑��

    printf("%d", ret);

    return 0;

}