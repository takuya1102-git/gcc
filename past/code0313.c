#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int r = rand() % 100;
    printf("���Ȃ��͂��Ԃ�A%d�΂ł��ˁH\n", r);
    return 0;
}