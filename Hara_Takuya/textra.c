// �v���O�����T�v
// �C���炵�ɂȂ邿����Ƃ����Q�[����I���B
// ����񂯂�(rock.paper.scissors) ������rps�֐������܂��B
// �w�񂾎��Ŏg���Ă�����́E�E�E����/�֐�/if��/&���Z�q

// t13.c����Q�[�����ǉ��@�P�O�񏟗����邪�����B
// t13.c����̃o�[�W�����A�b�v�E�E�E�J��Ԃ��ŗV�ׂ�E�������J�E���g�o����E�Q�[���E�o�����ǉ�
// �ǉ��g�p�Ffor��/�|�C���^�[(int* vcount)

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int rps(int you, int enemy, int* vcount);

int main(void)
{
    srand((unsigned)time(NULL));

    int vcount = 0;

    printf("�ނɃW�����P����10�񏟂Ă邩�ȁH\n");

    for(int i = 0;; i++) //�񐔏�������B�P�O�񏟗������甲���o���B
    {
        int you;
        printf("�ŏ��̓O�[!!\n");
        printf("�W�����P��...\n");
        printf("0:�O�[ 1:�`���L 2:�p�[\n");
        scanf("%d", &you);

        int enemy = rand() % 3;

        rps(you, enemy, &vcount);

        if(vcount >= 10)
        {
            printf("\n");
            printf("***************\n");
            printf("*���v10�񏟗�!*\n");
            printf("***************\n");
            printf("\n");
            printf("�悭�撣��܂���!!");
            break;
        } 

        printf("\n");
        printf("-------------------\n");
        printf("| %d �񏟂��܂����B|\n", vcount);
        printf("-------------------\n");
        printf("\n");
        printf("�����P��!!\n");
        printf("\n");
    }   

    return 0; 
}

int rps(int you, int enemy, int* vcount)
{
    if(you == 0) //�O�[ 0:�O�[ 1:�`���L 2:�p�[
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
            *vcount += 1;
        }
        else if(enemy == 2)
        {
            printf("���Ȃ��̓O�[\n");
            printf("�����Ă̓p�[\n");
            printf("�c�O�I�I\n");
        }
    }
    else if(you == 1) //�`���L 0:�O�[ 1:�`���L 2:�p�[
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
            *vcount += 1;
        }
    }
    else if(you == 2) //�p�[ 0:�O�[ 1:�`���L 2:�p�[
    {
        if(enemy == 0)
        {
            printf("���Ȃ��̓p�[\n");
            printf("�����Ă̓O�[\n");
            printf("�����܂����I�I\n");
            *vcount += 1;
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

