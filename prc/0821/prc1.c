#include <stdio.h>

int main(void){

    int cnt;
    
    printf("��������͂��Ă��������B\n");
    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++){
        printf("*");
    }
    
    return 0;
}