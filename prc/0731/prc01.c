//�L�[�{�[�h���琮���l����͂���
//�ꍇ�ɉ����Ď��̂悤�ȃ��b�Z�[�W���o�͂���R�[�h���L�q���Ă��������B
//�l��0-10�̏ꍇ�@�����ł��B
//����ȊO�̏ꍇ�@�ԈႢ�ł��B

#include <stdio.h> //
#include <stdlib.h> //typedef char String[1024];���g���ׂ̊�{�֐�

typedef char String[1024]; //char�^�̔z���String�^�Ɩ����B

int main(void)
{
    String ansStr; //�����̓��ꕨ��p��
    printf("0����10�܂ł̐�������͂��Ă��������B\n");
    scanf("%s", ansStr); //String�^���󂯎��AString�^�ϐ�ansStr�ɑ��
    
    int ans = atoi(ansStr); //int�^�ɕϊ�

    if(ans <= 10 && ans >= 0 ) //����0�ȏ�10�ȉ��Ȃ�
    {
        printf("�����ł��B\n");
    }
    else //����ȊO�Ȃ�
    {
        printf("�ԈႢ�ł��B\n");
    }

}