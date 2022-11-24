// 関数
#include <stdio.h>

// buy関数の定義
void buy(void){
    printf("車を買いました。\n");
}
// ↑までがbuy()関数の処理内容
// buy関数の呼び出し
int main(void){
    // ↓でbuy()関数の処理が行われる
    buy();

    return 0;
}