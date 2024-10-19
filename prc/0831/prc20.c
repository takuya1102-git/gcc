//キーボードから正の整数値を5回入力させ、配列に格納します。
//そして入力された数値を偶数と奇数に分類して表示させてください。

# include<stdio.h>

int main(void)
{
    int values[5];
    int i;

    printf("正の整数を5回入力してください。\n");
    for(i = 0; i < (sizeof(values) / sizeof(values[0])); i++)
    {
        printf("%d回目入力してください。\n", i + 1);
        scanf("%d", &values[i]);
    }

    printf("偶数は、");
    for(i = 0; i < (sizeof(values) / sizeof(values[0])); i++)
    {
        if(values[i] % 2 == 0)
        printf("%d,", values[i]);
        
    }
    printf("です。\n");

    printf("奇数は、");
    for(i = 0; i < (sizeof(values) / sizeof(values[0])); i++)
    {
        if(values[i] % 2 != 0)
        printf("%d,", values[i]);
        
    }
    printf("です。\n");

    return 0;
}