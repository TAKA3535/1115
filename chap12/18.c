#include <stdio.h>

int main(void){
    int i;
    int sum = 0;
    fprintf(stderr, "ソースファイル名：%s\n", __FILE__);
    fprintf(stderr, "作成日付：%s\n", __DATE__);
    fprintf(stderr, "作成時刻：%s\n", __TIME__);
    fprintf(stderr, "最終変更時の時刻：%s\n", __TIMESTAMP__);
    fprintf(stderr, "コンパイル時の時刻：%d\n", __LINE__);
    fprintf(stderr, "ANSI Cに対応？%d\n", __STDC__);
    for ( i = 0; i <= 5; i++){
        sum = i + sum;
    }
    printf("1～5までの合計値は%dです。\n", sum);

    return 0;
}