//2000�N����2030�N�܂ł͈̔͂ł��邤�N�����߂�v���O�������쐬���Ă��������B
//���邤�N�̏����͈ȉ��̒ʂ�ł��B
//����N��4�Ŋ���؂��N�͂��邤�N�ł��B
//�������A100�Ŋ���؂��N�͂��邤�N�ł͂���܂���B
//�������A400�Ŋ���؂��N�͂��邤�N�ł��B

# include <stdio.h>

int main(void)
{
    for(int leap = 1600; leap <= 2030; leap++)
    {
        if(leap % 4 == 0)
        {
            if((leap % 400 == 0) || (leap % 100 != 0))
            {
                printf("%d ", leap);
            }            
        }
    }

    return 0;
}