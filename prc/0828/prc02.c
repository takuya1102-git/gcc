//���̐���n�������Ƃ��Ď󂯎��An�̊K����v�Z���ĕԂ��֐�
//factorial���쐬���Ă��������B
//���K��͂��̐�����1�܂ł̐ρB�A��0�I��1

# include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("���̐��������Ă��������B�K��ŉ񓚂��܂��B\n");
    scanf("%d", &n);

    printf("%d�̊K���%d�ł��B", n, factorial(n) );
    
    return 0;
}

int factorial(int n)
{
    int ans = 1;
    if(n == 0)
    {
        ans = 1;
    }
    else if(n > 0)
    {
        for(int i = n; i > 0; i--)
        {
            ans *= i;
        }
    }
    else
    {
        ans = 0;
        printf("���̐����ȊO�����͂��ꂽ�ׁA�����ł��B���̌��ʂ͐���������܂���B\n");
    }

    return ans;
}