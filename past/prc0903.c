#include <stdio.h>

void printInByAddress(int* valAddr) //�֐���`�@�A�h���X��񂪊i�[�ł���|�C���^�^�ŕϐ�valAddr��p�ӂ��Ď󂯎��
{
    printf("%d", *valAddr); 
    //�|�C���^�ϐ��Ɋi�[����Ă���A�h���X���g���ă�������ǂݎ��A���̒l�ɉ�����
}

int main(void)
{
    int num = 999;
    printInByAddress(&num); 
    //���֐��ŕϐ�num���m�ۂ���Ă��郁�����̈�̐擪�A�h���X�ɉ����Ċ֐��Ăт����B�|�C���^�ϐ�num
    return 0;
}