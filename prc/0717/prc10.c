//��̕�������͂��A�ׂ���Ōv�Z���s���v���O�������쐬���Ă��������B
//�u2��5���32�ł��B�v�ƕ\������B


#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    printf("��̐�������͂��Ă��������B\n");
    String numStr1;
    String numStr2;
    scanf("%s%s",numStr1, numStr2);
    int num1 = atoi(numStr1);
    int num2 = atoi(numStr2);
    int num3 = 1;

    for(int i = 1; i <= num2; i++)
    {
        num3 = num3 * num1 ;
    }

    printf("%d %d %d\n", num1, num2, num3);

}