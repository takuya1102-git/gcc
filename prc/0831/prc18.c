//二次元配列に九九を設定し、
//それぞれの数値を入力させて配列から値を表示するコードを記述してください。
// 最初の整数1桁を入力してください。
// 3
// 次の整数1桁を入力してください。
// 5
// 3x5=15です。

// 先生が予告する配列の番号と添え字の番号の不一致にはまる問題

# include <stdio.h>

int main(void)
{
    int tables[9][9];
    int row;
    int col;

    for(row = 0; row < 9; row++)
    {
        for(col = 0; col < 9; col++)
        {
            tables[row][col] = (row + 1) * (col + 1);
        }
    } 

    printf("最初の整数1桁を入力してください。\n");
    scanf("%d", &row);
    printf("次の整数1桁を入力してください。\n");
    scanf("%d", &col);
    printf("%dx%d=%d\n", row, col, tables[row - 1][col -1]);

    return 0;
}