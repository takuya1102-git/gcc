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

    Mail m = {"あけましておめでとうございます", "takuyaassist0529@gmail.com", "2025/01/01 10:10:58", 302, true};

    printf("%sさんから、%sにメールです。サイズは%dKB,添付は%s。\n", m.from, m.datetime, m.size, m.attached?"あり":"なし"); //成果�F

    return 0;
    
}