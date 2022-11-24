#include <stdio.h>

// sum関数の定義,戻り値は整数を返すためint sumを記載
int sum(int x, int y){
    // ↓、合計値を戻り値として返す
    return x+y;
}

int main(void){
    int num1, num2, ans;

    printf("1番目の整数を入力してください。\n");
    scanf("%d", &num1);

    printf("2番目の整数を入力してください。\n");
    scanf("%d", &num2);
    
    ans = sum(num1, num2);
    printf("合計は%dです。\n", ans);

    return 0;
}