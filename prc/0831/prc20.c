//�L�[�{�[�h���琳�̐����l��5����͂����A�z��Ɋi�[���܂��B
//�����ē��͂��ꂽ���l�������Ɗ�ɕ��ނ��ĕ\�������Ă��������B

# include<stdio.h>

int main(void)
{
    int values[5];
    int i;

    printf("���̐�����5����͂��Ă��������B\n");
    for(i = 0; i < (sizeof(values) / sizeof(values[0])); i++)
    {
        printf("%d��ړ��͂��Ă��������B\n", i + 1);
        scanf("%d", &values[i]);
    }

    printf("�����́A");
    for(i = 0; i < (sizeof(values) / sizeof(values[0])); i++)
    {
        if(values[i] % 2 == 0)
        printf("%d,", values[i]);
        
    }
    printf("�ł��B\n");

    printf("��́A");
    for(i = 0; i < (sizeof(values) / sizeof(values[0])); i++)
    {
        if(values[i] % 2 != 0)
        printf("%d,", values[i]);
        
    }
    printf("�ł��B\n");

    return 0;
}