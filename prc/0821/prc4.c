#include <stdio.h>

int main(void){

    int values[10];

    printf("��������͂��Ă��������i5��j�B\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &values[i]);
    }

    printf("�t���ŏo�͂��܂��B\n");

    for(int i = 4; i >= 0; i--){
        printf("%d\n", values[i]);
    }

    return 0;
}