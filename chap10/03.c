// 配列名から先頭要素の値を知る
#include <stdio.h>

int main(void){
    int test[5] = {80, 60, 55, 22, 75};

    printf("test[0]の値は%dです。\n", test[0]);
    printf("test[0]のアドレスは%pです。\n", &test[0]);
    printf("testの値は%pです。\n", test);
    printf("つまり*testの値は%dです。\n", *test);

    return 0;
}