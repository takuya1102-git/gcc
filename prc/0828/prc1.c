#include <stdio.h>

double calcAverage(int num1, int num2) //関数は汎用的に使えるようにする為に。
{
	
    return (double)(num1 + num2) / 2; 
    //新しい変数を用意しなくて良い。doubleの値に化けるのを戻り値にしてよい。
    //(double)でキャストしている。大きい方で結果は出るが、化けるのも受けるのも合わせる。
}

int main(void) {
	
    int a = 10;
    int b = 20;
    
    double avg = calcAverage(a, b);
    printf("平均値: %.2f\n", avg);
    
    return 0;
}