#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    // enum{FIRE, WATER, WIND, EARTH};
    const char GEM_CHARS[] = {'$', '*', '@', '#'}; //柄決めます。
    int gems[10]; //柄を貼る箱を10個用意します。

    for(int i = 0; i< 10; i++) //10回繰り返します。
    {
        int gemType = rand() % 4; //0から3しかでないくじを設定します。
        gems[i] = gemType;  //出たくじ番号を箱に戻します。

        printf("%c",GEM_CHARS[gems[i]]); //成果⑧　箱に戻したくじ番号に応じた柄を貼って表示します。
    }

    return 0;


}