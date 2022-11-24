#include <stdio.h>
// ↓、グローバル変数
int a = 0;

// func関数の定義
void func(void){
    // ↓,ローカル変数
    int c = 2;

    printf("func関数では変数aとcが使えます。\n");
    printf("変数aの値は%dです。\n", a);
    // 今回の場合↓はだめ、ほかの関数内のローカル変数は使えない
    // printf("変数aの値は%dです。\n", b);
    printf("変数cの値は%dです。\n", c);
}

// main関数の定義
int main(void){
    int b = 1;

    printf("main関数では変数aとbが使えます。\n");
    printf("変数aの値は%dです。\n", a);
    printf("変数bの値は%dです。\n", b);
    // 今回の場合↓はだめ、ほかの関数内のローカル変数は使えない
    // printf("変数cの値は%dです。\n", c);

    func();

    return 0;
}

