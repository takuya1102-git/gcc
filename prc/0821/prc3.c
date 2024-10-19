#include <stdio.h>

int main(void){

    int max = 0;
    int value;

    printf("整数を入力してください（5回）。\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &value);

        if(value > max){
            max = value;
        }
    }

    printf("最大値は%dです。", max);

    return 0;
}