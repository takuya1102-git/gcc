//�L�[�{�[�h���琳�̐����l��5����͂����A
//�ő�l�����߂�R�[�h����͂��ĉ������B

#include <stdio.h>

int main(void)
{
    int ans = 0;
    int max = 0;
    
    printf("��������͂��Ă��������B(5��)\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d��ړ��͂��ĉ�����\n", i + 1 );
        scanf("%d\n", &ans); //&���Z�q�Ń������̈�̐擪�Ԓn�ɉ�����B

        if(max < ans) //max < ans�Ȃ�
        {
            max = ans;//max��ans�̒l����
        }
    }

    printf("�ő�l��%d�ł��B\n", max);
}