# include <stdio.h>

void change(int* x1, int* x2);

int main(void)
{
    int x1;
    int x2;

    printf("2�̒l����͂��Ă��������B\n");
    printf("�l1:");
    scanf("%d", &x1);
    printf("�l2:");
    scanf("%d", &x2);

    change(&x1, &x2);
    printf("����ւ����\n");
    printf("�l1��%d�ƂȂ�܂����B\n", x1);
    printf("�l2��%d�ƂȂ�܂����B\n", x2);

    return 0;
}

void change(int* x1, int* x2)
{
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}