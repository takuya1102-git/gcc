#include <stdio.h>

void checkEven(int num) 
{
	
    if (num % 2 == 0) 
    {
        printf("%d�͋����ł�\n", num);
    } 
    else 
    {
        printf("%d�͊�ł�\n", num);
    }
}

int main(void) 
{

    int number = 7;
    checkEven(number);

    return 0;
}