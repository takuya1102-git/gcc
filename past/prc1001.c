#include <stdio.h>
#include <string.h> //memcpy,memcmp�̊֐��g�p�ɕK�v

void sub(char* addr) 
//�֐���sub���`�i�|�C���^�^�@�|�C���^�ϐ�addr�ň����F�擪�A�h���X���󂯎��j
{
    for (int i =0; i < 3; i++)
    {
        printf("%d,%d\n", i + 1, *(addr + i)); 
        //addr��*(�Ԑډ��Z�q)�Ő擪�A�h���X�̎��ۂɏ������܂�Ă���l�����o���B
    }
}

int main(void)
{
    char a[] = {1,2,3};
    char b[3];

    sub(&a[0]); //&���Z�q��a[0]���擪�A�h���X�ɉ�����Asub�֐��Ɉ����Ƃ��ēn���ČĂяo���B
    memcpy(&b[0], &a[0], 3); //�������[�̈�̂܂邲�ƃR�s�[
    sub(&b[0]); //&���Z�q��b[0]���擪�A�h���X�ɉ�����Asub�֐��Ɉ����Ƃ��ēn���ČĂяo���B

    if(memcmp(&a[0], &b[0], 3) == 0) //�������̈�̂܂邲�Ɣ�r
    {
        printf("����\n");
    }

    return 0;
}
    
