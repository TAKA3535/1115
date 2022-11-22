#include <stdio.h>

// buy関数の定義
void buy(void){
    printf("車を買いました。\n");
}

// buy関数の呼び出し
int main(void){
    buy();

    printf("もう１台車を購入します\n");
    // もう１度buy()関数を呼び出す
    buy();

    return 0;
}