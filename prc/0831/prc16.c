//�L�[�{�[�h���當�������͂����A
//������̒����𒲂ׂ�R�[�h���L�q���Ă��������B

# include <stdio.h>

int main(void)
{
    char str[1024];
    printf("�p���������͂��Ă��������B\n");
    scanf("%s", str);

    for(int i = 0; i < 1024; i++)
    {
        if(str[i] == '\0')
        {
            printf("������̒�����%d�ł��B", i);
            break;
        }
    }
    return 0;
}