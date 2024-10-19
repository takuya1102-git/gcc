#include <stdio.h>

int main(void)
{
    int scores[] = {75, 57, 90, 46, 82}; //ê¨â á@
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum += scores[i]; //ê¨â áA
    }

    printf("%d\n", sum);

    double avg = sum / 5.0; //ê¨â áB

    printf("%.2f", avg); //ê¨â áC
    
    return 0;
}