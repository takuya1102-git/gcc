# include <stdio.h>

int main(void)
{
    int age ;
    int addyear = 4;
      
    printf("あなたは何歳ですか？\n");
    scanf("%d", &age);

    int age2 = age + addyear;

    printf("%d年後は%d歳ですね。\n", addyear, age2);

    return 0;
}