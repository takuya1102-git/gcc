#include <stdio.h>

void KukuColumn(int col);

int main(void){

    int input;
    printf("�o�͂�����̒i����͂��Ă��������B\n");

    scanf("%d", &input);

    KukuColumn(input);
    
    return 0;
}

void KukuColumn(int col)
{
    printf("%d�̒i���o�͂��܂��B\n", col);

    for(int i = 1; i <= 9; i++){
        printf("%2d ", col * i);
    }

    printf("\n");
}

