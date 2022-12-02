#include <stdio.h>

int main(void){
    char str[100];

    printf("文字列を入力してください\n");
    scanf("%s", str);

    printf("入力した文字列は%sです。\n", str);
// 入力した文字列に空白があると空白以降は読み込まれない
    return 0;
}