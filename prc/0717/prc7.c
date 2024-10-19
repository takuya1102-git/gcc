//文字数を入力し入力された文字数分、「＊」を表示してください。

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];
String numStr;

int main(void)
{
    scanf("%s",numStr);
    int num = atoi(numStr);

    for(int i = 0; i < num; i++)
    {
        printf("*");
    }

}