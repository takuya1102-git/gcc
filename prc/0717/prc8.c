//���[�U�[�ɍs������͂��Ă��炢�A���̐����������܂ރp�^�[����\������
//5�̏ꍇ�A�ȉ��̂悤�ȏo�͂𓾂���悤�ɂ��Ă��������B
//*
//**
//***
//****
//*****


#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];
String numStr;

int main(void)
{
    scanf("%s",numStr);
    int num = atoi(numStr);

    for(int i = 1; i <= num; i++)
    {

        for(int j = 1; j <= i ; j++)
        {
            printf("*");
        }

    printf("\n");
    }

    return 0;
}