#include <stdio.h>

int main(void){

    int values[10]; //�z���錾

    printf("��������͂��Ă��������i5��j�B\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", (values + i)); //�A�h���X�ɃA�N�Z�X�H
    }

    printf("�t���ŏo�͂��܂��B\n");

    for(int i = 4; i >= 0; i--){
        printf( "%d\n", *(values + i) );
        //�Ԑډ��Z�q�Ń|�C���^�ϐ��ɃA�N�Z�X�B
    }

    return 0;
}