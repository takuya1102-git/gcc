#include <stdio.h>

double calcAverage(int num1, int num2) //�֐��͔ėp�I�Ɏg����悤�ɂ���ׂɁB
{
	
    return (double)(num1 + num2) / 2; 
    //�V�����ϐ���p�ӂ��Ȃ��ėǂ��Bdouble�̒l�ɉ�����̂�߂�l�ɂ��Ă悢�B
    //(double)�ŃL���X�g���Ă���B�傫�����Ō��ʂ͏o�邪�A������̂��󂯂�̂����킹��B
}

int main(void) {
	
    int a = 10;
    int b = 20;
    
    double avg = calcAverage(a, b);
    printf("���ϒl: %.2f\n", avg);
    
    return 0;
}