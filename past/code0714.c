#include  <stdio.h>

int main(void)
{
    typedef struct //�\���̍쐬
    {
        int code; //�����o��錾
        char character; //�����o��錾
    } Ascii; //����

    Ascii characters[26]; //������\���̂ɕϐ��i�z��j��錾

    for (int i = 0; i < 26; i++)
    {
        characters[i].code = i + 65; //�e�����o�֑��
        characters[i].character = i + 65; //�e�����o�֑��

        printf("%d,%c\n", characters[i].code, characters[i].character);
    }
    return 0;
    

    
}