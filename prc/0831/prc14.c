//キーボードから1から5までの5段階で成績を入力させ、
//成績に応じて次のようなメッセージが出力されるコードを記述してください。
// 成績を入力してください。
// 3
// 成績は3です。さらに上をめざしましょう。
//もっとがんばりましょう。
//もう少しがんばりましょう。
//たいへんよくできました。
//たいへん優秀です。

# include <stdio.h>

int main(void)
{
    int eval;
    printf("1から5で成績を入力してください。\n");
    scanf("%d", &eval);

    switch (eval)
    {
    case 1:
        printf("成績は1です。もっとがんばりましょう。\n");
        break;
    case 2:
        printf("成績は2です。もう少しがんばりましょう。\n");
        break;
    case 3:
        printf("成績は3です。さらに上をめざしましょう。\n");
        break;
    case 4:
        printf("成績は4です。たいへんよくできました。\n");
        break;
    case 5:
        printf("成績は5です。たいへん優秀です。\n");
        break;
    default:
        printf("無効な数字が入力されました。\n");
    }
    
    return 0;
}