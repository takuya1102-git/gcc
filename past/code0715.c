#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
    srand((unsigned)time(NULL));

    printf("***�����ăQ�[��(���x��2)***\n");
    printf("3���̐����𓖂ĂĂ��������B\n");
    printf("�������e���̐����͂��傤�ӂ����܂���B\n");

    int answer[3];
    int input[3];
    bool check;

    for(int i = 0; i < 3; i++)
    {
        do
        {
            answer[i] = rand() % 10;
            for(int j = 0; j < i; j++)
            {
                check = false;
                if(answer[i] == answer[j])
                {
                    break;
                }
                check = true;
            }
        } while (i > 0 && check == false);
    }

    do
    {
        int hit = 0;
        int blow = 0;

        for(int i = 0; i < 3; i++)
        {
            printf("%d���ڂ̗\�z��0-9�œ��͂��Ă��������B\n", i + 1);
            String inputStr;
            scanf("%s",inputStr);
            input[i] = atoi(inputStr);
        }

        for(int i = 0; i < 3; i++)
        {
            if(input[i] == answer[i])
            {
            hit++;
            }
            for(int j = 0; j < 3; j++)
            {
            if(input[i] == answer[i] && i != j)
            {
                blow++;
            }
            }   
        }

        printf("%d�q�b�g�I %d�u���[�I\n", hit, blow);

        if(hit == 3)
        {
            printf("�����ł��B\n");
            break;
        }
        else
        {
            printf("�����܂����H�i0:�I���@0�ȊO�̐���:������j:");
            String retryStr;
            scanf("%s", retryStr);

            if(atoi(retryStr) == 0)
            {
                printf("�����́E�E�E");
                
                for(int i = 0; i < 3; i++)
                {
                    printf("%d", answer[i]);
                }
                
                printf("�ł����B\n");
                break;
            }

        } 

        
    } while (true) ;

    return 0;        
  
}