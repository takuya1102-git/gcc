//�z��ɓ_����ݒ肵�A�ō��_�E�Œ�_��\������R�[�h���L�q���Ă��������B
// 55 61 43 71 88

# include <stdio.h>

int main(void)
{
    int scores[] = {55, 61, 43, 71, 88, 33, 22, 11, 16, 99};
    int min = scores[0];
    int max = scores[0];
    
    for(int i = 0; i < sizeof(scores)/sizeof(scores[0]); i++)
    {
        if(min > scores[i])
        {
            min = scores[i];
        }
        if(max < scores[i])
        {
            max = scores[i];
        }
    }

    printf("�Œᓾ�_�F%d�_�A�ō����_�F%d�_�ł��B", min, max);

    return 0;
}