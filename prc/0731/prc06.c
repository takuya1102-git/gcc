//�z��ɓ_����ݒ肵�A�ō��_�E�Œ�_��\������R�[�h���L�q���Ă��������B

#include <stdio.h>

int main(void)
{
    int scores[5] = {80,60,22,50,75};
    int max = scores[0];
    int min = scores[0];

    for(int i = 1; i < 5; i++)// 
    {
        if(max < scores[i])
        {
            max = scores[i];
        }
        if(min > scores[i])
        {
            min = scores[i];
        }
    }

    printf("�ō����_��%d�_�ł��B\n", max);
    printf("�Œᓾ�_��%d�_�ł��B\n", min);
    
    return 0;
}