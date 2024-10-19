//キーボードから文字列を入力させ、
//文字列の長さを調べるコードを記述してください。

# include <stdio.h>

int main(void)
{
    char str[1024];
    printf("英文字列を入力してください。\n");
    scanf("%s", str);

    for(int i = 0; i < 1024; i++)
    {
        if(str[i] == '\0')
        {
            printf("文字列の長さは%dです。", i);
            break;
        }
    }
    return 0;
}