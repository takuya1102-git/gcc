# include <stdio.h>

int main(void)
{
    int age ;
    int addyear = 4;
      
    printf("���Ȃ��͉��΂ł����H\n");
    scanf("%d", &age);

    int age2 = age + addyear;

    printf("%d�N���%d�΂ł��ˁB\n", addyear, age2);

    return 0;
}