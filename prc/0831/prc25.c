//��̐����������Ƃ��Ď󂯎��A�����̕��ς��v�Z���ĕԂ�
//calcAverage�֐����쐬���Ă��������B

# include <stdio.h>

double calcAverage(int x, int y);

int main(void)
{
    int x = 31;
    int y = 32;

    printf("%.2f", calcAverage(x, y));

    return 0;
}

double calcAverage(int x, int y)
{
    return (x + y) /2.0;
}