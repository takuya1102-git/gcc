//�����̔z��Ƃ��̗v�f���������Ƃ��Ď󂯎��A�z��̗v�f�̒��ōő�l�ƍŏ��l��
//���߂ĕ\������֐�findMinMax���쐬���Ă��������B�A���|�C���^�����p���Ĕz����֐���
//�n�����@��p���Ă��������B
//C����ł́A�z��̗v�f���𒼐ڎ󂯎����@�������ׁA
//�z��S�̂̃o�C�g�������̊e�v�f�̃o�C�g���Ŋ��邱�ƂŁA�v�f�������߂܂��B

# include <stdio.h>

void findMinMax(int* array, int len, int* min, int* max);

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int min;
    int max;

    findMinMax(numbers, size, &min, &max);

    printf("min=%d,max=%d", min, max);

    return 0;
}



void findMinMax(int* array, int size, int* min, int* max)
{
    *min = array[0];
    *max = array[0];

    for(int i = 1; i < size ; i++)
    {
        if(*min > array[i])
        {
            *min = array[i];
        }

        if(*max < array[i])
        {
            *max = array[i];
        }
    }

}

// # include <stdio.h>
// # include <string.h>

// void findMinMax(int* x, int y);

// int main(void)
// {
//     int x[5] = {1,2,3,4,5};
//     int len = sizeof(x)/sizeof(x[0]);

//     findMinMax(x, len);
    
//     return 0;
// }

// void findMinMax(int* x, int y)
// {
//     int max = x[0];
//     int min = x[0];

//     for(int i = 0; i < y; i++)
//     {
//         if(max < x[i])
//         {
//             max = x[i];
//         }

//         if(min > x[i])
//         {
//             min = x[i];
//         }
               
        
//     }

//     printf("%d,%d\n", max, min);
// }