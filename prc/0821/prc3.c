#include <stdio.h>

int main(void){

    int max = 0;
    int value;

    printf("��������͂��Ă��������i5��j�B\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &value);

        if(value > max){
            max = value;
        }
    }

    printf("�ő�l��%d�ł��B", max);

    return 0;
}