#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[4] = {19,20,29,29};
    int b[4];

    memcpy(b, a, 16);

    printf("%d,%p\n", a[1], &a[1]);
    printf("%d,%p\n", b[1], &b[1]);

    int ret = memcmp(a, b,16);

    if(ret == 0)
    {
        printf("“™‰¿‚Å‚·B\n");
    }
    
    return 0;
}