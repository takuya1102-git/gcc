#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numStr;
    printf("1‚©‚ç7‚Ì”Ô†‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s", numStr);
    int num = atoi(numStr);

    if(num == 1)
    {
        printf("Œ—j“ú\n");
    }
    else if(num == 2)
    {
        printf("‰Î—j“ú\n");
    }
    else if(num == 3)
    {
        printf("…—j“ú\n");
    }
    else if(num == 4)
    {
        printf("–Ø—j\n");
    }
    else if(num == 5)
    {
        printf("‹à—j“ú\n");
    }
    else if(num == 6)
    {
        printf("“y—j“ú\n");
    }
    else if(num == 7) 
    {
        printf("“ú—j“ú\n");
    }
    else 
    {
        printf("1‚©‚ç7‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    }

    return 0;
    
}