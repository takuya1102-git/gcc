#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String name;
    printf("あなたの名前を入力して下さい。\n");
    scanf("%s", name);

    String ageStr;
    printf("あなたの年齢を入力して下さい。\n");
    scanf("%s", ageStr);

    int age = atoi(ageStr);
    printf("ようこそ%d歳の%sさん。", age, name);

    return 0;
}