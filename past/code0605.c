#include <stdio.h>
#include <stdbool.h>

typedef char String[1024];

int main(void)
{
    typedef struct 
    {
        String title;
        String from;
        String datetime;
        int size;
        bool attached;
        String body;

    }Mail;

    Mail m = {"�����܂��Ă��߂łƂ��������܂�", "takuyaassist0529@gmail.com", "2025/01/01 10:10:58", 302, true};

    printf("%s���񂩂�A%s�Ƀ��[���ł��B�T�C�Y��%dKB,�Y�t��%s�B\n", m.from, m.datetime, m.size, m.attached?"����":"�Ȃ�"); //���ʇF

    return 0;
    
}