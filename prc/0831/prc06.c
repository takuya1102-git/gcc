//1����100�܂ł̊�̍��v���v�Z����v���O�������쐬

# include <stdio.h>

int main(void)
{
    int oddSum = 0;

    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)
        {
            oddSum += i;
        }
    }
    printf("1����100�܂ł̊�̍��v��%d�ł��B", oddSum);
    
    return 0;
}