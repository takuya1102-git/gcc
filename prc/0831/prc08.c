//���[�U�[�ɍs������͂��Ă��炢�A���̐����������܂ރp�^�[����\������
//5�̏ꍇ�A�ȉ��̂悤�ȏo�͂𓾂���悤�ɂ��Ă��������B
//*
//**
//***

# include <stdio.h>

int main(void)
{
    printf("0���傫����������͂��Ă��������B\n");
    int value;
    scanf("%d", &value);

    if(value > 0)
    {
        for(int i = 1; i <= value; i++)
        {
            for(int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");    
        }
        
    }
    else
    {
        printf("�����ȓ��͂ł��B\n");
    }
    
    return 0;   
}