// �v���O�����T�v
// �C���炵�ɂȂ邿����Ƃ����Q�[����I���B
// ����񂯂�(rock.paper.scissors) ������rps�֐������܂��B
// �w�񂾎��Ŏg���Ă�����́E�E�E����/�֐�/if��/&���Z�q
// ��textra.c���o�[�W�����A�b�v�łł��B

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void rps(int you, int enemy);

int main(void)
{
    srand((unsigned)time(NULL));
    
    int you;
    printf("�ŏ��̓O�[�I�I\n");
    printf("�W�����P��...\n");
    printf("0:�O�[ 1:�`���L 2:�p�[\n");
    scanf("%d", &you);

    int enemy = rand() % 3;

    rps(you, enemy);

    printf("�܂��ꏏ�ɗV�ڂ��I�I");
}

void rps(int you, int enemy)
{
    if(you == 0) //�O�[
    {
        if(enemy == 0)
        {
            printf("���Ȃ��̓O�[\n");
            printf("�����Ă��O�[\n");
            printf("�������ł��B\n");
        }
        else if(enemy == 1)
        {
            printf("���Ȃ��̓O�[\n");
            printf("�����Ă̓`���L\n");
            printf("�����܂����I�I\n");
        }
        else if(enemy == 2)
        {
            printf("���Ȃ��̓O�[\n");
            printf("�����Ă̓p�[\n");
            printf("�c�O�I�I\n");
        }
    }
    else if(you == 1) //�`���L
    {
        if(enemy == 0)
        {
            printf("���Ȃ��̓`���L\n");
            printf("�����Ă̓O�[\n");
            printf("�c�O�I�I\n");
        }
        else if(enemy == 1)
        {
            printf("���Ȃ��̓`���L\n");
            printf("�����Ă��`���L\n");
            printf("�������ł��B\n");
        }
        else if(enemy == 2)
        {
            printf("���Ȃ��̓`���L\n");
            printf("�����Ă̓p�[\n");
            printf("�����܂����I�I\n");
        }
    }
    else if(you == 2) //�p�[
    {
        if(enemy == 0)
        {
            printf("���Ȃ��̓p�[\n");
            printf("�����Ă̓O�[\n");
            printf("�����܂����I�I\n");
        }
        else if(enemy == 1)
        {
            printf("���Ȃ��̓p�[\n");
            printf("�����Ă̓`���L\n");
            printf("�c�O�I�I\n");
        }
        else if(enemy == 2)
        {
            printf("���Ȃ��̓p�[\n");
            printf("�����Ă̓p�[\n");
            printf("�������ł��B\n");
        }
    }
    else
    {
        printf("�����ł��B\n");
    }
}

