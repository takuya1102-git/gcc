#include <stdio.h>

void findMinMax(int* array, int size, int* min, int* max) 
//int* arrayで配列を受け取る, int sizeはそのまま値, int* minはアドレス受け取り, int* maxもアドレス受け取り 
{
    *min = array[0]; //間接演算子でアドレス通じてメイン関数内のminに代入
    *max = array[0]; //間接演算子でアドレス通じてメイン関数内のmaxに代入
    
    for (int i = 1; i < size; i++)
    {
		
        if (array[i] < *min) // 受けとった配列と受け取ったアドレスで入れた値を比較
        {
            *min = array[i]; //値を間接演算子でminに代入
        }
        
        if (array[i] > *max)  // 受けとった配列と受け取ったアドレスで入れた値を比較
        {
            *max = array[i]; //値を間接演算子でmaxに代入
        }
    }
}

int main(void) 
{
	
    int numbers[] = {34, 12, 45, 7, 23, 56}; //int型の配列を宣言
    
    int size = sizeof(numbers) / sizeof(numbers[0]); //要素数を計算するためのコード

    int min;
    int max;
    
    findMinMax(numbers, size, &min, &max); //関数呼び出し　min,maxは&演算子でポインタ渡し
    
    printf("最小値: %d\n", min); //
    printf("最大値: %d\n", max); //

    return 0;
}
