//�񎟌��z��ɋ���ݒ肵�A
//���ꂼ��̐��l����͂����Ĕz�񂩂�l��\������R�[�h���L�q���Ă��������B
// �ŏ��̐���1������͂��Ă��������B
// 3
// ���̐���1������͂��Ă��������B
// 5
// 3x5=15�ł��B

// �搶���\������z��̔ԍ��ƓY�����̔ԍ��̕s��v�ɂ͂܂���

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

    printf("�ŏ��̐���1������͂��Ă��������B\n");
    scanf("%d", &row);
    printf("���̐���1������͂��Ă��������B\n");
    scanf("%d", &col);
    printf("%dx%d=%d\n", row, col, tables[row - 1][col -1]);

    return 0;
}