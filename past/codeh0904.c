#include <stdio.h>

int main(void)
{
    int a = 70;
    printf("%d\n",a); //a�̒l��\��

    int* addrA = &a; //int�̃|�C���^�^addrA�ɃA�h���X���Z�q��p����a�̃A�h���X����

    // addrA = 50; int�̃|�C���^�^�̕ϐ�addrA�ɂ�int�̐���50�͑���ł��Ȃ��B
    printf("%p,%d\n", addrA, *addrA); 
    //�A�h���X�̕\����%p�ōs���B�|�C���^�^�̑O��*��t����Ƃ��̃A�h���X�������ϐ��̒l�ɉ�����

    return 0;

}