//���̐���n�������Ƃ��Ď󂯎��An�Ԗڂ̃t�B�{�i�b�`�����v�Z���ĕԂ��֐�
//fibonacci���쐬���Ă��������B
//�t�B�{�i�b�`����Ƃ́u1,1,2,3,5,8,13,21,34,55�c�v�̂悤�ɁA
//�O�̐����𑫂������������@���̎�

# include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int n = 8;
    printf("%d", fibonacci(n));
    
    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}