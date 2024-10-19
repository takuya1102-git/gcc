# include <stdio.h>

void change(int* x1, int* x2);

int main(void)
{
    int x1;
    int x2;

    printf("2つの値を入力してください。\n");
    printf("値1:");
    scanf("%d", &x1);
    printf("値2:");
    scanf("%d", &x2);

    change(&x1, &x2);
    printf("入れ替えると\n");
    printf("値1は%dとなりました。\n", x1);
    printf("値2は%dとなりました。\n", x2);

    return 0;
}

void change(int* x1, int* x2)
{
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}