#include <stdio.h>

// buy関数の定義
void buy(int x){
    printf("%d万円の車を買いました。\n", x);
}

// buy関数の呼び出し
int main(void){
    buy(20);
    buy(50);

    return 0;
}