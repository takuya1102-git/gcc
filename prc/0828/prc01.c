//��̐����������Ƃ��Ď󂯎��A�����̕��ς��v�Z���ĕԂ�
//calcAverage�֐����쐬���Ă��������B

#include <stdio.h>

double calcAverage(int x, int y);

int main (void)
{
    int x = 25;
    int y = 26;
    printf("���ϒl��%.2f�ł��B", calcAverage(x, y) );
    
    return 0;
}

double calcAverage(int x, int y)
{
    //double z = (x + y) / 2.0;

    //return z;

    return (x + y) / 2.0;
}