# include <stdio.h>

int min(int x, int y, int z);

int main(void)
{
    int x;
    int y;
    int z;

    printf("1番目の整数を入力してください。\n");
    scanf("%d", &x);
    printf("2番目の整数を入力してください。\n");
    scanf("%d", &y);
    printf("3番目の整数を入力してください。\n");
    scanf("%d", &z);

    printf("最小値は%dです。",min(x, y, z));

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