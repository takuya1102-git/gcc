#include <stdio.h>

typedef char String[1024];

int main(void)
{
    typedef struct   //¬‰Ê‡D
    {
    String name;
    int hp;
    int attack;
    } Monster;

    Monster seiryu = {"Â—´", 80, 15};
    Monster suzaku = {"é", 100, 30};
    Monster byakko = {"”’ŒÕ", 100, 20};
    Monster genbu = {"Œº•", 100, 10};

    const String TEMPLATE = "%s : HP=%3d UŒ‚—Í=%2d\n"; //¬‰Ê‡E

    printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
    printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
    printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
    printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);

    return 0;
}