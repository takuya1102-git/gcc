//���͂����������u*�v�Ŏ����A�ȉ��̕\���ŏo�͂��Ă��������B
//     *    
//    ***   
//   *****  

# include <stdio.h>

int main(void)
{
    printf("���̐�������͂��Ă��������B\n");
    int pyramid ;
    scanf("%d", &pyramid);

    for(int i = 1 ; i <= pyramid; i++)
    {
        for(int j = i ; j < pyramid; j++)
        {
            printf(" ");
        }
        for(int k = 0 ; k < (2 * i - 1); k++)
        {
            printf("*");
        }
        for(int j = i ; j < pyramid; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}