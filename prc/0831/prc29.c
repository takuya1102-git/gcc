//整数の配列とその要素数を引数として受け取り、配列の要素の中で最大値と最小値を
//求めて表示する関数findMinMaxを作成してください。但しポインタを活用して配列を関数に
//渡す方法を用いてください。
//C言語では、配列の要素数を直接受け取る方法が無い為、
//配列全体のバイト数をその各要素のバイト数で割ることで、要素数を求めます。

# include <stdio.h>

void findMinMax(int* array, int index, int* min, int* max);

int main(void)
{
    int array[6] = {11, 22, 33, 44, 55, 66};
    int index = sizeof(array) / sizeof(array[0]);
    int min;
    int max;

    findMinMax(array, index, &min, &max);

    printf("最小値は%d、最大値は%dです。", min, max);
}

void findMinMax(int* array, int index, int* min, int* max)
{
    *min = array[0];
    *max = array[0];

    for(int i = 1; i < index; i++)
    {
        if(array[i] < *min)
        {
            *min = array[i];
        }
        if(*max < array[i])
        {
            *max = array[i];
        }
    }  
}