//1‚©‚ç7‚Ü‚Å‚Ì®”‚ğ“ü—Í‚·‚é‚ÆA‚»‚ê‚É‘Î‰‚·‚é—j“ú‚ª
//•\¦‚³‚ê‚éƒvƒƒOƒ‰ƒ€‚ğì¬‚µ‚Ä‚­‚¾‚³‚¢B
//¦—á‚¦‚Î1‚Æ“ü—Í‚µ‚½‚çŒ—j“úA2‚Æ“ü—Í‚µ‚½‚ç‰Î—j“ú
//‚Æ‚¢‚Á‚½‹ï‡‚Å‚·B

# include <stdio.h>

int main(void)
{
    printf("1‚©‚ç7‚Ü‚Å‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    int weekday;
    scanf("%d", &weekday);

    switch(weekday)
    {
        case 1:
        printf("“ú—j“ú\n");
        break;

        case 2:
        printf("Œ—j“ú\n");
        break;

        case 3:
        printf("‰Î—j“ú\n");
        break;

        case 4:
        printf("…—j“ú\n");
        break;

        case 5:
        printf("–Ø—j“ú\n");
        break;

        case 6:
        printf("‹à—j“ú\n");
        break;

        case 7:
        printf("“y—j“ú\n");
        break;
        
        default:
        printf("–³Œø‚Å‚·B1`7‚Ì®”‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    }
    return 0;

}