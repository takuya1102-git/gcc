//�L�[�{�[�h���琳�̐����l��5����͂���
//���͂��ꂽ���ԂƋt���łT�̐����l��\�����Ă��������B
//�������A�z��̓Y�������g�p���Ȃ����B

# include <stdio.h>

int main(void)
{
    int* values;

    printf("���̐�����5����͂��Ă��������B\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d��ڂ̓��͂����Ă��������B\n", i + 1);
        scanf("%d", (values + i));
    }

    for(int i = 4; i >= 0; i--)
    {
        printf("%d ", *(values + i));
    }

    return 0;
}