#include <stdio.h>

int main(void)
{
    enum {j = 5};  //����s�\
    int scores[j] = {88,61,90,75,93}; //5�̔z���ݒ�
    int sum = 0;  //scores�𑫂����킹BOX
    int max = scores[0];  //1�ڂ������l
    int min = scores[0];

    for(int i = 0; i < j; i++) // j = 5 ������1�ÂC���N�������g
    {
        sum = sum + scores[i]; //

        if(max < scores[i]) //MAX���傫���ꍇ��
        {
            max = scores[i]; //max�ɑ��
        }

        if(min > scores[i]) //min��菬�����ꍇ��
        {
            min = scores[i]; //min�ɑ��
        }
        
    }

    printf("�ō����_�F%d\n", max);
    printf("�Œᓾ�_�F%d\n", min);
    printf("���ϓ��_�F%.2f\n", (double)sum / j);

    return 0;



}


