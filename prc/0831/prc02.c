//0����20�܂ł̋��������Ԃɏo�͂���v���O�������쐬���Ă��������B

# include <stdio.h>

int main(void)
{
    for(int i = 0; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            printf("%02d ", i);
        }
    }
    return 0;
}