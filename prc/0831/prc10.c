//��̕�������͂��A�ׂ���Ōv�Z���s���v���O�������쐬���Ă��������B
//�u2��5���32�ł��B�v�ƕ\������B

# include <stdio.h>

int main(void)
{
    int base ;
    int expo ;
    int ans = 1;

    printf("�ׂ�����v�Z���܂��B\n");
    printf("��̒l�𐳂̐����œ��͂��Ă��������B\n");
    scanf("%d", &base);
    printf("�ׂ��w���̒l�𐳂̐����œ��͂��Ă��������B\n");
    scanf("%d", &expo);

    for(int i = 0; i < expo; i++)
    {
        ans *= base;
    }

    printf("%d��%d���%d�ł��B", base, expo, ans);
    return 0;
}