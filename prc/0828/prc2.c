#include <stdio.h>

int factorial(int n) //�ċA�Ăяo���B�}�g�����[�V�J
{
	
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

int main(void) 
{
	
    int n = 5;
    int result = factorial(n);
    printf("%d�̊K��: %d\n", n, result);
    
    return 0;
}