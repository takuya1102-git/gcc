//1����100�܂ł̊�̍��v���v�Z����v���O�������쐬


#include <stdio.h>

int main(void)
{
    int sum = 0;

    for(int i = 1; i <= 100; i++)
    {
        
        if(i % 2 != 0 )
        {
            sum = sum + i;
        }
    }

    printf("%d",sum);

    return 0;
}