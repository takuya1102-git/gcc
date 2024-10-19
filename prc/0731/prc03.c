//キーボードから1から5までの5段階で成績を入力させ、
//成績に応じて次のようなメッセージが出力されるコードを記述してください。
// 成績を入力してください。
// 3
// 成績は3です。さらに上をめざしましょう。
//もっとがんばりましょう。
//もう少しがんばりましょう。
//たいへんよくできました。
//たいへん優秀です。



#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String scoreStr;
    printf("成績を入力してください。\n");
    scanf("%s", scoreStr);
    int score = atoi(scoreStr);

    switch(score)
    {
        case 1:
            printf("成績は%dです。もっとがんばりましょう。\n", score);
            break;
        case 2:
            printf("成績は%dです。もう少しがんばりましょう。\n", score);
            break;
        case 3:
            printf("成績は%dです。さらに上をめざしましょう。\n", score);
            break;
        case 4:
            printf("成績は%dです。たいへんよくできました。\n", score);
            break;
        case 5:
            printf("成績は%dです。たいへん優秀です。\n", score);
            break;
        default:
            printf("無効です。\n");
    }
    return 0;

}