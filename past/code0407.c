#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    int temp = 30;
    int ansNo = 1;
    String answer;
    
    while(ansNo == 1)
    {
        printf("���݂̐ݒ艷�x�F%d\n", temp);
        printf("�����ł����H�͂��F1�@�������F0\n");
        scanf("%s", answer);
        ansNo = atoi(answer);

        if(ansNo == 1)
        {
            temp = temp - 1;
        }
        else
        {
            printf("�ݒ���I�����܂��B\n");
        }
    }
    return 0;
}