#include <stdio.h>

int main(void){

    int values[10];

    printf("整数を入力してください（5回）。\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &values[i]);
    }
        
    printf("偶数は、");

    for(int i = 0; i < 5; i++){

        if((values[i] % 2) == 0 ){
            printf("%d ", values[i]);
        }
    }

    printf("です。\n");

    printf("奇数は、");

    for(int i = 0 ; i < 5 ; i++ ){

        if((values[i] % 2) != 0){
            printf("%d ", values[i]);
        }
    }

    printf("です。\n");

    return 0;
}