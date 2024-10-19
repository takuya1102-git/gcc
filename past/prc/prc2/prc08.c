#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numStr;

    printf("1-9‚Ü‚Å‚Ì‚¢‚¸‚ê‚©‚Ì”š‚ğ‚¢‚ê‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s", numStr);
    int num = atoi(numStr);

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}