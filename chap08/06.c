// 戻り値　P236
#include <stdio.h>

// buy関数の定義
int buy(int x, int y){
    int z;
    printf("%d万円と%d万円の車を買いました。\n", x, y);
    z = x+y;
    // ↓、戻り値を返す
    return z;
}

// buy関数の呼び出し
int main(void){
    int num1, num2, sum;

    printf("いくらの車を買いますか？\n");
    scanf("%d", &num1);

    printf("いくらの車を買いますか？\n");
    scanf("%d", &num2);
    // 関数を呼び出し、その戻り値を変数sumに代入
    sum = buy(num1, num2);

    printf("合計で%d万円です。\n", sum);

    return 0;
}