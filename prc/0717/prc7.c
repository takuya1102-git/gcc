//����������͂����͂��ꂽ���������A�u���v��\�����Ă��������B

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