//����������͂����͂��ꂽ���������A�u���v��\�����Ă��������B

# include <stdio.h>

int main(void)
{
    printf("0���傫����������͂��Ă��������B\n");
    int value;
    scanf("%d", &value);

    if(value > 0)
    {
        for(int i = 0; i < value; i++)
        {
        printf("*");    
        }
    }
    else
    {
        printf("�����ȓ��͂ł��B\n");
    }
    
    return 0;   
}