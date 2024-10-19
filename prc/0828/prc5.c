#include <stdio.h>

void findMinMax(int* array, int size, int* min, int* max) 
//int* array�Ŕz����󂯎��, int size�͂��̂܂ܒl, int* min�̓A�h���X�󂯎��, int* max���A�h���X�󂯎�� 
{
    *min = array[0]; //�Ԑډ��Z�q�ŃA�h���X�ʂ��ă��C���֐�����min�ɑ��
    *max = array[0]; //�Ԑډ��Z�q�ŃA�h���X�ʂ��ă��C���֐�����max�ɑ��
    
    for (int i = 1; i < size; i++)
    {
		
        if (array[i] < *min) // �󂯂Ƃ����z��Ǝ󂯎�����A�h���X�œ��ꂽ�l���r
        {
            *min = array[i]; //�l���Ԑډ��Z�q��min�ɑ��
        }
        
        if (array[i] > *max)  // �󂯂Ƃ����z��Ǝ󂯎�����A�h���X�œ��ꂽ�l���r
        {
            *max = array[i]; //�l���Ԑډ��Z�q��max�ɑ��
        }
    }
}

int main(void) 
{
	
    int numbers[] = {34, 12, 45, 7, 23, 56}; //int�^�̔z���錾
    
    int size = sizeof(numbers) / sizeof(numbers[0]); //�v�f�����v�Z���邽�߂̃R�[�h

    int min;
    int max;
    
    findMinMax(numbers, size, &min, &max); //�֐��Ăяo���@min,max��&���Z�q�Ń|�C���^�n��
    
    printf("�ŏ��l: %d\n", min); //
    printf("�ő�l: %d\n", max); //

    return 0;
}
