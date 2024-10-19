//文字数を入力し入力された文字数分、「＊」を表示してください。

# include <stdio.h>

int main(void)
{
    printf("0より大きい整数を入力してください。\n");
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
        printf("無効な入力です。\n");
    }
    
    return 0;   
}