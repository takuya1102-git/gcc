//ユーザーに行数を入力してもらい、その数だけ＊を含むパターンを表示する
//5の場合、以下のような出力を得られるようにしてください。
//*
//**
//***
//****
//*****


#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];
String numStr;

int main(void)
{
    scanf("%s",numStr);
    int num = atoi(numStr);

    for(int i = 1; i <= num; i++)
    {

        for(int j = 1; j <= i ; j++)
        {
            printf("*");
        }

    printf("\n");
    }

    return 0;
}