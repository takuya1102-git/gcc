#include <stdio.h>

void checkEven(int num) 
{
	
    if (num % 2 == 0) 
    {
        printf("%dは偶数です\n", num);
    } 
    else 
    {
        printf("%dは奇数です\n", num);
    }
}

int main(void) 
{

    int number = 7;
    checkEven(number);

    return 0;
}