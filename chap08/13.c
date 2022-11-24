// ファイル分割 P264
#include <stdio.h>
// ↓はヘッダファイルを読み込み
#include "myfunc.c"
// 13.cはプログラム本体
int main(void){
    int num1, num2, ans;

    printf("1番目の整数を入力してください。\n");
    scanf("%d", &num1);

    printf("2番目の整数を入力してください。\n");
    scanf("%d", &num2);
    
    ans = max(num1, num2);
    printf("最大値は%dです。\n", ans);

    return 0;
}