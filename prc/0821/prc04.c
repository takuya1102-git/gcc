//�L�[�{�[�h���琳�̐����l��5����͂����A
//���͂��ꂽ���ԂƋt�̏��ŕ\�������Ȃ����B

#include <stdio.h>

int main(void)
{
    //int ans;
    int num[5] = {0}; //int�^�̔z��num[5]��錾
    
    printf("�����œ��͂��Ă��������B\n");
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d��ړ��͂��ĉ�����\n", i + 1 );
        scanf("%d", &num[i]); // \n�͓���Ȃ��B������scanf�o���Ȃ��Ȃ�B
        //num[i] = ans;�@�e�z��ɑ�����Ă���
    }

    printf("�t���ŏo�͂��܂��B\n");

    for(int i = 4; i >= 0; i--) //�Y������4����\���ł���悤��4�J�n��0�I����1�Âf�N�������g
    {
        printf("%d\n", num[i]);
    }

    return 0;
}