//�L�[�{�[�h���琳�̐����l��5����͂���
//���͂��ꂽ���ԂƋt���łT�̐����l��\�����Ă��������B
//�������A�z��̓Y�������g�p���Ȃ����B

#include <stdio.h>

int main(void)
{
    int num[10] ={0};
    printf("���̐����l����͂��Ȃ����B�i5��j\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", (num + i)); 
        //�z��͎����I�Ƀ|�C���^�^�@num[i]��num + i �͓��`

    }

    for(int i = 4; i >= 0; i--)
    {
        printf("%d,", *(num + i));
        //*(num + i)��num[i]�͋��Ɏw��̃������Ԓn�ɕϐ��𐶂ݏo�����Z�q
    }
}