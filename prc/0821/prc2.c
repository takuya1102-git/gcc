#include <stdio.h>

int main(void){

    int ans = 1;
    int kai;

    printf("��������͂��Ă��������B\n");
    scanf("%d", &kai);

    for(int i = 1; i <= kai; i++){

        ans *= i;
    }

    printf("%d�̊K���%d�ł��B\n", kai, ans);

    return 0;
}