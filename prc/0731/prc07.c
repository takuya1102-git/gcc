//�񎟌��z��ɋ���ݒ肵�A
//���ꂼ��̐��l����͂����Ĕz�񂩂�l��\������R�[�h���L�q���Ă��������B
// �ŏ��̐���1������͂��Ă��������B
// 3
// ���̐���1������͂��Ă��������B
// 5
// 3x5=15�ł��B

// �搶���\������z��̔ԍ��ƓY�����̔ԍ��̕s��v�ɂ͂܂���

#include <stdio.h>
#include <stdlib.h> //atoi���g���ׂɒǉ�

typedef char String[1024]; //�v�f��1024��char�z��^��String�ɕʖ���^����B

int main(void)
{
    int scores[9][9] = {0}; //���̌v�Z���ʂ�����񎟌��z��̔�
    int low; //�񎟌��z��O���p
    int col; //�񎟌��z��㔼�p
    String lowStr; //����1�ڂ̓���������v�f
    String colStr; //����2�ڂ̓���������v�f

    for(low = 0; low < 9; low++) 
    {
        for(col = 0; col < 9; col++)
        {
            scores[low][col] = (low + 1) * (col + 1);
        }
    }

    printf("�ŏ��̐���1������͂��Ă��������B\n");
    scanf("%s", lowStr);

    printf("���̐���1������͂��Ă��������B\n");
    scanf("%s", colStr);

    low = atoi(lowStr);
    col = atoi(colStr);

    printf("%dx%d=%d�ł��B", low, col, scores[low - 1][col - 1]);

    return 0;
}