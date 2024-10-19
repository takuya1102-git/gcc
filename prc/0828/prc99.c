# include <stdio.h>

int main(void)
{
    int numbers[] = {34, 12, 45, 7, 23, 56};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("%d", size);


    return 0;
}

