#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int i = 1900; i <=2030; i++)
    {
        if(i % 4 == 0 && !(i % 100 == 0))
        {
            printf("%d\n", i);
        }
        else if(i % 400 == 0)
        {
            printf("%d\n", i);
        }

    }



    return 0;
}