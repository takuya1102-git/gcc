//1から7までの整数を入力すると、それに対応する曜日が
//表示されるプログラムを作成してください。
//※例えば1と入力したら月曜日、2と入力したら火曜日
//といった具合です。

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    // enum{月曜日 = 1,火曜日,水曜日,木曜日,金曜日,土曜日,日曜日};
    String weekStr;
    scanf("%s",weekStr);
    int week = atoi(weekStr);

    if(week == 1)
    {
        printf("月曜日");
    }
    else if(week == 2)
    {
        printf("火曜日");
    }
    else if(week == 3)
    {
        printf("水曜日");
    }
    else if(week == 4)
    {
        printf("木曜日");
    }
    else if(week == 5)
    {
        printf("金曜日");
    }
    else if(week == 6)
    {
        printf("土曜日");
    }
    else
    {
        printf("日曜日");
    }

    return 0;
}