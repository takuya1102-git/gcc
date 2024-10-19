//ユーザーに行数を入力してもらい、その数だけ＊を含むパターンを表示する
//5の場合、以下のような出力を得られるようにしてください。
//*
//**
//***

# include <stdio.h>

int main(void)
{
    printf("0より大きい整数を入力してください。\n");
    int value;
    scanf("%d", &value);

    if(value > 0)
    {
        for(int i = 1; i <= value; i++)
        {
            for(int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");    
        }
        
    }
    else
    {
        printf("無効な入力です。\n");
    }
    
    return 0;   
}