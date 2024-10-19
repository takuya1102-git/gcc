#include <stdio.h>

int factorial(int n) //再帰呼び出し。マトリョーシカ
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
    printf("%dの階乗: %d\n", n, result);
    
    return 0;
}