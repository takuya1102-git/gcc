#include <stdio.h>
#include <string.h> //memcpy,memcmp���g���ׂɒǉ�
#include <stdlib.h> //malloc���g���ׂɒǉ�

void sub(char* addr) 
//sub�̊֐����Œ�`(char�̃|�C���^�^�ŕϐ���addr�Ő擪�A�h���X���󂯎��)
{
    for(int i = 0; i < 3; i++)
    {
        printf("%d,%d\n", i+1, *(addr + i)); 
        //�Ԑډ��Z�q�Eaddr�̐擪�A�h���X����i���v���X���Ē��g�ɉ�����
    }
}

int main(void)
{
    char a[] = {1, 2, 3}; //char�̔z��^�ɒl����
    char* b = (char*)malloc(3); 
    //�q�[�v��3�o�C�g�m�ہAchar�̃|�C���^�^b�̐擪�A�h���X�Ɋ��蓖�āB
    
    sub(a); //a�̐擪�A�h���X��n���֐����Ăяo���B
    memcpy(b, a, 3); //�������̈�̂܂邲�ƃR�s�[
    sub(b); //b�̐擪�A�h���X��n���֐����Ăяo���B

    if(memcmp(a, b, 3) == 0) //�������̈�̂܂邲�Ɣ�r
    {
        printf("����\n");
    }

    free(b); //�g�p�ς݂̃q�[�v�̈�̉��

    return 0;
}