#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void)
{
    String answerNo;
    
    printf("�������悭�čō���C����j�q�̖��O�́H\n");
    printf("1�F�~�i�g�@2�F�~�T�L�@3�F�c�o�T�@4�F�~�T�G\n");
    
    scanf("%s", answerNo);
    int n = atoi(answerNo);

    if(n == 2)
    {
        printf("�吳��\n");
    }
    else
    {
        printf("�c�O\n");
    }


    return 0;
}