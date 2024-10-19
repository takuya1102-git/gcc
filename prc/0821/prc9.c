#include <stdio.h>

int main(void){

    int values[10] = {12, 34, 8, 45, 22, 3, 29, 55, 1, 5};

    int t;

    // バブルソート
    for(int i = 0; i < 10; i++){

        for(int j = i + 1; j < 10; j++){

            if(values[i] > values[j]){
                t = values[i];
                values[i] = values[j];
                values[j] = t;
            }
        }
    }

    printf("並び替え後の値：");

    for(int i = 0 ; i < 10 ; i++){
        printf( "%d ", values[i]);
    }

    return 0;
}