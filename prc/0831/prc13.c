//�L�[�{�[�h����5�Ȗڂ̃e�X�g�̓_������͂��āA
//���̂悤�ȍ��v�_�ƕ��ϓ_�i�����_���ʂ܂ŕ\���j���o�͂���R�[�h���L�q���Ă��������B

# include <stdio.h>

int main(void)
{
    int tests[5] = {0};
    int sum = 0;
    double avg = 0;

    printf("5�Ȗڂ̃e�X�g�̓_������͂��Ă��������B\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d�Ȗږڂ́H\n", i + 1);
        scanf("%d", &tests[i]);
        sum += tests[i];
    }

    avg = sum / 5.0;
    printf("���v�_��%d�_�A���ϓ_��%.2f�_�ł��B", sum, avg);
    
    return 0;
}