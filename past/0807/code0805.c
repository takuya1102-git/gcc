// ��̈�����n���B
#include <stdio.h> //��{�I�Ȋ֐��̎g�p

typedef char String[1024]; //char[1024]�̔z����쐬�AString�ƕʖ���^����B

void hello(String name); //�v���g�^�C�v�錾

int main(void) //���C���֐����s
{
    printf("�֐����Ăяo���܂��B\n");
    hello("��"); //�֐��Ɉ�����n���Ăяo��
    hello("�ԏ�"); //�֐��Ɉ�����n���Ăяo��
    hello("�C��"); //�֐��Ɉ�����n���Ăяo��
    printf("�֐��̌Ăяo�����I���܂����B\n");

    return 0; //����I��
}

void hello(String name) //�֐��錾�@�����ݒ�@String�^�@�ϐ�name��p��
{
    printf("%s����A����ɂ���B\n", name); //�������e�@�ϐ�name���󂯎��\��
}