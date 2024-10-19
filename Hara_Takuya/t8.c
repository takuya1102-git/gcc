# include <stdio.h>

int main(void)
{
    int scores[6] = {48, 52, 58, 84, 75, 95};
    int temp;
    
    for(int i = 0; i < 6; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            if(scores[i] < scores[j])
            {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%dˆÊ‚Í%d‚Å‚·B\n", i + 1, scores[i]);
    }
    
    return 0;
}