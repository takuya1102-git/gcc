# include <stdio.h>

int min(int x, int y, int z);

int main(void)
{
    int x;
    int y;
    int z;

    printf("1�Ԗڂ̐�������͂��Ă��������B\n");
    scanf("%d", &x);
    printf("2�Ԗڂ̐�������͂��Ă��������B\n");
    scanf("%d", &y);
    printf("3�Ԗڂ̐�������͂��Ă��������B\n");
    scanf("%d", &z);

    printf("�ŏ��l��%d�ł��B",min(x, y, z));

    return 0;
}

int min(int x, int y, int z)
{
    int min;

    if(x < y && x < z)
    {
        min = x;
    }
    else if(y < x && y < z)
    {
        min = y;
    }
    else if(z < x && z < y)
    {
        min = z;
    }
    else
    {
        min = x;
    }

    return min;
}