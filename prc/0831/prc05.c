//1から7までの整数を入力すると、それに対応する曜日が
//表示されるプログラムを作成してください。
//※例えば1と入力したら月曜日、2と入力したら火曜日
//といった具合です。

# include <stdio.h>

int main(void)
{
    printf("1から7までの整数を入力してください。\n");
    int weekday;
    scanf("%d", &weekday);

    switch(weekday)
    {
        case 1:
        printf("日曜日\n");
        break;

        case 2:
        printf("月曜日\n");
        break;

        case 3:
        printf("火曜日\n");
        break;

        case 4:
        printf("水曜日\n");
        break;

        case 5:
        printf("木曜日\n");
        break;

        case 6:
        printf("金曜日\n");
        break;

        case 7:
        printf("土曜日\n");
        break;
        
        default:
        printf("無効です。1〜7の整数で入力してください。\n");
    }
    return 0;

}