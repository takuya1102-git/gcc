#include  <stdio.h>

int main(void)
{
    typedef struct //構造体作成
    {
        int code; //メンバを宣言
        char character; //メンバを宣言
    } Ascii; //命名

    Ascii characters[26]; //作った構造体に変数（配列）を宣言

    for (int i = 0; i < 26; i++)
    {
        characters[i].code = i + 65; //各メンバへ代入
        characters[i].character = i + 65; //各メンバへ代入

        printf("%d,%c\n", characters[i].code, characters[i].character);
    }
    return 0;
    

    
}