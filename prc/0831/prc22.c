//��̐����̑傫������I�Ԋ֐����쐬���Ă��������B
//2��int�^���������A�傫�����̐��l��߂�l�Ƃ��ĕԂ����ƂƂ��܂��B
//�܂��Aint�^�̕ϐ�x,y,z�ɂ��ꂼ��̐��l��ݒ肵�A�쐬�����֐����g�p����
//�ł��傫�����l��\������R�[�h���L�q���Ă��������B

# include <stdio.h>

int maxValue(int x, int y);

int main(void)
{
    int x = 50;
    int y = 30;
    int z = 40;

    printf("�ł��傫�����l��%d�ł��B", maxValue(z,(maxValue(x, y))));

    return 0;
    
}

int maxValue(int x, int y)
{
    if(x < y)
    {
        return y;
    }
    else
    {
        return x;
    }
}