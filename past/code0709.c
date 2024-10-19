#include <stdio.h>

typedef char String[1024];

int main(void)
{
    typedef struct //構造体つくりました。
    {
        String name; //変数設定します。
        int hp;  //変数設定します。
        int attack;  //変数設定します。
    } Monster; //構造体の名前を変更します。Monster型

    Monster seiryu = {"青龍", 80, 15}; //Monster型で変数を宣言します。
    Monster suzaku = {"朱雀", 100, 30}; //Monster型で変数を宣言します。
    Monster byakko = {"白虎", 100, 20}; //Monster型で変数を宣言します。
    Monster genbu = {"玄武", 100, 10}; //Monster型で変数を宣言します。

    Monster monster[] = {suzaku, genbu, seiryu, byakko}; //Monster型で配列型を宣言　Monster配列型になる

    const String TEMPLATE = "%s : HP=%3d 攻撃力=%2d\n"; //String型で定数を宣言

    for(int i = 0; i < 4; i++)
    {
        printf(TEMPLATE,monster[i].name,monster[i].hp,monster[i].attack);
    }
    return 0;
}