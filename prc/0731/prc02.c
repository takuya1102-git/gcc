//�L�[�{�[�h����5�Ȗڂ̃e�X�g�̓_������͂��āA
//���̂悤�ȍ��v�_�ƕ��ϓ_�i�����_���ʂ܂ŕ\���j���o�͂���R�[�h���L�q���Ă��������B
//

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];


int main(void)
{
    int scores[5];//int�̔z��^�@scores[5]��錾
    String score; //String�^��score��錾
    int sum = 0; //int�^��sum��錾�A0�ŏ�����
    int i; //int�^��i��錾

    for( i = 0; i < 5; i++)
    {
        printf("%d�Ȗڂ̓_������͂��Ă�������\n", i + 1);
        scanf("%s", score);
        scores[i] = atoi(score);

        sum += scores[i]; //sum + scores[i]��sum�ɑ��

    }
    printf("%d�Ȗڂ̍��v�_��%d�_�ł��B\n", i, sum);

    double avg = sum / 5.0; //�����_���ʂ܂ŕ\���Ȃ̂ŕ��������_�^�ŕ��ς��o���B

    printf("%d�Ȗڂ̕��ϓ_��%.2f�_�ł��B", i, avg);//�����_���ʂ܂ŕ\���Ȃ̂�%.2f�Ə���

    return 0;



}