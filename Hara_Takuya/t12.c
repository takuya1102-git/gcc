# include <stdio.h>

int main(void)
{
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[7] = {0, 4, 5, 6, 5, 7, 4};

    printf("共通する要素は");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(array1[i] == array2[j])
            {
                printf("%d,",array1[i]);
                break;    
            }
        }
    }

    printf("です。\n");
    
    return 0;
}