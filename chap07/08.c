// P207　文字列を入力
#include <stdio.h>
int main(void){
    char str[100];

    printf("文字列を入力してください。\n");
    // ↓scanfで入力する際、配列名には&をつけない
    scanf("%s", str);

    printf("入力した文字は%sです。\n", str);

    return 0;
}