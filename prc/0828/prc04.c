//���̐���n�������Ƃ��Ď󂯎��An�Ԗڂ̃t�B�{�i�b�`�����v�Z���ĕԂ��֐�
//fibonacci���쐬���Ă��������B
//�t�B�{�i�b�`����Ƃ́u1,1,2,3,5,8,13,21,34,55�c�v�̂悤�ɁA
//�O�̐����𑫂������������@���̎�

#include <stdio.h>

int fibonacci(int value);

int main(void)
{
    int value;
    printf("���̐��������Ă��������B�t�B�{�i�b�`����ŕԂ��܂��B\n");
    scanf("%d", &value);
    
    printf("�t�B�{�i�b�`����%d�Ԗڂ́A%d�ł��B\n", value, fibonacci(value));
    
    return 0;
}

int fibonacci(int value)
{
    int a = 0;
    int b = 1;
    int c;

    if(value == 1)
    {
        c = 1;
    }
    else
    {
        for(int i = 1; i < value; i++)
        {
            c = a + b;
            a = b;
            b = c;  
        }

    }
    
    return c;
}