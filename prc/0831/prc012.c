//�L�[�{�[�h���琮���l����͂���
//�ꍇ�ɉ����Ď��̂悤�ȃ��b�Z�[�W���o�͂���R�[�h���L�q���Ă��������B
//�l��0-10�̏ꍇ�@�����ł��B
//����ȊO�̏ꍇ�@�ԈႢ�ł��B

# include <stdio.h>

int main(void)
{
    printf("���̐�������͂��Ă��������B\n");
    int value;
    scanf("%d", &value);

    if(0 <= value && value <= 10)
    {
        printf("�����ł��B\n");
    }
    else
    {
        printf("�ԈႢ�ł��B\n");
    }
    
    return 0;
}