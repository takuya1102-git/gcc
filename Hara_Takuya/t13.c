// プログラム概要
// 気晴らしになるちょっとしたゲームを選択。
// じゃんけん(rock.paper.scissors) 略してrps関数を作ります。
// 学んだ事で使っているもの・・・乱数/関数/if文/&演算子
// →textra.cがバージョンアップ版です。

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void rps(int you, int enemy);

int main(void)
{
    srand((unsigned)time(NULL));
    
    int you;
    printf("最初はグー！！\n");
    printf("ジャンケン...\n");
    printf("0:グー 1:チョキ 2:パー\n");
    scanf("%d", &you);

    int enemy = rand() % 3;

    rps(you, enemy);

    printf("また一緒に遊ぼう！！");
}

void rps(int you, int enemy)
{
    if(you == 0) //グー
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
        }
        else if(enemy == 2)
        {
            printf("あなたはグー\n");
            printf("あいてはパー\n");
            printf("残念！！\n");
        }
    }
    else if(you == 1) //チョキ
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
        }
    }
    else if(you == 2) //パー
    {
        if(enemy == 0)
        {
            printf("あなたはパー\n");
            printf("あいてはグー\n");
            printf("勝ちました！！\n");
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

