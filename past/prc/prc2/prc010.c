#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

String num1Str;
String num2Str;

int main(void)
{
    printf("�ׂ���v�Z�����܂��B�ׂ��悷�鐔�������Ă��������B\n");
    scanf("%s",  num1Str);
    printf("���悷�邩���������Ă��������B\n");
    scanf("%s",  num2Str);
    
    int num1 = atoi(num1Str);
    int num2 = atoi(num2Str);
    int sum = 1;

    for(int i = 1; i <= num2; i++)
    {
        sum = sum * num1;

    }

    printf("%d %d %d",num1, num2, sum);
    
    return 0;

}

