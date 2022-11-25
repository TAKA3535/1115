// 間接参照　P280
#include <stdio.h>

int main(void){
    int a;
    int *pA;

    a = 5;
    pA = &a;

    printf("変数aの値は%dです。\n", a);
    // &変数名、変数のアドレスを表す
    printf("変数aのアドレスは%pです。\n", &a);
    printf("ポインタpAの値は%pです。\n", pA);
    printf("pAの値は%dです。\n", *pA);

    return 0;
}

// a : 変数
// &a : 変数aのアドレス
// pA : 変数aのアドレスを格納したポインタ
// *pA : 変数aのアドレスを格納するポインタを探している変数→変数a