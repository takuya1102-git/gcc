//“ñ‚Â‚Ì®”‚ğˆø”‚Æ‚µ‚Äó‚¯æ‚èA‚»‚ê‚ç‚Ì•½‹Ï‚ğŒvZ‚µ‚Ä•Ô‚·
//calcAverageŠÖ”‚ğì¬‚µ‚Ä‚­‚¾‚³‚¢B

# include <stdio.h>

double calcAverage(int x, int y);

int main(void)
{
    int x = 31;
    int y = 32;

    printf("%.2f", calcAverage(x, y));

    return 0;
}

double calcAverage(int x, int y)
{
    return (x + y) /2.0;
}