# include <stdio.h>
# include <string.h>

void sub(char* addr)
{
    for(int i = 0; i < 3; i++)
    {
        printf("%d”Ô–ÚF%d\n", i+1, *(addr+i));
    }
    
}

int main(void)
{
    char a[] = {1,2,3};
    char b[3];

    sub(&a[0]);
    memcpy(&b[0], &a[0], 3);
    sub(&b[0]);
    if(memcmp(&a[0], &b[0], 3) == 0)
    {
        printf("³í");

    }

    return 0;
}