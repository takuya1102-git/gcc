//�����̔z��Ƃ��̗v�f���������Ƃ��Ď󂯎��A�z��̗v�f�̒��ōő�l�ƍŏ��l��
//���߂ĕ\������֐�findMinMax���쐬���Ă��������B�A���|�C���^�����p���Ĕz����֐���
//�n�����@��p���Ă��������B
//C����ł́A�z��̗v�f���𒼐ڎ󂯎����@�������ׁA
//�z��S�̂̃o�C�g�������̊e�v�f�̃o�C�g���Ŋ��邱�ƂŁA�v�f�������߂܂��B

# include <stdio.h>

void findMinMax(int* array, int index, int* min, int* max);

int main(void)
{
    int array[6] = {11, 22, 33, 44, 55, 66};
    int index = sizeof(array) / sizeof(array[0]);
    int min;
    int max;

    findMinMax(array, index, &min, &max);

    printf("�ŏ��l��%d�A�ő�l��%d�ł��B", min, max);
}

void findMinMax(int* array, int index, int* min, int* max)
{
    *min = array[0];
    *max = array[0];

    for(int i = 1; i < index; i++)
    {
        if(array[i] < *min)
        {
            *min = array[i];
        }
        if(*max < array[i])
        {
            *max = array[i];
        }
    }  
}