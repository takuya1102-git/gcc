//�����������Ƃ��Ď󂯎��A���̐���������������𔻒肵�ĕ\������֐�
//checkEven���쐬���Ă��������B

# include <stdio.h>

void checkEven(int x);

int main(void)
{
    int x = 9;
    checkEven(x);

    return 0;
}

void checkEven(int x)
{
    if(x % 2 == 0)
    {
        printf("%d�͋����ł��B\n", x);
    }
    else
    {
        printf("%d�͊�ł��B\n", x);
    }
}