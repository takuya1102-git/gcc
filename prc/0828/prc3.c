#include <stdio.h>

void checkEven(int num) 
{
	
    if (num % 2 == 0) 
    {
        printf("%d‚Í‹ô”‚Å‚·\n", num);
    } 
    else 
    {
        printf("%d‚ÍŠï”‚Å‚·\n", num);
    }
}

int main(void) 
{

    int number = 7;
    checkEven(number);

    return 0;
}