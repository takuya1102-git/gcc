//�L�[�{�[�h���琳�̐����l����͂���
//���̊K����v�Z����R�[�h���L�q���Ă��������B
//��������͂��Ă��������B
//7
//7�̊K���5040�ł��B

# include <stdio.h>

int main(void)
{
    int value;
    int factrial = 1;
    
    printf("��������͂��Ă��������B\n");
    scanf("%d", &value);

    for(int i = value; i > 0; i--)
    {
        factrial *= i;
    }
    
    printf("%d�̊K���%d�ł��B", value, factrial);

    return 0;
}