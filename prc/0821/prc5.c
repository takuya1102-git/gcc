#include <stdio.h>

int main(void){

    int values[10];

    printf("��������͂��Ă��������i5��j�B\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &values[i]);
    }
        
    printf("�����́A");

    for(int i = 0; i < 5; i++){

        if((values[i] % 2) == 0 ){
            printf("%d ", values[i]);
        }
    }

    printf("�ł��B\n");

    printf("��́A");

    for(int i = 0 ; i < 5 ; i++ ){

        if((values[i] % 2) != 0){
            printf("%d ", values[i]);
        }
    }

    printf("�ł��B\n");

    return 0;
}