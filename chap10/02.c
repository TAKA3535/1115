#include <stdio.h>

int main(void){
    int test[5] = {80, 60, 55, 22, 75};

    printf("test[0]の値は%dです。\n", test[0]);
    printf("test[0]のアドレスは%pです。\n", &test[0]);
    // ↓配列名だけで配列の先頭要素のアドレスを表している、[]や&等つけてはいけない
    // 配列名は配列の先頭要素のアドレスを格納しているポインタと同じ働きを持っているともいえる
    printf("testの値は%pです。\n", test);

    return 0;
}