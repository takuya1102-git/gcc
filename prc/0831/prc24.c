//整数10個{12,34,8,45,22,3,29,55,1,5}
//小さい順に並び変えて表示するコードを記述してください。

# include <stdio.h>

int main(void)
{
    int array[10] = {12,34,8,45,22,3,29,55,1,5};
    int temp;

    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int k = 0; k < 10; k++)
    {
        printf("%d ", array[k]);
    }
    return 0;
}