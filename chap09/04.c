#include <stdio.h>

int main(void){
    int a, b;
    int *pA;

    a = 5;
    b = 10;
    // 変数のアドレスを代入
    pA = &a;

    printf("変数aの値は%dです。\n", a);
    printf("ポインタpAの値は%pに変更されました。\n", pA);
    // *pAはaのアドレスを間接参照している,aのアドレスをさしている
    printf("pAの値は%dです。\n", *pA);

    // 変数のアドレスを代入
    pA = &b;

    printf("変数bの値は%dです。\n", b);
    printf("ポインタpAの値は%pです。\n", pA);
        // *pAはbのアドレスを間接参照している,bのアドレスをさしている
    printf("pAの値は%dです。\n", *pA);

    return 0;
}