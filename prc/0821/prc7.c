#include <stdio.h>

int MaxValue(int n1, int n2); //�v���g�^�C�v�錾

int main(void){

    int x;
    int y;
    int z;

    printf("3�̒l����͂��Ă��������B\n");

    scanf("%d", &x);//&���Z�q�Ń������̈�̐擪�ɉ�����̂Œl�̑�����\
    scanf("%d", &y);//&���Z�q�Ń������̈�̐擪�ɉ�����̂Œl�̑�����\
    scanf("%d", &z);//&���Z�q�Ń������̈�̐擪�ɉ�����̂Œl�̑�����\

    printf("��ԑ傫�Ȓl��%d�ł��B", MaxValue(x, MaxValue(y, z)));
    //�֐����d�˂ăX�b�L��������B�@(�������̑傫����)��x�̑傫������%d�ŕ\��

    return 0;
}

int MaxValue(int n1, int n2)
{
    if( n1 > n2 )
        return n1;
    else
        return n2;
}