//�����������Ƃ��Ď󂯎��A���̐���������������𔻒肵�ĕ\������֐�
//checkEven���쐬���Ă��������B

# include <stdio.h>

void checkEven(int value);

int main(void)
{
    int value;
    printf("��������͂��Ă��������B\n");
    scanf("%d", &value);
    checkEven(value);

    return 0;
}

void checkEven(int value)
{
    if(value % 2 == 0)
    {
        printf("%d�͋����ł��B", value);
    }
    else
    {
        printf("%d�͊�ł��B", value);
    }

}