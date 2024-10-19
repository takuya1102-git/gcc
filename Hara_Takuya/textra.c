// プログラム概要
// 気晴らしになるちょっとしたゲームを選択。
// じゃんけん(rock.paper.scissors) 略してrps関数を作ります。
// 学んだ事で使っているもの・・・乱数/関数/if文/&演算子

// t13.cからゲーム性追加　１０回勝利するが条件。
// t13.cからのバージョンアップ・・・繰り返しで遊べる・勝利をカウント出来る・ゲーム脱出条件追加
// 追加使用：for文/ポインター(int* vcount)

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int rps(int you, int enemy, int* vcount);

int main(void)
{
    srand((unsigned)time(NULL));

    int vcount = 0;

    printf("彼にジャンケンで10回勝てるかな？\n");

    for(int i = 0;; i++) //回数上限無し。１０回勝利したら抜け出す。
    {
        int you;
        printf("最初はグー!!\n");
        printf("ジャンケン...\n");
        printf("0:グー 1:チョキ 2:パー\n");
        scanf("%d", &you);

        int enemy = rand() % 3;

        rps(you, enemy, &vcount);

        if(vcount >= 10)
        {
            printf("\n");
            printf("***************\n");
            printf("*合計10回勝利!*\n");
            printf("***************\n");
            printf("\n");
            printf("よく頑張りました!!");
            break;
        } 

        printf("\n");
        printf("-------------------\n");
        printf("| %d 回勝ちました。|\n", vcount);
        printf("-------------------\n");
        printf("\n");
        printf("もう１回!!\n");
        printf("\n");
    }   

    return 0; 
}

int rps(int you, int enemy, int* vcount)
{
    if(you == 0) //グー 0:グー 1:チョキ 2:パー
    {
        if(enemy == 0)
        {
            printf("あなたはグー\n");
            printf("あいてもグー\n");
            printf("あいこです。\n");
        }
        else if(enemy == 1)
        {
            printf("あなたはグー\n");
            printf("あいてはチョキ\n");
            printf("勝ちました！！\n");
            *vcount += 1;
        }
        else if(enemy == 2)
        {
            printf("あなたはグー\n");
            printf("あいてはパー\n");
            printf("残念！！\n");
        }
    }
    else if(you == 1) //チョキ 0:グー 1:チョキ 2:パー
    {
        if(enemy == 0)
        {
            printf("あなたはチョキ\n");
            printf("あいてはグー\n");
            printf("残念！！\n");
        }
        else if(enemy == 1)
        {
            printf("あなたはチョキ\n");
            printf("あいてもチョキ\n");
            printf("あいこです。\n");
        }
        else if(enemy == 2)
        {
            printf("あなたはチョキ\n");
            printf("あいてはパー\n");
            printf("勝ちました！！\n");
            *vcount += 1;
        }
    }
    else if(you == 2) //パー 0:グー 1:チョキ 2:パー
    {
        if(enemy == 0)
        {
            printf("あなたはパー\n");
            printf("あいてはグー\n");
            printf("勝ちました！！\n");
            *vcount += 1;
        }
        else if(enemy == 1)
        {
            printf("あなたはパー\n");
            printf("あいてはチョキ\n");
            printf("残念！！\n");
        }
        else if(enemy == 2)
        {
            printf("あなたはパー\n");
            printf("あいてはパー\n");
            printf("あいこです。\n");
        }
    }
    else
    {
        printf("無効です。\n");
    }
}

