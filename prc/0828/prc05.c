//整数の配列とその要素数を引数として受け取り、配列の要素の中で最大値と最小値を
//求めて表示する関数findMinMaxを作成してください。但しポインタを活用して配列を関数に
//渡す方法を用いてください。
//C言語では、配列の要素数を直接受け取る方法が無い為、
//配列全体のバイト数をその各要素のバイト数で割ることで、要素数を求めます。

# include <stdio.h>

void findMinMax(int* array, int len, int* min, int* max);

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int min;
    int max;

    findMinMax(numbers, size, &min, &max);

    printf("min=%d,max=%d", min, max);

    return 0;
}



void findMinMax(int* array, int size, int* min, int* max)
{
    *min = array[0];
    *max = array[0];

    for(int i = 1; i < size ; i++)
    {
        if(*min > array[i])
        {
            *min = array[i];
        }

        if(*max < array[i])
        {
            *max = array[i];
        }
    }

}

// # include <stdio.h>
// # include <string.h>

// void findMinMax(int* x, int y);

// int main(void)
// {
//     int x[5] = {1,2,3,4,5};
//     int len = sizeof(x)/sizeof(x[0]);

//     findMinMax(x, len);
    
//     return 0;
// }

// void findMinMax(int* x, int y)
// {
//     int max = x[0];
//     int min = x[0];

//     for(int i = 0; i < y; i++)
//     {
//         if(max < x[i])
//         {
//             max = x[i];
//         }

//         if(min > x[i])
//         {
//             min = x[i];
//         }
               
        
//     }

//     printf("%d,%d\n", max, min);
// }