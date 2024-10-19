//二次元配列に九九を設定し、
//それぞれの数値を入力させて配列から値を表示するコードを記述してください。
// 最初の整数1桁を入力してください。
// 3
// 次の整数1桁を入力してください。
// 5
// 3x5=15です。

// 先生が予告する配列の番号と添え字の番号の不一致にはまる問題

#include <stdio.h>
#include <stdlib.h> //atoiを使う為に追加

typedef char String[1024]; //要素数1024個のchar配列型をStringに別名を与える。

int main(void)
{
    int scores[9][9] = {0}; //九九の計算結果を入れる二次元配列の箱
    int low; //二次元配列前半用
    int col; //二次元配列後半用
    String lowStr; //質問1つ目の答えを入れる要素
    String colStr; //質問2つ目の答えを入れる要素

    for(low = 0; low < 9; low++) 
    {
        for(col = 0; col < 9; col++)
        {
            scores[low][col] = (low + 1) * (col + 1);
        }
    }

    printf("最初の整数1桁を入力してください。\n");
    scanf("%s", lowStr);

    printf("次の整数1桁を入力してください。\n");
    scanf("%s", colStr);

    low = atoi(lowStr);
    col = atoi(colStr);

    printf("%dx%d=%dです。", low, col, scores[low - 1][col - 1]);

    return 0;
}