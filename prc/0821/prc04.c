//キーボードから正の整数値を5回入力させ、
//入力された順番と逆の順で表示させなさい。

#include <stdio.h>

int main(void)
{
    //int ans;
    int num[5] = {0}; //int型の配列num[5]を宣言
    
    printf("整数で入力してください。\n");
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d回目入力して下さい\n", i + 1 );
        scanf("%d", &num[i]); // \nは入れない。正しくscanf出来なくなる。
        //num[i] = ans;　各配列に代入していく
    }

    printf("逆順で出力します。\n");

    for(int i = 4; i >= 0; i--) //添え字の4から表示できるように4開始の0終了で1づつデクリメント
    {
        printf("%d\n", num[i]);
    }

    return 0;
}