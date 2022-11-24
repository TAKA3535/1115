#include <stdio.h>

int main(void){
    int a;
    int *pA;

    a = 5;
    pA = &a;

    printf("変数aの値は%dです。\n", a);

    *pA = 50;
// *pAとaや、*pA=50;とa=50;は同じ
    printf("pAに50を代入しました。\n", a);
    printf("変数aの値は%dです。\n", a);

    return 0;
}