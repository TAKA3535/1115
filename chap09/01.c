#include <stdio.h>

int main(void){
    int a;
    a = 5;

    printf("変数aの値は%dです。\n", a);
    // &変数名、変数のアドレスを表す
    printf("変数aのアドレスは%pです。\n", &a);

    return 0;
}