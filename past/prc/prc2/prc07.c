#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numStr;
    printf("1����9�̐��������Ă��������B\n");
    scanf("%s",numStr);

    int num = atoi(numStr);

    for(int i = 1; i <= num; i++ )
    {
        printf("*");
    }

    return 0;
}