#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("‚ ‚È‚½‚Ì‰^¨‚ğè‚¢‚Ü‚·‚ËB\n");
    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1;

    if(fortune == 1)
    {
        printf("‘å‹g\n");
    }
    else if(fortune == 2)
    {
        printf("’†‹g\n");
    }
    else if(fortune == 3)
    {
        printf("‹g\n");
    }
    else
    {
        printf("‹¥\n");
    }
    return 0;
}