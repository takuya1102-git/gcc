# include <stdio.h>

int main(void)
{
    int scores[5] = {92, 88, 85, 98, 100};
    int max = scores[0];
    int min = scores[0];
    int sum = 0;
    double avg ;

    for(int i = 0; i < 5; i++)
    {
        if(max < scores[i])
        {
            max = scores[i];
        }
        
        if(min > scores[i])
        {
            min = scores[i];
        }

        sum += scores[i];
    }

    avg = sum / 5.0;

    printf("�ō��_��%d�ł��B\n", max);
    printf("�Œ�_��%d�ł��B\n", min);
    printf("���v�_��%d�ł��B\n", sum);
    printf("���ϓ_��%.2f�ł��B\n", avg);

    return 0;
}