#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String name;
    printf("���Ȃ��̖��O����͂��ĉ������B\n");
    scanf("%s", name);

    String ageStr;
    printf("���Ȃ��̔N�����͂��ĉ������B\n");
    scanf("%s", ageStr);

    int age = atoi(ageStr);
    printf("�悤����%d�΂�%s����B", age, name);

    return 0;
}