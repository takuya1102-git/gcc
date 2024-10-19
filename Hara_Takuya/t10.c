# include <stdio.h>
# include <string.h>

void reverseString(char str[]);

int main(void)
{
    char str[1024];
    printf("ï∂éöóÒÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ÅB\n");
    scanf("%s", str);

    reverseString(str);

    return 0;
}

void reverseString(char str[])
{
    int len =strlen(str);
    
    printf("îΩì]ÇµÇΩï∂éöóÒÇÕ\n");
    for(int i = len; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("Ç≈Ç∑ÅB\n");
}