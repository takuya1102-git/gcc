//�L�[�{�[�h���當�������͂����A
//������̒����𒲂ׂ�R�[�h���L�q���Ă��������B

#include <stdio.h>
#include <stdlib.h> //scanf���g�����߁B

typedef char String[1024]; //char[1024]�̔z��^��String�ɖ��O�ύX�@typedef�͕ʖ���^����֐�

int main(void)
{
    String msg; //String�^�iChar�z��^�j�ŕϐ�msg��錾
    printf("���������͂��Ă��������B\n");
    scanf("%s", msg); //���͂��ꂽ�������msg��String�^�̔��֓����B

    for(int i = 0; i < 1024; i++) // 1024�Ń������[�擾���Ă�̂ŁA���ꂪ�ő�l
    {
        if(msg[i] == '\0' ) //char�̃��e�����ׁ̈A''�ň͂��B���p���ň͂܂ꂽ�����@Char�^�@\0�ňꕶ���ƔF��
        {
            printf("������̒�����%d�ł�", i);
            break; //���[�v���甲���o���B�P�Ƃŗ��p�\�B

        }
    }
    return 0;
}