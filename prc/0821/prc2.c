#include <stdio.h>

int main(void){

    int ans = 1;
    int kai;

    printf("整数を入力してください。\n");
    scanf("%d", &kai);

    for(int i = 1; i <= kai; i++){

        ans *= i;
    }

    printf("%dの階乗は%dです。\n", kai, ans);

    return 0;
}