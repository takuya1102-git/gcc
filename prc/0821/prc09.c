//整数10個{12,34,8,45,22,3,29,55,1,5}
//小さい順に並び変えて表示するコードを記述してください。

#include <stdio.h>

int main(void)
{
    int values[10] = {12,34,8,45,22,3,29,55,1,5}; //int型の配列を宣言する。
    int t; //詰め替え用の箱を用意
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(values[i] > values[j]) //若い添え字(10)が1つ上の添え字(8)より数が大きい時、
            {
                t = values[i];//若い添え字の値(10)をｔ(0)に代入
                values[i] = values[j];//一つ上の添え字(8)を若い添え字(10)に代入
                values[j] = t;//一つ上の添え字(8)にｔの値(10)を代入
            }
            
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d,", values[i]);
    }
}