//九九の一つの段を表示する関数を作成してください。
//何の段であるかを引数にします。

//出力する九九の段を入力してください。
//6
//6の段を出力します。
// 6 12 18 24 30 36 42 48 54

# include <stdio.h>

void tables(int row);

int main(void)
{
    int row;
    
    printf("出力する九九の段を入力してください。\n");
    scanf("%d", &row);
    tables(row);

    return 0;
}

void tables(int row)
{
    for(int col = 1; col <= 9; col++)
    {
        printf("%d ", (row * col));
    }
}