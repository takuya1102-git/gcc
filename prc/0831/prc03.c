//0����100�܂ł̐����̂����A3�Ŋ���؂�鐔�������o�͂���v���O�������쐬���ĉ������B

# include <stdio.h>

int main(void)
{
    for(int i = 0; i <= 100; i++)
    {
        if(i % 3 ==0)
        {
            printf("%02d ", i);
        }      
    }
    return 0;
}