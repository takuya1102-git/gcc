//���̈�̒i��\������֐����쐬���Ă��������B
//���̒i�ł��邩�������ɂ��܂��B

//�o�͂�����̒i����͂��Ă��������B
//6
//6�̒i���o�͂��܂��B
// 6 12 18 24 30 36 42 48 54


#include <stdio.h>

void tables(int num); //�֐����`�Atables�ň������Aint�^�̕ϐ�num�Ŏ󂯎��B�߂�l�͖��B

int main(void)
{
    int num;

    printf("�o�͂�����̒i����͂��Ă��������B\n");
    scanf("%d", &num);
    printf("%d�̒i���o�͂��܂��B\n", num);
    tables(num); //�֐��錾

    return 0;

}

void tables(int num)
{
    for(int i = 1; i <= 9; i++) //num*1,num*2......num*9��num�̒i�̋��𐬗�������J��Ԃ�
    {
        int table = num * i; //�ϐ�num�ɕϐ�i��������tables�ɑ��
        printf("%2d ", table);
    }
}