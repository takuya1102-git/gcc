#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    // enum{FIRE, WATER, WIND, EARTH};
    const char GEM_CHARS[] = {'$', '*', '@', '#'}; //�����߂܂��B
    int gems[10]; //����\�锠��10�p�ӂ��܂��B

    for(int i = 0; i< 10; i++) //10��J��Ԃ��܂��B
    {
        int gemType = rand() % 4; //0����3�����łȂ�������ݒ肵�܂��B
        gems[i] = gemType;  //�o�������ԍ��𔠂ɖ߂��܂��B

        printf("%c",GEM_CHARS[gems[i]]); //���ʇG�@���ɖ߂��������ԍ��ɉ���������\���ĕ\�����܂��B
    }

    return 0;


}