//�^�u(\t)���g���āA���̂悤�ɋ��̕\����ʂɏo�͂���R�[�h���L�q���Ă��������B

# include <stdio.h>

int main(void)
{
    for(int row = 1; row <= 9; row++)
    {
        for(int col = 1; col <= 9; col++)
        {
            printf("%d\t", (row * col));
        }
        printf("\n");
    }

    return 0;
}