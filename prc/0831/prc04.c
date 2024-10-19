//•Ï”a = 20‚Æ•Ï”b = 30‚ğ“ü‚ê‘Ö‚¦‚éƒvƒƒOƒ‰ƒ€‚ğì¬‚µ‚Ä‚­‚¾‚³‚¢B

# include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 30;
    int temp ;

    temp = a;
    a = b;
    b = temp;

    printf("a=%d,b=%d", a, b);

    return 0;
}