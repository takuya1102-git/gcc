#include <stdio.h>

int main(void){

    int cnt;
    
    printf("整数を入力してください。\n");
    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++){
        printf("*");
    }
    
    return 0;
}