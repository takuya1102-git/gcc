//�ϐ�a = 20�ƕϐ�b = 30�����ւ���v���O�������쐬���Ă��������B
#include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 30;
    int c;

    c = a;
    a = b;
    b = c;

    printf("a=%d,b=%d", a, b);


    return 0;
}