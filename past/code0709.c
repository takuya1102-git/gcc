#include <stdio.h>

typedef char String[1024];

int main(void)
{
    typedef struct //�\���̂���܂����B
    {
        String name; //�ϐ��ݒ肵�܂��B
        int hp;  //�ϐ��ݒ肵�܂��B
        int attack;  //�ϐ��ݒ肵�܂��B
    } Monster; //�\���̖̂��O��ύX���܂��BMonster�^

    Monster seiryu = {"��", 80, 15}; //Monster�^�ŕϐ���錾���܂��B
    Monster suzaku = {"�鐝", 100, 30}; //Monster�^�ŕϐ���錾���܂��B
    Monster byakko = {"����", 100, 20}; //Monster�^�ŕϐ���錾���܂��B
    Monster genbu = {"����", 100, 10}; //Monster�^�ŕϐ���錾���܂��B

    Monster monster[] = {suzaku, genbu, seiryu, byakko}; //Monster�^�Ŕz��^��錾�@Monster�z��^�ɂȂ�

    const String TEMPLATE = "%s : HP=%3d �U����=%2d\n"; //String�^�Œ萔��錾

    for(int i = 0; i < 4; i++)
    {
        printf(TEMPLATE,monster[i].name,monster[i].hp,monster[i].attack);
    }
    return 0;
}