#include <stdio.h>

int main(void){

    int ans = 1;
    int kai;

    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%d", &kai);

    for(int i = 1; i <= kai; i++){

        ans *= i;
    }

    printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n", kai, ans);

    return 0;
}