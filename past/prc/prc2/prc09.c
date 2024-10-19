#include <stdio.h>

int main(void)
{
    for(int year = 1500; year <= 2060; year++)
    {
        if(year % 4 == 0 && year % 100 != 0)
        {
            printf("%d ", year);
        }
        else if(year % 400 ==0)
        {
            printf("%d ", year);
        }
        else
        {}

    }
}