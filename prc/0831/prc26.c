//���̐���n�������Ƃ��Ď󂯎��An�̊K����v�Z���ĕԂ��֐�
//factorial���쐬���Ă��������B
//���K��͂��̐�����1�܂ł̐ρB�A��0�I��1

# include <stdio.h>

int factorial(int x);

int main(void)
{
    int x = 7;
    printf("%d�̊K���%d�ł��B", x, factorial(x));

    return 0;
}

int factorial(int x)
{
    int fact = 1;
    if(x == 0)
    {
        return 1;
    }
    else
    {
        for(int i = x; i > 0; i--)
        {
            fact *= i;
        }
        return fact;
    }
}