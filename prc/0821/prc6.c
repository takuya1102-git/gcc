#include <stdio.h>

void KukuColumn(int col);

int main(void){

    int input;
    printf("出力する九九の段を入力してください。\n");

    scanf("%d", &input);

    KukuColumn(input);
    
    return 0;
}

void KukuColumn(int col)
{
    printf("%dの段を出力します。\n", col);

    for(int i = 1; i <= 9; i++){
        printf("%2d ", col * i);
    }

    printf("\n");
}

