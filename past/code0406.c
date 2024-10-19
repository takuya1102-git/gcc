#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("頂きます。\nバナナを食べます。\n");

    bool more = false;
    if(more == true)
    {
        printf("お代わりをください。\n");
    }
    else
    {
        printf("お腹がいっぱいです。\n");
        printf("ごちそうさまでした。\n");
    }
    return 0;
}
