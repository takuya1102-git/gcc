#include <stdio.h>

int main(void){

    int values[10];

    printf("整数を入力してください（5回）。\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &values[i]);
    }

    printf("逆順で出力します。\n");

    for(int i = 4; i >= 0; i--){
        printf("%d\n", values[i]);
    }

    return 0;
}