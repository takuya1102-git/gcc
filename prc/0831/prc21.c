//���̈�̒i��\������֐����쐬���Ă��������B
//���̒i�ł��邩�������ɂ��܂��B

//�o�͂�����̒i����͂��Ă��������B
//6
//6�̒i���o�͂��܂��B
// 6 12 18 24 30 36 42 48 54

# include <stdio.h>

void tables(int row);

int main(void)
{
    int row;
    
    printf("�o�͂�����̒i����͂��Ă��������B\n");
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