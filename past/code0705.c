#include <stdio.h>

int main(void)
{
    int scores[] = {75, 57, 90, 46, 82}; //���ʇ@
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum += scores[i]; //���ʇA
    }

    printf("%d\n", sum);

    double avg = sum / 5.0; //���ʇB

    printf("%.2f", avg); //���ʇC
    
    return 0;
}