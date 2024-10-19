//1‚©‚ç7‚Ü‚Å‚Ì®”‚ğ“ü—Í‚·‚é‚ÆA‚»‚ê‚É‘Î‰‚·‚é—j“ú‚ª
//•\¦‚³‚ê‚éƒvƒƒOƒ‰ƒ€‚ğì¬‚µ‚Ä‚­‚¾‚³‚¢B
//¦—á‚¦‚Î1‚Æ“ü—Í‚µ‚½‚çŒ—j“úA2‚Æ“ü—Í‚µ‚½‚ç‰Î—j“ú
//‚Æ‚¢‚Á‚½‹ï‡‚Å‚·B

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    // enum{Œ—j“ú = 1,‰Î—j“ú,…—j“ú,–Ø—j“ú,‹à—j“ú,“y—j“ú,“ú—j“ú};
    String weekStr;
    scanf("%s",weekStr);
    int week = atoi(weekStr);

    if(week == 1)
    {
        printf("Œ—j“ú");
    }
    else if(week == 2)
    {
        printf("‰Î—j“ú");
    }
    else if(week == 3)
    {
        printf("…—j“ú");
    }
    else if(week == 4)
    {
        printf("–Ø—j“ú");
    }
    else if(week == 5)
    {
        printf("‹à—j“ú");
    }
    else if(week == 6)
    {
        printf("“y—j“ú");
    }
    else
    {
        printf("“ú—j“ú");
    }

    return 0;
}